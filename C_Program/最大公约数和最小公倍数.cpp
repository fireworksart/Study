#include<stdio.h>

int fun1(long long a,long long b) {
	long long k = 0;
	while (k = a % b) {
		a = b;
		b = k;
	}
	return b;
}
int main(){
	long long m,n;
	while(~scanf("%ld%ld",&m,&n)){
		long long j,k;
		j=fun1(m,n);
		k=(m*n)/j;
		printf("%ld %ld\n",j,k);
	}
	return 0;
}

