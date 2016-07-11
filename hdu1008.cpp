#include<iostream>
using namespace std;

int main(){
	int n,a;
	int result;
	int now;
	while(scanf("%d",&n)!=EOF){
		if(n==0)
			break;
		result=0;
		now=0;
		for(int i=0;i<n;++i){
			scanf("%d",&a);
			if(a>now){
				result+=6*(a-now);
			}
			if(a<now){
				result+=4*(now-a);
			}
			now=a;
			result+=5;
		}
		printf("%d\n",result);
	}
	return 0;
}
