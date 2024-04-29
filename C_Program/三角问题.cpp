# include <stdlib.h>
# include <stdio.h>

int a[100][100];

int triangle(int n)
{
	int i,j; 
	for(i = n - 2; i >= 0; i--){
		for(j = 0; j <= i; j++){
			if(a[i + 1][j] > a[i + 1][j + 1]){
				a[i][j] += a[i + 1][j];
			}
			else{
				a[i][j] += a[i + 1][j + 1];
			}
		}
	}
	return a[0][0];
}

int main()
{
	int n,i,j;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		for(j = 0; j <= i; j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("%d\n", triangle(n));
	return 0;
}

