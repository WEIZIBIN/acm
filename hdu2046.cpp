#include<iostream>
using namespace std;

int main() {
	int n;
	long long ans[51];
	ans[0]=1;
	ans[1]=1;
	ans[2]=2;
	for(int i=3;i<51;i++){
		ans[i]=ans[i-1]+ans[i-2];
	}
	while(cin>>n){
		cout<<ans[n]<<endl;
	}
	return 0;
}
