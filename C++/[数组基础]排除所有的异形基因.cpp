#include<bits/stdc++.h>
using namespace std;
int a[1000000];
void del(int a[],int &maxn,int n){
	for(int i=n;i<=maxn-1;i++){
		a[i]=a[i+1];
	}
	maxn--;
}
void findnum_del(int a[],int &maxn){
	for(int i=maxn+1;i>=0;i--){
		if(a[i]*a[i]%7==1){
			del(a,maxn,i);
		}
	}
}
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
int main(){
	int n;
	cin>>n;
	input(a,n);
	findnum_del(a,n);
	output(a,n);
	return 0;
}

