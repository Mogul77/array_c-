#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    int arr1[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];
            if(i==0 || i==n-1 || i+j==n-1){
                sum+=arr1[i][j];
            }
        }
    }
    cout<<endl<<sum;
}