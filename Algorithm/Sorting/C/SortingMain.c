//
// Created by npufr on 2017/7/24.
//
#include "Sorting.h"
void printArray(int arr[],int size){
    printf("Size of array is %d:\n",size);
    for(int i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[] = {6,8,3,9};
    quickSort(arr,4);
    printArray(arr,4);
    return 0;
}
