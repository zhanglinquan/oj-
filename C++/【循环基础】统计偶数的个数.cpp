#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,j,js=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>j;
        if(j%2==0) js++;
    } 
    cout<<js<<endl;
    return 0;
}
