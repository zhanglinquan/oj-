#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int find_x/*��x*/(int a[],int x,int &maxn){//Ҫ�ҵĶ��У�Ҫ�ҵ��������г��� 
	for(int i=1;i<=maxn;i++){
		if(a[i]==x) return i;
	}
	return -1;
}
void putinto/*����*/(int a[],int num,int &maxn,int place){//δ����Ķ��У� Ҫ���������δ����ʱ�Ķ��г��ȣ�Ҫ�ŵ�λ�� 
	maxn++;
	for(int i=maxn;i>=place;i--){
		a[i]=a[i-1];
	}
	a[place]=num;
}
void find_putinto/*�Ҳ�����*/(int a[],int x,int &maxn,int num){//δ����Ķ��У�xѧ�ţ�δ����ʱ�Ķ��г��ȣ�Ҫ��������������λ����ԭ������ 
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

