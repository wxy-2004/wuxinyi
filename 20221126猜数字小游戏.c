#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    //猜数字游戏
    //电脑会生成随机数字让你猜，猜大提示猜大了，猜小就提示猜小了。
    //rand（）就是生成随机数的函数


//构建菜单函数menu。
void menu (void )
//这里括号里要有void，不然会报错。一些编译器里可以直接写void menu（）。
//进入游戏前需要一个菜单入口

    {
        printf ("---------------------------------\n\n");
        printf ("------  欢迎来到猜数字游戏  ------\n\n");
        printf ("----  1 开始游戏  0 退出游戏  ----\n\n");
        printf ("---------------------------------\n\n");
    }
/*void game (void)
{
    printf ("\n 猜数字游戏 \n\n");
}*/
//想要生成随机数 => 想到电脑上的时间一直在变化。这就用到了时间戳1584845132
//计算机的起始时间：1970.1.1.0:0：0
//rand函数生成随机数，RNAD_MAX-32767。要是生成0-100，就可以 rand % 100 +1


//构建游戏主体函数
void game (void )
{
    int ret =0;
    int guess=0;
    //guess用来接受所猜的数字。
    int count =0;
    ret =rand() %100+1;
    //生成0-100的随机数。%100是生成0-99的数字。
   // printf ("%d\n",ret );
    while (1)
        //选择1，游戏开始，执行这部分程序。
    {
            printf ("\n\n请猜数字\n\n");
        //printf可以写到循环外面，写到循环外面它就只提示一次猜数字。
            scanf ("%d",&guess);
            count ++;
        //count++看看猜了几次。
            //用户猜数字可能猜大也可能猜小
            if (guess >ret )
            {
                printf ("\n猜大了\n");
            }
            else if (guess <ret )
            {
                printf ("\n猜小了\n");
            }
            else if (guess ==ret )
                //注意这里写两个等号，不要写成一个赋值。
            {
                printf ("\n恭喜你，猜对了!\n");
                printf ("\n你一共猜了%d次，你真是太棒了！\n\n\n",count );
                //这种情况不需要写取地址符。
                break ;
                //这里必须有break才能返回菜单！！！
            }
    }
}


//主函数
int main ()
{
    int input =0;
    //因为游戏至少要执行一次，所以可以用do while循环
    /*do
     {
    执行条件;
         }
      while(判断)*/
    
    srand ((unsigned int )time (NULL));
    
    //(unsigned int)time 是 srand 的参数，作用是返回一个变化整形，而 (NULL)是time的参数，因为time要求输入一个指针类型的参数，所以输入NULL空指针。
    //srand 生成起点，不要频繁调用。
    //NULL空指针
    //使用随机数要用到，time有一个头文件<time.h>
    //srand的头文件是<stdlib.h>
    
    do
    {
        menu ();
        printf ("请选择:\n\n");
        scanf ("%d",&input );
        switch (input )
        {
            case 1: game();
                break ;
            case 0: printf ("退出游戏\n");
                break;
            default : printf ("选择错误\n");
                break ;
        }
    }
    while (input );
    return 0;
}


/*不含注释的源码。
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu (void )
    {
        printf ("---------------------------------\n\n");
        printf ("------  欢迎来到猜数字游戏  ------\n\n");
        printf ("----  1 开始游戏  0 退出游戏  ----\n\n");
        printf ("---------------------------------\n\n");
    }
void game (void )
{
    int ret =0;
    int guess=0;
    int count =0;
    ret =rand() %100+1;
    while (1)
    {
            printf ("\n\n请猜数字\n\n");
            scanf ("%d",&guess);
            count ++;
            if (guess >ret )
            {
                printf ("\n猜大了\n");
            }
            else if (guess <ret )
            {
                printf ("\n猜小了\n");
            }
            else if (guess ==ret )
            {
                printf ("\n恭喜你，猜对了!\n");
                printf ("\n你一共猜了%d次，你真是太棒了！\n\n\n",count );
                break ;
            }
    }
}
int main ()
{
    int input =0;
    srand ((unsigned int )time (NULL));
    do
    {
        menu ();
        printf ("请选择:\n\n");
        scanf ("%d",&input );
        switch (input )
        {
            case 1: game();
                break ;
            case 0: printf ("退出游戏\n");
                break;
            default : printf ("选择错误\n");
                break ;
        }
    }
    while (input );
    return 0;
}
*/

