#include<bits/stdc++.h>
using namespace std;
int a[10000000]; 
int main(){
    int n,f=0,s=0;
    int x;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        a[x]++;
    }
    for(int i=1;i<=1000;i++){
        if(a[i])
            s++;
    }
    cout<<s<<endl;
    for(int i=1;i<=1000;i++){
        if(a[i]){
            if(f==0){
                cout<<i;
                f=1;
            }
            else
                cout<<" "<<i;
        }
    }
    cout<<endl;
    return 0;
}
