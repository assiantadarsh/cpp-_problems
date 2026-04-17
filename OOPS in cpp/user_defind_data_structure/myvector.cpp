#include<iostream>
using namespace std;

class Vector{
    public:
        int size;
        int capacity;
        int *arr;
        Vector(){           // Default constructor
            size = 0;
            capacity = 1;
            arr = new int[1];
        
        }
        void add(int ele){
            if(size == capacity){
                capacity *= 2;
                int* arr2 = new int[capacity];
                for(int i = 0;i<size;i++){
                    arr2[i] = arr[i];
                }
                arr = arr2;
            }
            arr[size++] = ele;

        }

        void print(){
            for(int i = 0;i<size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

        void get(int idx){
            if(size == 0){
                cout<<"Array is empty";
            }
            else if(idx >= size || idx <0){
                cout<<"Invalid Index";
            }
            else{
                cout<<arr[idx];
            }

        }

        void remove(){
            if(size == 0){
                cout<<"Not possible";
            }
            else{
                size--;
            }
        }
};


int main(){

    Vector v1;
    v1.add(10);
    v1.print();
    v1.add(15);
    v1.print();
    v1.add(34);
    v1.print();
    v1.remove();
    v1.print();

    cout<<"Print any array index value"<<endl;
    int n;
    cout<<"Enter the number of index :";
    cin>>n;

    v1.get(n);

    return 0;
}