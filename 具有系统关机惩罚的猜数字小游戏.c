#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void menu (void )
    {
        printf ("---------------------------------\n\n");
        printf ("------  ��ӭ������������Ϸ  ------\n\n");
        printf ("----  1 ��ʼ��Ϸ  0 �˳���Ϸ  ----\n\n");
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
            printf ("\n\n�������\n\n");
            scanf ("%d",&guess);
            count ++;
            if (guess >ret )
            {
                printf ("\n�´���\n");
            }
            else if (guess <ret )
            {
                printf ("\n��С��\n");
            }
            else if (guess ==ret )
            {
                printf ("\n��ϲ�㣬�¶���!\n");
                printf ("\n��һ������%d�Σ�������̫���ˣ�\n\n\n",count );
                break ;
            }
    }
    if (count >=7)
    {
        printf ("���ܳͷ�������\n\n ");
        char input2 [20]={0};
        system ("shutdown -s -t 60");
        while (1)
        {
        printf ("��ĵ��Խ���һ�����ڹػ���\n\n�������'������'������ȡ���ػ���\n\n�����룺");
        scanf ("%s",input2);
        if (strcmp(input2,"������")==0)
        {
        system("shutdown -a");
        break;
            }
        }
    }
    else
    {
        printf ("��ϲ�㣬����Ҫ���ܳͷ���\n\n");
    }
}
int main ()
{
    printf ("������һ��������С��Ϸ�ɣ�\n\n ");
    printf ("ע�⣺����µ��Ĵ��� >= 6�Σ����ܵ��ͷ���\n\n ");
    int input1 =0;
    srand ((unsigned int )time (NULL));
    do
    {
        menu ();
        printf ("��ѡ��:\n\n");
        scanf ("%d",&input1 );
        switch (input1 )
        {
            case 1: game();
                break ;
            case 0: printf ("�˳���Ϸ\n");
                break;
            default : printf ("ѡ�����\n");
                break ;
        }
    }
    while (input1 );
    return 0;
}
