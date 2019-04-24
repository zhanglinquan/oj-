#include<bits/stdc++.h>
using namespace std;
int a[10000000];
int main(){
	int cd,zd,x,y,t,s=0;
	cin>>cd>>zd;
	for(int i=0;i<=cd;i++){
		a[i]=16;
	}
	for(int i=1;i<=zd;i++){
		cin>>x>>y>>t;
		for(int j=x;j<=y;j++){
			a[j]=t;
		}
	}
	for(int i=0;i<=cd;i+=5){
		s+=a[i];
	}
	cout<<s*2<<endl;
	return 0;
}

