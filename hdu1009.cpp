#include<iostream>
using namespace std;

int F[10000],J[10000];
double a[10000];

void qsort(int left,int right)
{
    if(left >= right)
        return;
    int i=left;
    int j=right+1;
    double key=a[left];
    double keyf=F[left];
    double keyj=J[left]; 
    while(i<j)
    {
        while(i<j&&a[--j]<=key);
        a[i]=a[j];
        F[i]=F[j];
        J[i]=J[j];
        while(i<j&&a[++i]>=key);
        a[j]=a[i];
        F[j]=F[i];
        J[j]=J[i];
    }
    a[i]=key;
    F[i]=keyf;
    J[i]=keyj;
    qsort(left,i-1);
    qsort(i+1,right);
}

int main(){
	int m,n;
	while(scanf("%d%d",&m,&n)!=EOF){
		if(m==-1&&n==-1)
			break;
		for(int i=0;i<n;++i){
			scanf("%d%d",&J[i],&F[i]);
		}
		for(int i=0;i<n;++i){
			a[i]=(double)J[i]/F[i];
		}
		qsort(0,n-1);
		double result=0;
		double left=m;
		if(n>0)
			for(int i=0;left>0;++i){
				if(left>=F[i]){
					result+=J[i];
					left=left-F[i];
				}
				else{
					result+=(left*((double)J[i]/F[i]));
					left=0;
				}
			}
		printf("%.3lf\n",result);
	}
	
	return 0;
}
