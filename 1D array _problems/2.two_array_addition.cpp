#include<iostream>
using namespace std;
int main(){

    int arr[7] = {2,4,5,6,7,8,3};
    
    int brr[7] =  {4,6,4,2,4,9,0};
    int sum[7];
    for(int i = 0 ;i<7;i++){

        sum [i]=arr[i] + brr[i];  
    }
    for(int i = 0;i<7;i++){
        cout<< sum[i] <<" ";
    }
    return 0;
}