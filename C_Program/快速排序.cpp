//#include<bits/stdc++.h>
# include <iostream>
#define bug(a) (cout<<"*"<<a<<endl)
using namespace std;

int ar[33], n;

void quick_sort(int left, int right)
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
	for (int i = 0; i < n; i++)
		cout << ar[i] << ' ';
	cout << endl;
	quick_sort(left, l - 1);
	quick_sort(l + 1, right);
}

int main()
{
	int i, j;
	while (cin >> ar[n++]);
	n--;
	quick_sort(0, n-1);
}

