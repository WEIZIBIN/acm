#include<iostream>
using namespace std;

int main() {
	long long t,n,max,sum,a;
	cin>>t;
	for(int j=0;j<t;j++){
		max=0;
		sum=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a;
			sum+=a;
			if(a>max){
				max=a;
			}
		}
		if((sum-max)>=(max-1))cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	
}
