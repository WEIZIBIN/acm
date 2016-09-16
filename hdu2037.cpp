#include<iostream>
#include<algorithm>
using namespace std;

void qsort(int x[100],int y[100], int l,int r){
	if(l>=r)
		return;
	int i=l;
	int j=r+1;
	int key=x[l];
	int keyy=y[l];
	while(i<j){
		while(i<j&&x[--j]>=key);
		x[i]=x[j];
		y[i]=y[j];
		while(i<j&&x[++i]<=key);
		x[j]=x[i];
		y[j]=y[i];
	}
	x[i]=key;
	y[i]=keyy;
	qsort(x,y,l,i-1);
	qsort(x,y,i+1,r);
}

int main(){
	int n,ans,now;
	int b[100],e[100];
	while(cin>>n&&n!=0){
		now=0;
		ans=0;
		for(int i=0;i<n;i++){
			cin>>b[i]>>e[i];
		}
		qsort(e,b,0,n-1);
		for(int i=0;i<n;i++){
			if(b[i]>=now){
				now=e[i];
				ans++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
