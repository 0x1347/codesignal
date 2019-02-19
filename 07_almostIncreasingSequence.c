bool almostIncreasingSequence(arr_integer sequence) {
    
int l = sequence.size;
    int j = -1,x=0;
    for (int i = 1; i < l; i++){
        if (sequence.arr[i-1]>=sequence.arr[i]){
            j=i; 
            x++;
        }
    }
    if (x > 1) return false;
    if (x == 0) return true;
    if (j == l-1 || j == 1) return true;
    if (sequence.arr[j-1] < sequence.arr[j+1]) return true;
    if (sequence.arr[j-2] < sequence.arr[j]) return true;
return false;
}
