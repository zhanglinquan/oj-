#include<bits/stdc++.h>
using namespace std;
int a[10000000],n,x;
void input/*输入数组a*/(){
	for(int i=1/*a[0]用来存放中间数值*/;i<=n;i++){
		cin>>a[i];
	}
}
void move(){//移动数据 
	a[0]=a[x];//保存中间数a[x] 
	for(int i=x;i<=n-1;i++){
		a[i]=a[i+1];//前移一个位置 
	}
	a[n]=a[0];//原来的a[x]放在最后 
	a[0]=0;//清空a[0] 
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
	cin>>x;
	move();
	output();
	return 0;
}

