int shapeArea(int n) {
     if (n>=10000 || n<1)
        return 0;
    int result =((n*n)+(n-1)*(n-1));
    return result; 
}
