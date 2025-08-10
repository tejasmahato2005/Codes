#include <stdio.h>

struct date
{
    int mm;
    int dd;
    int yyyy;
};

int comapare(struct date d1, struct date d2){
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
    {   
         return 0;
    }
    
    
    if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    
    else if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }
    else if (d1.mm > d2.mm)
    {
        return 1;
    }
    else if (d1.mm < d2.mm)
    {
        return -1;
    }
    else if (d1.dd > d2.dd)
    {
        return 1;
    }
    else if (d1.dd < d2.dd)
    {
        return -1;
    }
    
}
int main(){
    struct date d1 = {5, 1, 2005};
    struct date d2 = {6, 12, 2204};
    printf("%d", comapare(d1,d2));
    return 0;
}