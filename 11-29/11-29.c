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
    printf("�ֱ�����a��b��ֵ��");
    scanf("%d%d",&a,&b);
    printf("a+b=%d\n",*add(a,b));
    return 0;
}
