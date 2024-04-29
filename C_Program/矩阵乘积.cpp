# include <stdlib.h>
# include <stdio.h>

int main(){
	int m, n, k;
	int a[10][10], b[10][10], c[10][10];
	int sum = 0;
	scanf("%d%d",&n,&m);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d%d", &m, &k);
	for(int i = 0; i < m; i++){
		for(int j = 0; j < k; j++){
			scanf("%d", &b[i][j]);
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < k; j++){
			sum = a[i][0] * b[0][j];		
			for(int k = 1; k < m; k++){
				sum += a[i][k] * b[k][j];
			}
			c[i][j] = sum;
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < k; j++){
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}

