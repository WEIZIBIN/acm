#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

struct MOUSE{
	int w,s;
	int p,n;
}m[1001];

struct DP{
	int n;
	struct DP *next;
	int p;
	struct MOUSE *m;
}dp[1001];

int cmp(MOUSE x, MOUSE y)
{
	if(x.w==y.w) return x.s>y.s;
    return x.w<y.w;
}

int main(){
	int n=0;
	while(scanf("%d%d",&m[n].w,&m[n].s)!=EOF){
		m[n].p=n+1;
		n++;
	}
	sort(m,m+n,cmp);
	
	for(int i=0;i<n;i++){
		dp[i].n=0;
		dp[i].next=NULL;
		dp[i].m=&m[i];
		dp[i].p=m[i].p;
	}
	
	for(int i=1;i<n;i++){
		for(int j=1;j<i;j++){
			if(m[i].s<m[j].s&&m[i].w>m[j].w&&dp[i].n<dp[j].n+1){
				dp[i].m=&m[j];
				dp[i].next=&dp[j];
				dp[i].n=dp[j].n+1;
				dp[i].p=m[i].p;
			}
		}
	}
	int max=0;
	int maxIndex=0;
	for(int i=0;i<n;i++){
		if(dp[i].n!=0&&dp[i].n>max){
			max=dp[i].n;
			maxIndex=i;
		}
	}
	if(max==0) {
		cout<<max<<endl;
		return 0;
	}else {
		cout<<max+1<<endl;
	}
	struct DP *ans=&dp[maxIndex];
	int ansP[1001]={0};
	for(int i=max;ans!=NULL;i--){
		ansP[i]=ans->p;
		ans=ans->next;
	}
	for(int i=0;i<max+1;i++){
		cout<<ansP[i]<<endl;
	}
	return 0;
}
