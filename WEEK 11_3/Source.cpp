﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{

    char str[1000] = "\0";
    char reverseStr[1000] = "\0";
    scanf("%s", &str);

    for (int i = 0; i < strlen(str); i++)//ระวัง Runtime Error 2 ที่ขนาด Array มีไม่พอ 
    {
        for (int j = strlen(str) - i; j >= 0; j--)// หมายถึงการชี้เป้า index จากข้างหลัง 
        {
            reverseStr[j - 1] = str[i]; // ให้ Reverse ตัวอักษร
            break;
        }
    }
    printf("%s", reverseStr);

}



