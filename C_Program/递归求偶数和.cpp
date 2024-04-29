#include<iostream>
using namespace std;

int fun(int n){
	if(n==2){
		return 2;
	}
	return n+fun(n-2);
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",fun(n));
	return 0;
}
