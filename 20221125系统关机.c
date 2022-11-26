#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char input [20]={0};
    system ("shutdown -s -t 60");
    while (1)
    {
    printf ("你的电脑将在一分钟内关机。\n\n如果输入"我是猪"，将会取消关机。\n\n请输入：");
    scanf ("%s",input);
    if (strcmp(input,"我是猪")==0)
    {
    system("shutdown -a");
    break;
        }
    }
    system("pause");
    return 0;
}
