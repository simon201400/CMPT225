if(start >= end-1)
{
    if(start > end)
    {
        return;
    }
    if(start == end)
    {
        return;
    }
    if(end - start == 1)
    {
        swap(arr[start], arr[end]);
        return;
    }
}