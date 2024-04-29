#include<stdio.h>

void q_sort(int ar[],int left, int right)
{
	if (left >= right)
		return;

	int l = left, r = right, num = ar[l];

	while (l < r)
	{
		while (ar[r] > num && l < r)
			r--;
		if (l < r){
			ar[l++] = ar[r];
		}
		while (ar[l] < num && l < r)
			l++;
		if (l < r){
			ar[r--] = ar[l];
		}
	}
	ar[l] = num;
	q_sort(ar,left, l - 1);
	q_sort(ar,l + 1, right);
}

void fun1(int ){
	
}

int main(){
	int n;
	scanf("%d",&n);
	int a[100],b[100];
	for(int i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	q_sort(b,0,n-1);
	for(int i=0;i<n;i++){
		printf("%d %d\n",a[i],b[i]);
	}
	
}
