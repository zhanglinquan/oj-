#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,in,j,y,t;
	cin>>n;
	j=0;
	y=0;
	t=0;
	for(int i=1;i<=n;i++)
	{
		cin>>in;
		j+=in;
		cin>>in;
		y+=in;
		cin>>in;
		t+=in;
	}
	cout<<j<<" "<<y<<" "<<t<<" "<<j+y+t;
	return 0;
} 
