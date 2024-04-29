#include<iostream>
using namespace std;

int fun(int n){
	if(n==1||n==2){
		return 1;
	}
	return fun(n-2)+fun(n-1);
}

int main(){
	int n;
	scanf("%d",&n); 
	printf("%d",fun(n));
	return 0;
} 
