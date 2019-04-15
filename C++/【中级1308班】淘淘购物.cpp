#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,n;
	long double sum=0,b;
	cin>>x>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>b;
		sum+=b;
	}
	if(sum<=x)
		{
			cout<<"Yes"<<endl;
		}
	else
		{
			cout<<"No"<<endl;
		}
	return 0;
} 
