#include<bits/stdc++.h>
using namespace std;
int a[1000];
void input(int a[],int maxn){
	for(int i=1;i<=maxn;i++){
		cin>>a[i];
	}
}
void find_output(int a[],int m,int maxn){
	for(int i=1;i<=maxn;i++){
		if(a[i]>m){
			cout<<setw(4)<<a[i];
		}
	}	
}
bool isfind(int a[],int m,int maxn){
	for(int i=1;i<=maxn;i++){
		if(a[i]>m){
			return true;
		}
	}
	return false;	
}
int main(){
	int n,m;
	cin>>n;
	input(a,n);
	cin>>m;
	if(isfind(a,m,n)){
		find_output(a,m,n);
	}
	else cout<<setw(4)<<0;
	return 0;
}

