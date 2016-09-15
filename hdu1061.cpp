#include<iostream>
using namespace std;

int mod(int a, int b, int c){
	int ans=1;
	a=a%c;
	while(b>0){
		if(b%2==1)
			ans=(ans*a)%c;
		a=(a*a)%c;
		b=b/2;
	}
	return ans;
}

int main(){
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		cout<<mod(a,a,10)<<endl;
	}
	return 0;
}
