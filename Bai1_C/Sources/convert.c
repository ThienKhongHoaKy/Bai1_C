
#include"..\Headers\convert.h"
#include<string.h>
#include<stdio.h>
void decTobinArr(int dec)
{
    printf("%d-> 0b",dec);
    int _byte[32];
    int i;
    for (i=0;dec>0;i++)
    {
        _byte[i]=dec%2;
        dec=dec/2;
    }
    for (i=i-1;i>=0;i--){
        printf("%d",_byte[i]);
    }
    printf("\n");
}
void decTohexArr(int dec)
{
    printf("%d-> 0x",dec);
    int _hex[8];
    int i;
    for(i=0;dec>0;i++)
    {
        int a=dec % 16;     //bien a dung de tinh toan
        if (a<10){
            a=a+48;
        } else if (10<a<16)
        {
            a=a+55;
        }
        _hex[i]=a;
        dec=dec/16;        
    }
    for (i=i-1;i>=0;i--){
        printf("%c",(char)_hex[i]);
    }
    printf("\n");
}
