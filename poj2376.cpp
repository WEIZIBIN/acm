#include<iostream>
#include<stdio.h>
using namespace std;

struct COW{
	int start,end;
}cows[25000];

void qsort(int l,int r){
	if(l>=r)
		return;
	int i=l;
	int j=r+1;
	COW key=cows[l];
	while(i<j){
		while(i<j&&cows[--j].start>=key.start);
		cows[i]=cows[j];
		while(i<j&&cows[++i].start<=key.start);
		cows[j]=cows[i];
	}
	cows[i]=key;
	qsort(l,i-1);
	qsort(i+1,r);
}

int main() {
	int n,e;
	scanf("%d%d",&n,&e);
	for(int i=0;i<n;i++){
		scanf("%d%d",&cows[i].start,&cows[i].end);
	}
	qsort(0,n-1);
	int now=0;
	int ans=0;
	int scan=0;
	bool isCover;
	while(now<e){
		int max=0;
		int maxIndex=0;
		isCover=false;
		if(scan>=n)
			break;
		for(;scan<n;scan++){
			if(cows[scan].start>now+1){
				break;
			}
			if(cows[scan].end>max){
				max=cows[scan].end;
				maxIndex=scan;
				isCover=true;
			}
		}
		if(!isCover)
			break;
		ans++;
		now=cows[maxIndex].end;
	}
	if(isCover){
		cout<<ans<<endl;
	}else{
		cout<<-1<<endl;
	}
	return 0;
}
