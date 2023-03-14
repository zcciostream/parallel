#include <iostream>
using namespace std;
#define MAXN 10000//调整MAXN的大小来改变问题规模，本次实验选用的规模有1000，3000，5000，10000
int b[MAXN][MAXN];
int a[MAXN];
int sum[MAXN];
int main()
{
    for(int i=0;i<MAXN;i++)
    {
        for(int j=0;j<MAXN;j++)
        {
            b[i][j]=i+j;
        }
    }
    for(int i=0;i<MAXN;i++)
    {
        a[i]=i;
    }
/*
    for(int i=0;i<MAXN;i++)
    {
        sum[i]=0;
        for(int j=0;j<MAXN;j++)
        {
            sum[i]+=b[j][i]*a[j];
        }
    }//这是平凡算法
*/

    for(int i=0;i<MAXN;i++)
    {
        sum[i]=0;
    }
    for(int j=0;j<MAXN;j++)
    {
        for(int i=0;i<MAXN;i++)
        {
            sum[i]+=b[j][i]*a[j];
        }
    }//这是cache优化算法。

//在进行不同算法测试的时候只要将另一种算法注释掉。
    return 0;
}
