
int adjacentElementsProduct(arr_integer inputArray )
{
    int max = inputArray.arr[0] * inputArray.arr[1];
    for(int i=0;i<(inputArray.size-1);i++)
    {
        int t = inputArray.arr[i] * inputArray.arr[i+1];
        if (max < t) max=t;
    }   
        
    return max;
}
