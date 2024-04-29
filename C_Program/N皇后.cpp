#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <string.h>

using namespace std;

const int    MAXN = 1005;
int        n, s = 0, cnt = 0, cnt2 = 0;
int        vis[MAXN][MAXN], ans[MAXN][MAXN], map[MAXN][MAXN];

void dfs(int x)
{
    if (x > n)
    {
        s++;
        cnt++;
        if (cnt <= 3)
        {
            cnt2 = 0;
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (map[i][j] == 1)
                    {
                        cnt2++;
                        ans[cnt][cnt2] = j;
                    }
                }
            }
        }
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (vis[x][i] == 0)
        {
            vis[x][i]++;
            map[x][i] = 1;
            for (int j = 1; j <= n; j++)
            {
                vis[x][j]++;
                if (j >= x)
                {
                    vis[j][i]++;
                }
                if (x + j <= n && i >= j)
                {
                    vis[x + j][i - j]++;
                }
                if (x + j <= n && i + j <= n)
                {
                    vis[x + j][i + j]++;
                }
            }
            dfs(x + 1);
            vis[x][i]--;
            map[x][i] = 0;
            for (int j = 1; j <= n; j++)
            {
                vis[x][j]--;
                if (j >= x)
                {
                    vis[j][i]--;
                }
                if (x + j <= n && i >= j)
                {
                    vis[x + j][i - j]--;
                }
                if (x + j <= n && i + j <= n)
                {
                    vis[x + j][i + j]--;
                }
            }
        }
    }
}


int main()
{
    cin >> n;
    dfs(1);
    if(cnt<=0){
    	cout << "no solute!" << endl; 	
	}
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

