#include<iostream>
using namespace std;

int ans[5842];

int main(){
	ans[0]=1;
	int p2,p3,p5,p7;
	p2=p3=p5=p7=0;
	for(int i=1;i<5842;i++){
		ans[i]=min(min(2*ans[p2],3*ans[p3]),min(5*ans[p5],7*ans[p7]));
		if(ans[i]==2*ans[p2]) p2++;
		if(ans[i]==3*ans[p3]) p3++;
		if(ans[i]==5*ans[p5]) p5++;
		if(ans[i]==7*ans[p7]) p7++;
	}
	int n;
	while(cin>>n&&n!=0){
		if(n%10==1&&n%100!=11) cout<<"The "<<n<<"st humble number is ";
		else if(n%10==2&&n%100!=12) cout<<"The "<<n<<"nd humble number is ";
		else if(n%10==3&&n%100!=13) cout<<"The "<<n<<"rd humble number is ";
		else cout<<"The "<<n<<"th humble number is ";
		cout<<ans[n-1]<<"."<<endl;
	}
}
