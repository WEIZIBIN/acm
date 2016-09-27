#include<iostream>
#include<algorithm>
#include<string.h>
#include<iomanip>
using namespace std;

int dp[1001][2001];

bool cmp(int a,int b){
	return a < b;
}

int getT(int i,int j){
	if(2*i>j) return 2147483647;
	if(i==-1) return 0;
	return dp[i][j];
}

int main() {
	int n,k;
	while(cin>>n>>k){
		int a[2001];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n,cmp);
		int b[2000];
		for(int i=0;i<n-1;i++){
			b[i]=(a[i+1]-a[i])*(a[i+1]-a[i]);
		}
		memset(dp,0,sizeof(dp));
		for(int i=0;i<k;i++){
			for(int j=2*i;j<n-1;j++){
				if(j==2*i){
					if(i==0&&j==0){
						dp[i][j]=b[j];
					}else{
						dp[i][j]=getT(i-1,j-2)+b[j];
					}
				}else{
					dp[i][j]=min(getT(i,j-1),getT(i-1,j-2)+b[j]);
				}
			}
		}
		
		cout<<dp[k-1][n-2]<<endl;
	}
	
	
	return 0;
}
