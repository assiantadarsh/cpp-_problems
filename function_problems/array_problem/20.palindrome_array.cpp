#include<iostream>
using namespace std;

// Que -> Check if array reads same forward and backward.

void palindrome(int arr[],int n){
    int i = 0 , j = n-1;
    while(i<j){
        if(arr[i] == arr[j]){
            i++;
            j--;
        }
        else{
            cout<<"Not Palindrome";
            return;
        }
    }
    cout<<"Yes this array was palindrome";
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

   palindrome(arr,n);

}
