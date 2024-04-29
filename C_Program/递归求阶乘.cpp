#include<iostream>
using namespace std;

int fun(int n){
	if(n<=0){
	    return 1;	
	}
	return n*fun(n-1);
}

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
	    printf("%d\n",fun(n));
    }
}
