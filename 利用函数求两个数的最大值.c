//求两个数的最大值get_max。

#include <stdio.h>
//定义函数
/*   返回类型 ret_type  函数名 fun_name   函数参数paral,*
{
    语句项 statement;
}
*/
int get_max (int x ,int y)  //因为 a和b 就是两个整型，所以应该返回一个整型 int x，int y;
// x,y 用来接收 a，b 。
//可以使用if语句，也可以使用条件操作符。
/*{
    if (x>y )
    {
        return x ;
    }
    else
    {
        return y ;
    }
}
*/
{
    return (x>=y ? x : y );
    //条件操作符 exp1? exp2:exp3;
    //exp1 真-执行exp2；假-执行exp3。
}
int main()
{
    int a =10;
    int b =20;  //要求两个数的最大值，首先定义两个数；
    //然后再定义一个函数。
    //函数的使用：
    int max =get_max (a,b);  //括号里写的是函数的参数。
    //get_max的意思就是获取函数最大值。
    printf ("max=%d\n",max );
    system ("pause");
    return 0;
}


/*
//没有注释的源码：求两个数的最大值get_max。

 #include <stdio.h>
int get_max (int x ,int y )
//?使用if语句：
{
    if (x >=y )
    {
        return x ;
    }
    else
    {
        return y ;
    }
}
int main()
{
    int a =10;
    int b =20;
    int max =get_max(a ,b );
    printf ("max=%d\n",max );
    return 0;
}

#include <stdio.h>
int get_max (int x ,int y )
//?使用条件操作符：
{
    return (x >=y ? x :y );
}
int main()
{
    int a =10;
    int b =20;
    int max =get_max(a ,b );
    printf ("max=%d\n",max );
    return 0;
}

注：在 return 0 前面加一个 system（“pause”）就可以按任意键继续。
*/
