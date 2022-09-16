#include <iostream>
#include <string>
#include <exception>

using std::cout;
using std::string;

template<class T>
class DLinkedList {
public:
    DLinkedList()
            : size(0), head(0), tail(0) {}

    DLinkedList(DLinkedList<T> const &list) {
        size = 1;
        Node *a = list.head;
        Node *tmp = new Node(list.head->getValue());
        head = tmp;
        tail = tmp;
        for (int i = 0; i < list.size - 1; ++i) {
            a = a->getNext();
            this->push_back(a->getValue());
        }
    }

    bool isEmpty() const {
        return size == 0;
    }

    void push_back(T value) {
        if (this->isEmpty()) {
            Node *a = new Node(value);
            head = a;
            tail = a;
        } else {
            Node *a = new Node(value);
            tail->push_back(a);
            tail = a;
        }
        size++;
    }

    void push_start(T value) {
        if (this->isEmpty()) {
            Node *a = new Node(value);
            head = a;
            tail = a;
        } else {
            Node *a = new Node(value);
            head->push_start(a);
            head = a;
        }
        size++;
    }

    void add(int index, T value) {
        if (index >= size || index<0) {
            throw std::runtime_error(std::string("Out of Range"));
        }
        if (index == 0){
            this->push_start(value);
            return;
        }
        Node *a = head;
        Node *node = new Node(value);
        for (int i = 0; i < index-1; i++) {
            a = a->getNext();
        }
        Node *b = a->getNext();
        a->push_back(node);
        b->push_start(node);
        size++;
    }

    void changeValue(int index, T value) {
        if (index >= size || index<0) {
            throw std::runtime_error(std::string("Out of Range"));
        }
        Node *a = head;
        for (int i = 0; i < index; i++) {
            a = a->getNext();
        }
        a->setValue(value);
    }

    T getValue(int index) const {
        if (index >= size) {
            throw std::runtime_error(std::string("Out of Range"));
        }
        Node *a = head;
        for (int i = 0; i < index; i++) {
            a = a->getNext();
        }
        return a->getValue();
    }

    void pop_back() {
        if (this->isEmpty()) {
            throw std::runtime_error(std::string("List is Empty"));
        }
        Node *tmp = tail->getPrev();
        delete tail;
        tail = tmp;
        size--;
    }

    void pop_start() {
        if (this->isEmpty()) {
            throw std::runtime_error(std::string("List is Empty"));
        }
        Node *tmp = head->getNext();
        head->setNext(0);
        delete head;
        tmp->setPrev(0);
        head = tmp;
        size--;
    }

    void print() {
        Node *a = head;
        cout << "[";
        string str;
        for (int i = 0; i < size; i++) {
            cout << str << a->getValue();
            str = ", ";
            a = a->getNext();
        }
        cout << "]\n";
    }

    ~DLinkedList() {
        delete head;
    }

private:
    class Node {
    public:
        Node(T value = 0)
                : prev(0), next(0), value(value) {}

        void init(Node *newPrev, Node *newNext) {
            prev = newPrev;
            newPrev->next = this;
            next = newNext;
            newNext->prev = this;
        }

        void push_back(Node *newNext) {
            next = newNext;
            newNext->prev = this;
        }

        void setPrev(Node *prev) {
            Node::prev = prev;
        }

        void setNext(Node *next) {
            Node::next = next;
        }

        void push_start(Node *newPrev) {
            prev = newPrev;
            newPrev->next = this;
        }

        Node *getNext() {
            return next;
        }

        Node *getPrev() {
            return prev;
        }

        T getValue() const {
            return value;
        }

        void setValue(T newValue) {
            value = newValue;
        }

        ~Node() {
            delete next;
        }

    private:
        T value;
        Node *prev;
        Node *next;
    };

    Node *head;
    Node *tail;
    int size;
};
