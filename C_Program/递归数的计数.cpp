#include<stdio.h>
int a = 0;

void fun(int n){
	if(n/2==0){
		a++;
	}
	else{
		for(int i=1;i<=(n/2);i++){
			fun(i);
			if(i==1){
			    a++;
			}
		} 
	}
}

int main(){
	int n;
	scanf("%d",&n);
	if(0<=n && n<=1000){
		fun(n);
		printf("%d",a);
    }
}


#include<stdio.h>
int inta[6000];
 
int f(int n)
{
    long ans = 1;
 
    for(int i= 1;i<=n/2;i++)
    {
        ans +=  f(i);
        if( ( i>10) && (2*(i/10) <= i%10) )
            ans -= inta[i/10];
    }
    inta[n] = ans;
    return ans ;
}
int main(int argc, char* argv[])
{
    int n ;
    inta[1] = 1 ;
    scanf("%d",&n); 
    printf("%d\n",f(n) );
    return 0;
}

