#include<iostream>
#include<string.h>
using namespace std;
int dp[1001][1001];
int main(){
	char a[1001],b[1001];
	while(cin>>a>>b){
		memset(dp,0,sizeof(dp));
		int an=0,bn=0;
		while(a[an]!='\0')
			an++;
		while(b[bn]!='\0')
			bn++;
		for(int i=0;i<an;i++){
			if(a[i]==b[0]){
				for(int j=i;j<an;j++){
					dp[j][0]=1;
				}
				break;
			}
		}
		for(int i=0;i<bn;i++){
			if(b[i]==a[0]){
				for(int j=i;j<bn;j++){
					dp[0][j]=1;
				}
				break;
			}
		}
		
		for(int i=1;i<an;i++){
			for(int j=1;j<bn;j++){
				if(a[i]==b[j]){
					dp[i][j]=max(dp[i-1][j-1]+1,max(dp[i-1][j],dp[i][j-1]));
				}else{
					dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
				}
			}
		}
		cout<<dp[an-1][bn-1]<<endl;
	}
}
