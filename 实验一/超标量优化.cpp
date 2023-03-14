#include<iostream>
using namespace std;
#define MAXN 10000//调整MAXN大小来调整问题规模，本次实验选择的MAXN有10000，30000，50000，100000
int a[MAXN];
long long int sum,sum1,sum2=0;
void commoncalculate()//平凡
{
    for(int i=0;i<MAXN;i++)
    {
        sum+=a[i];
    }
}
void quickcalculate()//优化
{
    for(int i=0;i<MAXN;i+=2)
    {
        sum1+=a[i];
        sum2+=a[i+1];
    }
    sum=sum1+sum2;
}
int main()
{
    for(int i=0;i<MAXN;i++)
    {
        a[i]=i;
    }
    for(int i=0;i<10000;i++)//多次循环来扩大运行时间，减小误差
    {
        //commoncalculate();
        quickcalculate();
    }
    //在进行不同算法测试的时候只需将另一种算法注释掉。
}
