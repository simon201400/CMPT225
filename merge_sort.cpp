void merge_sort(int arr[], int s, int e)
{
    if(s >= e) return;
    merge_sort(arr[], s, (s+e)/2);
    merge_sort(arr[], (s+e)/2 + 1, e);
    merge(arr, (s+e)/2, e);
}