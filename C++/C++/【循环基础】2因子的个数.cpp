#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int &x)
{
     int y;
     for(y=2;y<=sqrt(x);y++)
         if (x%y==0)
            return false;
     return true;
}//�ж��Ƿ�Ϊ���� 
bool jo(int &u){
	if(u%2==0){
		return false;
	}
	else
		return true;
}//�ж����� 
bool ij(int &re){
	if(re%2==0){
		return true;
	}
	else
		return false;
}//�ж�ż�� 
bool g(int &p){
	if(isprime(p)||jo(p))
		return false;
	else
		return  true;
}//�Ƿ�����ֽ����� 
int main(){
	int in,o=0,m=2;
	cin>>in;
	if(g(in)){
		while(in!=0&&ij(in)){
			in=in/m;
			o++;
		}
	}
	cout<<o<<endl;
	return 0;
}

