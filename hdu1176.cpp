#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int x[12][100002];
int main() {
	int n;
	while(scanf("%d",&n)){
		memset(x,0,sizeof(x));
		if(n==0)
			break;
		int p,t,maxT=0;
		
		for(int i=0;i<n;i++){
			scanf("%d%d",&p,&t);
			maxT=max(t,maxT);
			x[p][t]++;
		}
		for(int i=maxT-1;i>=0;i--){
			for(int j=0;j<11;j++){
				if(j==0){
					x[j][i]+=max(x[j][i+1],x[j+1][i+1]);
				}else if(j==10){
					x[j][i]+=max(x[j-1][i+1],x[j][i+1]);
				}
				else{
					x[j][i]+=max(x[j-1][i+1],max(x[j][i+1],x[j+1][i+1]));
				}
			}
		}
		
		printf("%d\n",x[5][0]);
	}
	return 0;
}
