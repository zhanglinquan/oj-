#include<bits/stdc++.h>
using namespace std;
bool isreverseInt( int num ){
	int num2=num;
	int result = 0;
	for (int j = num; j ; )
	{
		j = j/10*10;
		result = result * 10 + num - j;
		j = j /10;
		num = num/10;
	}
	if(num2==result) return true;
	else return false;
}
bool isquare(int num){
	for(int i=1;i<=num;i++){
		if(i*i==num) return true;
	}
	return false;
}
int main(){
	for(int i=1;i<=99999;i++){
		if(isreverseInt(i)&&isquare(i)) cout<<i<<endl;
	}
	return 0;
}

