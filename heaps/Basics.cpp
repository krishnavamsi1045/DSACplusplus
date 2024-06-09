#include <iostream>
using namespace std;

class heap{
    public:
    int * arr;
    int capacity;
    int size;

    heap(int capacity){
        this->capacity = capacity;
        this->size = 0;
        this->arr = new int[capacity];
    }

    void insert(int data){
        if(size == capacity){
            cout<<" overflow tammi"<<" ";
            return;
        }
       
        size++;
         int idx = size;
        arr[idx] = data;
        while ( idx>1){
            int parentIndex = idx/2;
            if(arr[idx]>arr[parentIndex]){
                swap(arr[idx],arr[parentIndex]);
                idx=parentIndex;
            }
            else{
                break;
            }
        }
      
    }
    void display(){
        for(int i=1;i<capacity;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    heap * a = new heap(7);
    int data;
   cout<<"enter the number";
   cin>>data;
   while(data != -1){
    a->insert(data);
    cout<<"enter the number";
    cin>>data;
   }
   a->display();
   
}