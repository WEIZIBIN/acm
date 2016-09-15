#include<iostream>
using namespace std;

int mod(int a, int b, int c){
	int ans=1;
	a=a%c;
	while(b){
		if(b%2)ans=(ans*a)%c;
		a=(a*a)%c;
		b=b/2;
	}
	return ans;
}

int main(){
	int a,b;
	while(cin>>a>>b){
		if(a==0&&b==0)break;
		cout<<mod(a,b,1000)<<endl;
	}
	return 0;
}
