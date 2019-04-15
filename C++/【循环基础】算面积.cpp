#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,b,s=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>b;
		s=s+pow(b,2);
	}
	cout<<s<<endl;
} 
