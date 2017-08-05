
void sort(int arr[],int start,int end){
    if(start >= end){
        return;
    }

    int pivot = arr[end - 1];
    int index = start -1;
    for(int i = start;i < end - 1;i++){
        if(arr[i] <=  pivot){
            index++;
            int temp = arr[i];
            arr[i] =  arr[index];
            arr[index] = temp;
        }
    }
    int temp = arr[++index];
    arr[index] =  arr[end -1];
    arr[end -1] =  temp;
    sort(arr,start,index);
    sort(arr,index +1, end);
}

void quickSort(int arr[],int size){
    sort(arr,0,size);
}
