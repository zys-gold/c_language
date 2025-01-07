#define _CRT_SECURE_NO_WARNINGS 1   //有不安全函数时用这个代码
#include <stdio.h>

int main()
{
    //printf("hehe\n");
    int a = 0;
    scanf("%d", &a);
    printf("a = %d\n", a);

    return 0;
}
//vs中认为的不安全函数
//scanf
//strcpy
//strcat
//newc++file.cpp