#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    if (count >=7)
    {
        printf ("接受惩罚吧亲亲\n\n ");
        char input2 [20]={0};
        system ("shutdown -s -t 60");
        while (1)
        {
        printf ("你的电脑将在一分钟内关机。\n\n如果输入'我是猪'，将会取消关机。\n\n请输入：");
        scanf ("%s",input2);
        if (strcmp(input2,"我是猪")==0)
        {
        system("shutdown -a");
        break;
            }
        }
    }
    else
    {
        printf ("恭喜你，不需要接受惩罚！\n\n");
    }
}
int main ()
{
    printf ("先来玩一个猜数字小游戏吧！\n\n ");
    printf ("注意：如果猜到的次数 >= 6次，会受到惩罚！\n\n ");
    int input1 =0;
    srand ((unsigned int )time (NULL));
    do
    {
        menu ();
        printf ("请选择:\n\n");
        scanf ("%d",&input1 );
        switch (input1 )
        {
            case 1: game();
                break ;
            case 0: printf ("退出游戏\n");
                break;
            default : printf ("选择错误\n");
                break ;
        }
    }
    while (input1 );
    return 0;
}
