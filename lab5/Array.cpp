#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::vector;

template <class T>
class Array{
public:
    Array(int size)
            :_array(vector<T>(size))
    {}

    void del(int index, int size){
        vector<T>array(_array.size()-size);
        for(int i=0, j=0;i<_array.size();++i){
            if(!(i>=index && i<index+size)){
                array[j]=_array[i];
                j++;
            }
        }
        _array=array;
    }

    int mut(){
        if(_array.empty()){
            return 0;
        }
        int answer = 1;
        for(auto x:_array){
            answer*=x;
        }
        return answer;
    }

    void out()const{
        for(auto x:_array){
            cout<<x<<" ";
        }
        cout<<'\n';
    }

    void input(){
        cout<<"Input array size: ";
        int n;
        cin>>n;
        _array = vector<T>(n);
        for(auto &x:_array){
            cin>>x;
        }
    }

    void copy(vector<T>const&array){
        _array=array;
    }

    void push_back(T a){
        _array.push_back(a);
    }

private:
    vector<T> _array;
};
