#include<bits/stdc++.h>
using namespace std;
int a[10000000],n;
void input(){
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
}
void output(int x){
	cout<<a[x]<<endl;
}
int main(){
	int x;
	cin>>n;
	input();
	cin>>x;
	output(x);
	return 0;
}

