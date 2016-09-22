#include<string.h>
#include <math.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int a[21][11];
int dp[21][11];

int main(){
	int n,k,p;
	while(cin>>n>>k){
		
		for(int i=0;i<n;i++){
			for(int j=0;j<k;j++){
				cin>>a[i][j];
				dp[i][j]=-1;
			}
		}
		int temp;
		for(int i=n-2;i>=0;i--){
			for(int j=0;j<k;j++){
				for(int l=0;l<k;l++){
					temp = abs(a[i][j]-a[i+1][l]);
					if(dp[i+1][l]==-1){
						dp[i+1][l]=0;
					}
					if(dp[i][j]==-1){
						dp[i][j]=dp[i+1][l]+temp;
					}else{
						dp[i][j]=min(dp[i+1][l]+temp,dp[i][j]);
					}
				}
			}
		}
		
		int mi=dp[0][0];
		for(int i=1;i<k;i++){
			mi=min(dp[0][i],mi);
		}
		if(n==1){
			cout<<0<<endl;
		}
		else{
			cout<<mi<<endl;
		}
	}
}
