#include<bits/stdc++.h>
using namespace std;
int main(){
	char n;
	int isupper=0,islower=0,isdigit=0;
	cin>>n;
	while(n!='#'){
		if(n>='A'&&n<='Z')
		{
			isupper++;
		}
		if(n>='a'&&n<='z')
		{
			islower++;
		}
		if(n>='0'&&n<='9')
		{
			isdigit++;
		}
		cin>>n;
	}
	cout<<isupper<<" "<<islower<<" "<<isdigit<<endl;
	return 0;
}

