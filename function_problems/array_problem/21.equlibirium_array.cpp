#include<iostream>
using namespace std;

int equilibrium(int arr[],int n){
    int total_sum = 0;

    // First find total sum
    for(int i = 0;i<n;i++){
        total_sum = arr[i] + total_sum;
    }

    int left_sum = 0;

    for(int i = 0;i<n;i++){
        total_sum = total_sum - arr[i];  // Right sum 
        
        if(total_sum == left_sum){
            return i;
        }
        left_sum = left_sum + arr[i];
    }

    return -1;

}
int main(){

    int n;
    cout<<"Enter the size of the array :";
    cin>>n;

   int arr[n];
   cout<<"enter the values of array :"<<endl;
   for(int i = 0;i<n;i++){
        cin>>arr[i];
   }


   int x = equilibrium(arr,n);

   cout<<"Equilibrium index = "<<x;
}
