#include <stdio.h>


int main()
{
    int k;
    printf("What is goodnumber?");
    scanf("%d", &k);
    
    int j;
    printf("What is badnumber?");
    scanf("%d", &j);
    
    if (k > 44)
    {
        printf("There are good number!");
        
    }
    
    else if (j <= 44)
    {
        printf("There are bad number!");
        
    }
    
    else
    {
        printf("There are not number!");
    }
    return 0;
}