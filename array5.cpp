#include<iostream>
using namespace std;
int main(){
  int n,even=0,odd=0;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]%2==0){
      even++;
    }
    else{
      odd++;
    }
  }
  cout<<"Odd: "<<odd<<endl;
  cout<<"Even: "<<even<<endl;
}