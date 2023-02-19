#include<stdio.h>
int *add(int a,int b)
{
    int *c,d;
    d=a+b;
    c=&d;
    return c;
}
int main()
{
    int a,b;
    printf("分别输入a和b的值：");
    scanf("%d%d",&a,&b);
    printf("a+b=%d\n",*add(a,b));
    return 0;
}
