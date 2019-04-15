#include<bits/stdc++.h>
using namespace std;
void up(int &n)/*实影输出*/{
	for(int i=1;i<=n;i++){//计算行总元素个数 
		cout<<setw(n-i+1/*计算无效元素个数*/);//输出行无效元素 
		for(int j=1;j<=2*i-1;j++){//计算行有效元素个数 
			cout<<'@';//输出行有效元素 
		}
		cout<<endl;//新建空行，待输出 
	} 
} 
void down(int &n)/*倒影输出*/{
	for(int i=n-1;i>=1;i--){//计算行总元素个数 
		cout<<setw(n-i+1/*计算行无效元素个数*/);//输出行无效元素 
		for(int j=2*i-1;j>=1;j--){//计算行有效元素个数 
			cout<<'@';//输出行有效元素
		}
		cout<<endl;//新建空行，待输出 
	} 
}
int main(){
	int n;
	cin>>n;
	up(n);/*实影输出*/
	down(n);/*倒影输出*/
	return 0;
}

