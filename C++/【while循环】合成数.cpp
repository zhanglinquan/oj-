#include<bits/stdc++.h>
using namespace std;
int reverseint( int num ){
	int result = 0;
	for (int i = num; i ; )
	{
		i = i/10*10;
		result = result * 10 + num - i;
		i = i /10;
		num = num/10;
	}
	return result;
}
int main(){
	int s=1,a,ou=0;
	while(cin>>a){
		ou+=a*s;
		s=s*10;
	}
	if(a==0){	
		cout<<reverseint(ou)*10-1<<endl;
		return 1;
	}
	cout<<reverseint(ou)-1<<endl;
	return 0;
}
