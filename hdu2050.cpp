#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	int ans[10007];
	ans[0]=0;
	ans[1]=2;
	for(int i=2;i<10007;i++){
		ans[i]=ans[i-1]+4*(i-1)+1;
	}
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		cout<<ans[n]<<endl;
	}
	return 0;
}
