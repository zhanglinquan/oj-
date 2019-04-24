#include<bits/stdc++.h>
using namespace std;
int a[10000000];
int main(){
	char x;
	int n=10;
	cin>>x;
	while(x!='*'){
		if(x>='A'&&x<='Z'){
		a[x-64]++;
		n++;
		}
		cin>>x;
	}
	for(int i=1;i<=n;i++){
		if(a[i]) cout<<char(i+64)<<':'<<a[i]<<endl;
	}
	return 0;
}

