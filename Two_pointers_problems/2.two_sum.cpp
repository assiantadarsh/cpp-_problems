#include<iostream>
#include<vector>

// Ques -> Two Sum 
// IF array are sorted .
using namespace std;
int main(){

int n;
cout<<"Enter the size of the vactor : ";
cin>>n;

vector<int>v(n);

for(int i = 0;i<n;i++){
    cin>>v[i];
}

int target;
cout<<"Enter target : ";
cin>>target;

int i = 0;
int j = n -1 ;

while(i < j){
    int sum = v[i] + v[j];
    if(sum == target){
        cout<<"\nYes";
        return 0;
    }
    else if(sum > target) j--;
    else i++;
}
cout<<"\nNO";

}