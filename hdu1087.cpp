#include<iostream>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		if(n==0) break;
		long a[1001];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		long long sum[1001]={0};
		for(int i=0;i<n;i++){
			sum[i]=a[i];
		}
		for(int i=1;i<n;i++){
			for(int j=0;j<i;j++){
				if(a[i]>a[j]&&sum[i]<sum[j]+a[i]){
					sum[i]=sum[j]+a[i];
				}
			}
		}
		int max=0;
		for(int i=0;i<n;i++){
			max=sum[i]>max?sum[i]:max;
		}
		cout<<max<<endl;
	}
}
