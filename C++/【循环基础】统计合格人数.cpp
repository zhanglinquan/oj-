#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,hg=0,bhg=0;
	float in,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>in;
		if(in>=60)
			hg++;
		else
			bhg++;
		sum+=in;
	}
	cout<<fixed<<setprecision(2)<<sum<<endl;
	if(hg>bhg) cout<<"duo:"<<hg-bhg<<endl;;
	if(hg==bhg) cout<<"yi yang"<<endl;
	if(hg<bhg) cout<<"shao:"<<bhg-hg<<endl;
	return 0;
}
