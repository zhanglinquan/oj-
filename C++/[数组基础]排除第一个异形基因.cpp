#include<bits/stdc++.h>
using namespace std;
int a[10000000],n;
int del(int x){//°´±àºÅÉ¾³ı 
	for(int i=x;i<=n;i++){
		a[i]=a[i+1];
	}
	n--;
}
void input(){
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
}
int findnum(){
	for(int i=1;i<=n;i++){
		if(a[i]*a[i]%7==1) return i;
	}
}
void output(){
	cout<<a[1];
	for(int i=2;i<=n;i++){
		cout<<" "<<a[i];
	}
}
int main(){
	cin>>n;
	input();
	del(findnum());
	output();
	return 0;
}

