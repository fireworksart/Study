#include<stdio.h>

void sort(char a[],int n,int m){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i]>a[j]){
				int k;
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
	}
}

int fun1(int n){
	
}

int main(){
	int k,n;
	char ch[200],h;
	while(1){
		int i=0;
		do{
	        scanf("%c",&ch[i]);
	    }while(ch[i++] != '\n');
	    if(ch[0]=='0'){
	    	break;
		}
		scanf("%d",&n);
		sort(ch,i-1,n);
		for(int j=0;j<i-1;j++){
			if(ch[j]!='-1'){
				printf("%c",ch[j]);
			}
			if(j==n-1){
				printf("\n");
			}
		}	
		}
}
