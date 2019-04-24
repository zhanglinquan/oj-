#include<bits/stdc++.h>
using namespace std;
int a[10000005];
void input(int a[],int maxn){
	for(int i=1;i<=maxn;i++){
		cin>>a[i];
	}
}
void output(int a[],int maxn) {
	cout<<a[1];
	for(int i=2;i<=maxn;i++){
		cout<<" "<<a[i];
	}
}
void putinto(int a[],int &maxn,int x,int y){
	for(int i=maxn;i>=x;i--){
		a[i+1]=a[i];
	}
	a[x]=y;
	maxn++;
}
int main(){
	int n,x,y;
	cin>>n;
	input(a,n);
	cin>>x>>y;
	putinto(a,n,x,y);
	output(a,n);
	return 0;
}

