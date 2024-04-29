#include<stdio.h> 
#include<string.h>

int n=0;

void swap(char *str, int begin, int k)
{
	char tmp;
	tmp = *(str + begin);	
	*(str + begin) = *(str + k);	
	*(str + k) = tmp;
}

int is_swap(char *str, int begin, int k)
{
	for (int i = begin; i < k; i++){
		if(*(str + i) == *(str + k))    return 0;
	}
	return 1;
}

void perm(char *str, int begin, int end)
{
	if (begin == (end - 1)) {
		n++;
		return;
    }
	for (int k = begin; k < end; k++){	
		if(is_swap(str, begin, k)) {	
			swap(str, begin, k);	
			perm(str, begin + 1, end);	
			swap(str, begin, k);
	    }
}
}

int main()
{
	char str[6];
	int length;
	while(~scanf("%s",&str)){
	length = strlen(str);
	perm(str, 0, length);
	printf("%d\n", n);
	n=0;
}
	return 0;
}
