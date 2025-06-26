#include<iostream>
using namespace std;
int main(){
    int n;
    int r;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i][j]!=0)
              r=1;
            else
            r=0;
        }
    }
    if(r==0){
        cout<<"yes";
    }
    else
    cout<<"N0";
}