#include <stdio.h>

void Hanoi(int num,char a, char b, char c)
{
	if(num == 1)
	{
		printf("%c->%c\n",a,c);
    }
	else
	{
		Hanoi(num-1,a,c,b);
		printf("%c->%c\n",a,c);
		Hanoi(num-1,b,a,c);
	}
}

int main()
{
	int num;
	scanf("%d",&num);
	Hanoi(num, 'A', 'B', 'C');
}
