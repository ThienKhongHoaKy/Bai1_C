#ifndef _M_STRING_H_
#define _M_STRING_H_
#define Size_of_arr(arr) (sizeof(arr)/sizeof(arr[0]))
#define MAX 1000


int IsArr_equal(int array1[],int size1, int array2[], int size2);
int AddArr(int array1[],int size1,int array2[],int size2,int pos);
#endif