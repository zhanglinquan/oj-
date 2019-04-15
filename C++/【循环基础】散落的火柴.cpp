#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,l,w,h;
	cin>>n>>w>>h;
	for(int i=1;i<=n;i++)
	{
		cin>>l;
		if(l*l<=w*w+h*h)
		{
			cout<<"DA"<<endl;
		}
		else
		{
			cout<<"NE"<<endl;
		}
	}
	return 0;
} 
