#include<stdio.h>
int main(){
	int n;
	long max=0,sum=0,k;
	scanf("%d",&n);
	while(n--){
    	scanf("%ld",&k);
	    sum +=k;
		if(sum<0&&(-sum>max)){
			max=-sum;
		}
	}
	printf("%ld",max);
} 
