#include <stdio.h>

#define ARR_SIZE 4

void insertion_sort(int* arr, int len);
void printarrya(int* arr,int len);

int main()
{
    int arr[ARR_SIZE];
    int num=0;
    for (int i = 0; i <ARR_SIZE ; i++)
    {
        scanf("%d",&num);
        *(arr+i)=num;
    }
    insertion_sort(arr,ARR_SIZE);
    printarrya(arr,ARR_SIZE);
    return 1;
}

void printarrya(int* arr,int len){
    printf("%d",*(arr));
    
    for (size_t i = 1; i < len; i++)
    {
        printf(",%d",*(arr+i));
    }
    printf("\n");
}