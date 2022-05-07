#include<stdio.h>
#include"..\Headers\calc.h"


void arrShow(int arr[],int n)
{
    for (int i=0;i<n;i++){
        printf("a[%d]= %d\n",i,arr[i]);
    }
}
int arrFind(int arr[],int n,int Num)
{   
    for(int i=0;i<n;i++){
        if (arr[i]==Num){
            return i;
        }
    }
    return -1;
}
int arrMin(int arr[],int n)
{
    int min=arr[0];
    for (int i=1;i<n;i++){
        if ( arr[i]<min){
            min=arr[i];
        }
    } 
    return min;
}
int arrMax(int arr[],int n)
{
    int max=arr[0];
    for (int i=1;i<n;i++){
        if ( arr[i]>max ){
            max=arr[i];
        }
    } 
    return max;
}
