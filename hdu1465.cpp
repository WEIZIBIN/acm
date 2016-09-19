#include<iostream>
using namespace std;

int main(){
	long long ans[21];
	ans[0]=0;
	ans[1]=0;
	ans[2]=1;
	ans[3]=2;
	for(int i=4;i<21;i++){
		ans[i]=(i-1)*(ans[i-1]+ans[i-2]);
	}
	int n;
	while(cin>>n){
		cout<<ans[n]<<endl;
	}
	return 0;
}
