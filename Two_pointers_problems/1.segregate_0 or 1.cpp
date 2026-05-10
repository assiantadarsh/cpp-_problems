#include<iostream>
#include<vector>
using namespace std;

// Segregrate 0 and 1

int main(){

int n;
cout<<"Enter the size of the vactor : ";
cin>>n;

vector<int>v(n);

for(int i = 0;i<n;i++){
    cin>>v[i];
}

int i = 0;
int j = n -1 ;

while(i < j){
    if(v[i] == 1 && v[j] == 0){
        swap(v[i],v[j]);
        i++;
        j--;
    }
    if(v[i] == 0)i++;
    if(v[j] == 1)j--;
}
cout<<"Final Answer : ";

for(int k = 0;k<n;k++){
    cout<<v[k]<<" ";
}

}