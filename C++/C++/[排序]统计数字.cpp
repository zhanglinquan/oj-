#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int n,a[200005];

int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);  
    }   
    sort(a+1,a+1+n);
    int cnt(1);
    for(int i=1;i<n;i++){
        if(a[i+1]!=a[i]){           
            printf("%d %d\n",a[i],cnt);
            cnt=0;
        }
        cnt++;
    }
    if(a[n]!=a[n-1]) {
        printf("%d %d",a[n],1);
    }else{
        printf("%d %d",a[n],cnt);
    }
}
