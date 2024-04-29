#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int m;
	int a[10000];
	scanf("%d",&m);
    while(m--){
    	int c,n,sum=0,val=0;
    	scanf("%d%d",&c,&n);
    	for(int i=0;i<n;i++){
    		scanf("%d",&a[i]);
		}
		sort(a,a+n);
		for (int i=0;i<n;i++)
		{
			sum += a[i];
			if (sum <= c)
				val++;
			else
				break;
		}
		printf("%d\n",val);
	}
}
