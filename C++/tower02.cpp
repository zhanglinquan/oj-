#include<bits/stdc++.h>
using namespace std;
void up(int &n)/*ʵӰ���*/{
	for(int i=1;i<=n;i++){//��������Ԫ�ظ��� 
		cout<<setw(n-i+1/*������ЧԪ�ظ���*/);//�������ЧԪ�� 
		for(int j=1;j<=2*i-1;j++){//��������ЧԪ�ظ��� 
			cout<<'@';//�������ЧԪ�� 
		}
		cout<<endl;//�½����У������ 
	} 
} 
void down(int &n)/*��Ӱ���*/{
	for(int i=n-1;i>=1;i--){//��������Ԫ�ظ��� 
		cout<<setw(n-i+1/*��������ЧԪ�ظ���*/);//�������ЧԪ�� 
		for(int j=2*i-1;j>=1;j--){//��������ЧԪ�ظ��� 
			cout<<'@';//�������ЧԪ��
		}
		cout<<endl;//�½����У������ 
	} 
}
int main(){
	int n;
	cin>>n;
	up(n);/*ʵӰ���*/
	down(n);/*��Ӱ���*/
	return 0;
}

