#include<stdio.h>

int fun1(int n,int a[],int m){
	while(1){
	if((m==n+1)&&a[m]!=a[0]){
		return 0;
	}
	else if((m==n+1)&&(a[m]==a[0])){
		return m;
	}
	else if(a[(m+n)/2]==a[0]){
	    return (m+n)/2;
	}
	else if(a[(m+n)/2]<a[0]){
		n=(m+n)/2;
	}
	else{
		m=(m+n)/2;
	}
}
}

int main(){
	int n,m;
	while(~scanf("%d",&n)){
	int a[n+1];
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&a[0]);
	m=fun1(1,a,n);
	if(m){
	    printf("%d\n",m);
    }
    else{
    	printf("No found!\n");
	}
    }
	return 0;
}
