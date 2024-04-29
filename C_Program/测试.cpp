#include<stdio.h>

int d=0,b=0;

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

void fun(int a[],int l,int r){
	int c=0;
	if(l>=r)
	   return ;
	int x=a[(l+r)/2];
	for(int i=l;i<(l+r)/2;i++){
	    if(a[i]==x){
		    c=(l+r)/2-i+1;
		    break;
		}
	}
	for(int i=r;i>(l+r)/2;i--){
	    if(a[i]==x){
	      c+=i-(l+r)/2;
	      break;
	  }
	}
	if(c>b){
		d=x;
		b=c;
	}
	fun(a,l,(l+r)/2);
	fun(a,(l+r)/2+1,r);
}

int main(){
	int n1;
	scanf("%d",&n1);
	while(n1--){
		int n,a[100];
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		    scanf("%d",&a[i]);
		q_sort(a,0,n-1);
		fun(a,0,n-1);
		printf("%d %d\n",d,b);
		d=0;
		b=0;
	}
}
