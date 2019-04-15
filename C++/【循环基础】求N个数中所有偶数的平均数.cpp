#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,input;
	double sum=0.000,output=0.000,ou=0.000;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>input;
		if(input%2==0)
		{
			sum+=input;
			ou++;
		}
	}
	output=sum/ou;
	if(ou==0)
		{
			cout<<"0.00"<<endl;
		}
	else
	{
		cout<<fixed<<setprecision(2)<<output<<endl;
	}
	return 0;
} 
