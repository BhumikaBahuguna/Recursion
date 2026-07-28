#include<bits/stdc++.h>
using namespace std;
void factorial(int n,int f){
    if(n==0){
        cout<<f<<endl;
        return;
    }
    factorial(n-1,f*n);
}
int main(){
    int n;
    cin>>n;
    factorial(n,1);
    return 0;
}