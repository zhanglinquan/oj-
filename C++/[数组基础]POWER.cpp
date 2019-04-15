#include<bits/stdc++.h>
using namespace std;
int a[10000000],n;
int findstrong(){
	int s=-1;
	for(int i=1;i<=n;i++){
		if(a[i]>s) s=a[i];
	}
	return s;
}
void input(){
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
}
int main(){
	int strong;
	cin>>n;
	input();
	strong=findstrong();
	cout<<strong-a[1];
	for(int i=2;i<=n;i++){
		cout<<" "<<strong-a[i];
	}
	return 0;
}

