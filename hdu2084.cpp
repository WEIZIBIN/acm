#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int h;
		cin>>h;
		int x[101][101];
		int dp[101][101];
		for(int j=0;j<h;j++){
			for(int k=0;k<j+1;k++){
				cin>>x[j][k];
			}
		}
		for(int j=h-2;j>=0;j--){
			for(int k=0;k<=j;k++){
				x[j][k]=x[j][k]+max(x[j+1][k],x[j+1][k+1]);
			}
		}
		cout<<x[0][0]<<endl;
		
	}
	return 0;
}
