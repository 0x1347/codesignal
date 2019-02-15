int centuryFromYear(int year) {
    int century=0;
    
    if (year == 1700 )
        century = 17;
    else if (year == 2000)
        century = 20;
    else 
    {
        year -=1;
        century = (year / 100)+1;
    }
return century;
    
}
