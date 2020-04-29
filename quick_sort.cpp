void quicksort(int arr[], int start, int end)
{
    if(start >= end) return;
    int i = partiton(arr, start, end);//index of pivot
    quicksort(arr, start, i-1)//head to pivot-1
    quicksort(arr, i+1, end)//pivot+1 to end
    //no need to sort pivot

}

int partition(int arr[], int start, int end)
//when finsh, the elements before pivot are less than pivot, and the elements after pivot are more than pivot 
{
    int pivot  = start;
    int smaller = start;//smaller是前面更小的区域的最后一位
    for(int i = start + 1; i <= end; i++)
    {
        if(arr[i] < arr[pivot])
        {
            swap(arr[i], arr[smaller+1]);
            smaller++;
        }
    }    
    swap(arr[start], arr[smaller]);
    return s;
}