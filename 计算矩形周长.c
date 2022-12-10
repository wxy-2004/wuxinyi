//计算矩形的周长
//长 length；宽 wide；周长 pmt。
#include <stdio.h>
int main ()
{
    int length =0;
    int wide =0;
    int pmt =0;
    printf ("请输入矩形的长：\n");
    scanf ("%d",&length );
    printf ("请输入矩形的宽：\n");
    scanf ("%d",&wide );
    pmt =(length +wide )*2;
    printf ("你输入的矩形的周长为：%d\n",pmt );
    return 0;
}


//利用函数计算矩形的周长 Perimeter 函数
//长 length；宽 wide；周长 pmt
#include <stdio.h>
int pmt (int x ,int y )
{
    return ((x+y )*2);
}
int main ()
{
    int length =3;
    int wide =4;
    printf ("请输入矩形的长：\n");
    scanf ("%d",&length );
    printf ("请输入矩形的宽：\n");
    scanf ("%d",&wide );
    int Perimeter = pmt (length ,wide );
    printf ("你输入的矩形的周长为：%d\n",Perimeter );
    return 0;
}

//在定义函数 Perimeter 中用到的变量可以写成另一种形式
#include <stdio.h>
int pmt (int x ,int y )
{
    int z ;
    z =(x +y )*2;
    return z ;
}
int main ()
{
    int length =3;
    int wide =4;
    printf ("请输入矩形的长：\n");
    scanf ("%d",&length );
    printf ("请输入矩形的宽：\n");
    scanf ("%d",&wide );
    int Perimeter = pmt (length ,wide );
    printf ("你输入的矩形的周长为：%d\n",Perimeter );
    return 0;
}
