#include <stdio.h>


int main()
{
    int k;
    printf("What is goodnumber?");
    scanf("%d", &k);
    
    printf("goodnumber is %d", k);
    
    int j;
    printf("What is badnumber?");
    scanf("%d", &j);
    
    printf("badnumber is %d", j);
    
    printf("allnumber is %d", k+j);
    
    
    

    return 0;
}