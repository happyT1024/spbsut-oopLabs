class Array{
public:
    Array(int size)
    :_array(vector<int>(size))
    {}

    void del(int index, int size){
        vector<int>array(_array.size()-size);
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
        cout<<"Введите размер массива ";
        int n;
        cin>>n;
        _array = vector<int>(n);
        for(auto &x:_array){
            cin>>x;
        }
    }

    void copy(vector<int>const&array){
        _array=array;
    }

    void push_back(int a){
        _array.push_back(a);
    }

private:
    vector<int> _array;
};
