#include<bits/stdc++.h>
using namespace std;
int a[1000000];
void input(int a[],int n){
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
}
int main(){
    int n;
    cin>>n;
    input(a,n);
    sort(a+1,a+1+n);
    int s=0,w=0;
    for(int i=1;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<a[n]<<endl;
    return 0;
}
