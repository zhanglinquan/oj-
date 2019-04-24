#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int find_x/*找x*/(int a[],int x,int &maxn){//要找的队列，要找的数，队列长度 
	for(int i=1;i<=maxn;i++){
		if(a[i]==x) return i;
	}
	return -1;
}
void putinto/*放入*/(int a[],int num,int &maxn,int place){//未放入的队列， 要放入的数，未放入时的队列长度，要放的位置 
	maxn++;
	for(int i=maxn;i>=place;i--){
		a[i]=a[i-1];
	}
	a[place]=num;
}
void find_putinto/*找并放入*/(int a[],int x,int &maxn,int num){//未放入的队列，x学号，未放入时的队列长度，要放入的数，放入的位置上原来的数 
	putinto(a,num,maxn,find_x(a,num,maxn));
}
void input(int a[],int maxn){
	for(int i=1;i<=maxn;i++){
		cin>>a[i];
	}
}
void output(int a[],int maxn){
	cout<<a[1];
	for(int i=2;i<=maxn;i++){
		cout<<" "<<a[i];
	}
}
int main(){
	int n,x,y;
	cin>>n>>x>>y;
	input(a,n);
	find_putinto(a,x,n,y);
	output(a,n);
	return 0;
}

