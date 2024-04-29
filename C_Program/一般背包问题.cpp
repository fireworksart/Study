#include<iostream>
#include<algorithm>

using namespace std;

struct bei{
	int n;
	int v;
	float nv;
}b[100];

bool cmp(bei a, bei b)
{
    return a.nv > b.nv;
}

int main()
{
    int num, w, s;
    scanf("%d", &num);
    while (num--) {
        scanf("%d%d", &w, &s);
        for (int i = 0; i < s; i++) {
            scanf("%d%d", &b[i].n, &b[i].v);
            b[i].nv = (double)b[i].v/(double)b[i].n;
        }
        sort(b,b+s,cmp);
        double sum = 0;
        for (int i = 0; i < s; i++)
            if (w >= b[i].n) {
                w -= b[i].n;
                sum += b[i].v;
            }
            else {
                sum += w * b[i].nv;
                break;
            }
        printf("%.2f\n", sum);
    }

    return 0;
}

