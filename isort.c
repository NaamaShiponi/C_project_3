#include <stdio.h>

void shift_element(int* arr,int i){
    int* p = arr+i;
    for (int j = i; j > 0; j--)
    {
        *p =*(p-1);
        p=p-1;
    }
}



void insertion_sort(int* arr, int len){
    int val,count;
    int *p=arr;
    for (size_t i = 1; i < len; i++){
        val=*(arr+i);
        count=0;
        while (count<i && *(p-count) > val)
        {
            count++;
        }
        if(count>0){
            shift_element((p-count+1),count);
            *(p-count+1)=val;
        } 
        p=p+1;
    }

}
