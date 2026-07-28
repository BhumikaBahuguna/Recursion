#include<bits/stdc++.h>
using namespace std;
void func(int arr[],int i,int j){
    if(i>=j) return;
    swap(arr[i],arr[j]);
    func(arr,i+1,j-1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    func(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}