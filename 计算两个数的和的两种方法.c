
//利用函数：
#include <stdio.h>
int add (int x ,int y )
{
    return (x +y );
}
int main ()
{
    int a =10;
    int b =20;
    printf ("请输入两个数字用来计算它们的和:\n");
    scanf ("%d%d",&a ,&b );
    int sum =add (a ,b );
    printf ("sum=%d\n",sum );
    return 0;
}

//不利用函数：
#include <stdio.h>
int main ()
{
    int a =10;
    int b =20;
    int sum =0;
    printf ("请输入两个数字用来计算它们的和:\n");
    scanf ("%d%d",&a ,&b );
    sum =a +b ;
    printf ("sum=%d\n",sum );
    return 0;
}
