#include<iostream>
using namespace std;

struct MOVING{
	int from,to;
	bool isDone;
}moving[200];

void qsort(int l, int r){
	if(l>=r)
		return;
	int i=l;
	int j=r+1;
	MOVING key=moving[l];
	while(i<j){
		while(i<j&&moving[--j].from>=key.from);
		moving[i]=moving[j];
		while(i<j&&moving[++i].from<=key.from);
		moving[j]=moving[i]; 
	}
	moving[i]=key;
	qsort(l,i-1);
	qsort(i+1,r);
}

int main(){
	int t,n;
	while(cin>>t){
		for(int i=0;i<t;i++){
			cin>>n;
			for(int j=0;j<n;j++){
				cin>>moving[j].from>>moving[j].to;
				moving[j].isDone=false;
				if(moving[j].from>moving[j].to){
					int temp=moving[j].from;
					moving[j].from=moving[j].to;
					moving[j].to=temp;
				}
				if(moving[j].to%2==1){
					moving[j].to++;
				}
				if(moving[j].from%2==0){
					moving[j].from--;
				}
			}
			qsort(0,n-1);
			int ans=0;
			while(true){
				ans+=10;
				bool isFinish=true;
				int now=0;
				for(int j=0;j<n;j++){
					if(!moving[j].isDone){
						if(moving[j].from>now){
							now=moving[j].to;
							moving[j].isDone=true;
						}
						else{
							isFinish=false;
						}
					}
				}
				if(isFinish){
					break;
				}
			}
			cout<<ans<<endl;
		}
	}
	return 0;
}
