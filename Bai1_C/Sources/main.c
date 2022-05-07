#include<stdio.h>
#include"..\Headers\calc.h"
#include"..\Headers\convert.h"
#include"..\Headers\m_string.h"



int main()
{
    int a1[]={12,13,11,14,15,16,21,12,23,22,25,25,25,2,5,1,4,6,7,9,22,21,23,21,21};
    int a2[]={12,13,11,14,15,16,21,12,23,22,25,25,2,5,1,4,6,7,9,22,21,23,21,21};
    int a3[]={12,13,11,14,15,16,21,12,25,22,25,25,25,2,5,1,4,6,7,9,22,21,23,21,25};
    int a4[]={2,3,4,5,6,7};
    int size=25;
    // printf("max= %d\n",arrMax(a1,size));
    // printf("min= %d\n",arrMin(a1,size));
    // arrShow(a1,size);
    // printf("size= %d\n",sizeof(a1)/sizeof(a1[0]));

    // decTobinArr(68);
    // decTohexArr(68);
    //printf("%d",Size_of_arr(a1));
    printf("%d\n", IsArr_equal(a1, Size_of_arr(a1), a1, Size_of_arr(a1)));
    printf("%d\n", IsArr_equal(a1, Size_of_arr(a1), a2, Size_of_arr(a2)));
    printf("%d\n", IsArr_equal(a1, Size_of_arr(a1), a3, Size_of_arr(a3)));
    printf("%d\n", IsArr_equal(a2, Size_of_arr(a2), a3, Size_of_arr(a3)));
    int *p = AddArr(a1, Size_of_arr(a1), a4, Size_of_arr(a4),5);
    for (int i=0;i<(Size_of_arr(a1)+Size_of_arr(a4));i++){
        printf("*(p+%d) : %d\n",i,*(p+i));
    }
    return 0;
}
