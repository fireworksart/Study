#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void q_sort(int ar[],int left, int right)
{
	if (left >= right)
		return;

	int l = left, r = right, num = ar[l];

	while (l < r)
	{
		while (ar[r] > num && l < r)
			r--;
		if (l < r)
			ar[l++] = ar[r];
		while (ar[l] < num && l < r)
			l++;
		if (l < r)
			ar[r--] = ar[l];
	}
	ar[l] = num;
	q_sort(ar,left, l - 1);
	q_sort(ar,l + 1, right);
}

int main(){
	int n,l,sum=0;
	int a[10000];
	scanf("%d",&n);
	l=n;
	while(l--){
		int k;
		scanf("%d %d",&k,&a[l]);
	}
	q_sort(a,0,n-1);
	int x=a[n/2];
	for(int i=0;i<n;i++){
		sum+=(abs(a[i]-x));
	}
	printf("%d\n",sum);
	return 0;
}
