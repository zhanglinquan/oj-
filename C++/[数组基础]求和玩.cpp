#include<bits/stdc++.h>
using namespace std;
int a[1000000],n;
void input(){
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
}
void output(){
	cout<<a[1];
	for(int i=2;i<n;i++){
		cout<<" "<<a[i-1]+a[i]+a[i+1];
	}
	cout<<" "<<a[n]<<endl;
}
int main(){
	cin>>n;
	input();
	if(n==1) {cout<<a[1]<<endl;return 2;}
	if(n==0) return 1; 
	output();
	return 0;
}

