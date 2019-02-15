int makeArrayConsecutive2(arr_integer statues) {
    int max,min,re;
    min = max= statues.arr[0];
    for (int i =0 ;i< statues.size ;i++ )
    {
    if (max < statues.arr[i])
        max= statues.arr[i];
    if (min > statues.arr[i])
        min= statues.arr[i];
    }
    re = max-min+ 1 - statues.size;
    return re;
}
