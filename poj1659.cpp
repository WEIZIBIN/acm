#include<iostream>
using namespace std;

struct Node{
	int d;
	int p;
}node[10];


void qsort(int l, int r){
	if(l>=r)
		return;
	int i=l;
	int j=r+1;
	Node key=node[i];
	while(i<j){
		while(i<j&&node[--j].d<=key.d);
		node[i]=node[j];
		while(i<j&&node[++i].d>=key.d);
		node[j]=node[i];
	}
	node[i]=key;
	qsort(l,i-1);
	qsort(i+1,r);
}

int main(){
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		for(int j=0;j<n;j++){
			cin>>node[j].d;
			node[j].p=j;
		}
		int m[10][10]={0};
		for(int j=0;j<n;j++){
			qsort(j,n-1);
			for(int k=j+1;k<j+1+node[j].d;k++){
					node[k].d--;
					m[node[k].p][node[j].p]=1;
					m[node[j].p][node[k].p]=1;
			}
		}
		
		bool flag=true;
		for(int j=0;j<10;j++){
			if(node[j].d<0){
				flag=false;
			}
		}
		
		if(flag){
			cout<<"YES"<<endl;
			for(int j=0;j<n;j++){
				for(int k=0;k<n;k++){
					cout<<m[j][k]<<" ";
				}
			cout<<endl;
		}
		cout<<endl;
		}else{
			cout<<"NO"<<endl<<endl;
		}
		

	}
	return 0;
} 
