#include"..\Headers\m_string.h"
#include<stdio.h>


/*Hàm so sánh 2 mảng trong C*/
int IsArr_equal(int array1[],int size1, int array2[], int size2)
{
    //flag = 1 => 2 mảng đã cho giống nhau
    //flag = 0 => 2 mảng đã cho khác nhau
    int flag = 1;
    /*Nếu số phần tử của 2 mảng khác nhau, thì chúng sẽ khác nhau*/
    if (size1 != size2)  return flag = 0;
    /*Kiểm tra từng cặp phần tử tương ứng xem có cặp nào khác nhau không*/
    for (int i = 0; i < size1; ++i) {
        if (array1[i] != array2[i])  return flag = 0;         
    }
    return flag;
}
int* AddArr(int array1[],int size1,int array2[],int size2,int pos)
{   
    if ((size1+size2)>MAX){
        return;
    }     
    if (pos<0){
        pos=0;
    }
    if (pos>(size1)){
        pos=size1;
    }
    int arr[size1+size2];
    for (int i=0;i<pos;i++){
        arr[i]=array1[i];
    }
    for (int i=pos;i<(pos+size2);i++){
        arr[i]=array2[i-pos];
    }
    for (int i=pos+size2;i<(size1+size2);i++){
        arr[i]=array1[i-pos];
    }
    return arr;
}





