#include<bits/stdc++.h>
using namespace std;
void printS(int ind,vector<int> &ds,int s,int sum , int arr[],int n){
    if(ind==n){
        if(s==sum){
            for(auto it : ds) cout<<it<<" ";
            cout<<endl;
        }
        return;
    }
    ds.push_back(arr[ind]);
    s+=arr[ind];
    printS(ind+1,ds,s,sum,arr,n);
    s-=arr[ind];
    ds.pop_back();
    printS(ind+1,ds,s,sum,arr,n);
}
int main(){
    int n;
    cin>>n;
    vector<int> ds;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    printS(0,ds,0,sum,arr,n);
    return 0;
}
