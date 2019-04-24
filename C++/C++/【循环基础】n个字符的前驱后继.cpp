#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	char aa;
	cin>>a;
	for(int i=1;i<=a;i++){
		cin>>aa;
		cout<<aa<<":"<<int(aa)<<" qianqu:"<<char(aa-1)<<" houji:"<<char(aa+1)<<endl;
	}
	return 0;
}
