#include<stdio.h>
#include<string.h>

int num=0;

void len(int m,int n,char x[],char y[],int (*c)[100],int (*b)[100]){
	int i,j;
	for(i=1;i<=m;i++){
		c[i][0]=0;
	}
	for(i=1;i<=n;i++){
		c[0][i]=0;
	}
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			if(x[i]==y[j]){
				c[i][j]=c[i-1][j-1]+1;
				b[i][j]=1;
			}
			else if(c[i-1][j]>=c[i][j-1]){
				c[i][j]=c[i-1][j];
				b[i][j]=2;
			}
			else{
				c[i][j]=c[i][j-1];
				b[i][j]=3;
			}
		}
	}
}

void lcs(int i,int j,char x[],int (*b)[100]){
	if(i==0||j==0){
		return;
	}
	if(b[i][j]==1){
		lcs(i-1,j-1,x,b);
		num++;
	}
	else if(b[i][j]==2){
		lcs(i-1,j,x,b);
	}
	else{
		lcs(i,j-1,x,b);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int n1,n2;
		char x[100],y[100];
		int c[100][100],b[100][100];
		scanf("%s",&x);
		scanf("%s",&y);
        n1=strlen(x);
        n2=strlen(y);
        len(n1,n2,x,y,c,b);
        lcs(n1,n2,x,b);
        printf("%d\n",num);
        num=0;
	}
}
