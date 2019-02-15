bool checkPalindrome(char * inputString) {
   
    bool t=false;
    int x = strlen(inputString)-1;
    int y=0;
    for (;inputString[y] != '\0'; y++,x--)
        {
        if (inputString[y] == inputString[x])
            t = true;
        else
        {
            t = false;
            break;
        }
    }

    return t;
    
}
