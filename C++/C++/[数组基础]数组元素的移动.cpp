#include<bits/stdc++.h>
using namespace std;
int a[10000000],n,x;
void input/*��������a*/(){
	for(int i=1/*a[0]��������м���ֵ*/;i<=n;i++){
		cin>>a[i];
	}
}
void move(){//�ƶ����� 
	a[0]=a[x];//�����м���a[x] 
	for(int i=x;i<=n-1;i++){
		a[i]=a[i+1];//ǰ��һ��λ�� 
	}
	a[n]=a[0];//ԭ����a[x]������� 
	a[0]=0;//���a[0] 
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

