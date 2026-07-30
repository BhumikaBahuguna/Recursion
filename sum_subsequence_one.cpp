#include<bits/stdc++.h>
using namespace std;
bool printS(int ind,vector<int> &ds,int s,int sum , int arr[],int n){
    if(ind==n){
        if(s==sum){
            for(auto it : ds) cout<<it<<" ";
            cout<<endl;
            return true;
        }
        else return false;
    }
    ds.push_back(arr[ind]);
    s+=arr[ind];
    if(printS(ind+1,ds,s,sum,arr,n) == true) {
        return true;
    }
    s-=arr[ind];
    ds.pop_back();
    if(printS(ind+1,ds,s,sum,arr,n) == true) {
        return true;
    }
    return false;
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