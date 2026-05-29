#include<iostream>
using namespace std;

// 1       2       3       4       5
// 16      17      18      19      6
// 15      24      25      20      7
// 14      23      22      21      8
// 13      12      11      10      9
// Print Spiram number matrix ?

int main(){
    int n;
    cout<<"Enter positive value of n : ";
    cin>>n;

    int arr[100][100];
    int count = 1;
    int minr = 0;
    int maxr = n - 1;
    int minc = 0;
    int maxc =  n-1;

    while(count <= n*n){

        // Upper row
        for(int i = minc;i<=maxc && count <= n*n;i++){
            arr[minr][i] = count;
            count++;
        }
        minr++;

        // Last column
        for(int j = minr;j <= maxr && count <= n*n;j++){
            arr[j][maxc] = count;
            count++;
        }
        maxc--;

        // Lower row
        for(int i = maxc;i>=minc && count <= n*n;i--){
            arr[maxr][i] = count;
            count++;
        }
        maxr--;

        // First Column
        for(int j = maxr;j>=minr;j--){
            arr[j][minc] = count;
            count++;
        }
        minc++;
    }

    // Print

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    }
}