#include<bits/stdc++.h>
using namespace std;
int a[10000000]; 
void input(int a[],int n){
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
}
bool cmp(int a,int b){
    return a>b;
}
int main(){
    int n,k;
    cin>>n>>k;
    input(a,n);
    sort(a+1,a+1+n,cmp);
    cout<<a[k]<<endl;
    return 0;
}
 
