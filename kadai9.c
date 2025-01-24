#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    
    srand(time(0));
    
    int intelligence = (rand() % 20) + 1;
    
    printf("intelligence = %d ", intelligence);
    

    srand(time(0));
    
    int stamina = (rand() % (20-intelligence)) + 1;
    
    printf("stamina = %d ", stamina);

    
    int a, b, charisma;
    
    a = intelligence;
    b = stamina;
    
    charisma = 20 - (a + b);
    
    printf("charisma = %d\n", charisma);


    int mage, knight, thief;
    
    mage = intelligence;
    knight = stamina;
    thief = charisma;
    
    if (mage > (knight, thief))
    {
        printf("mage");
    }
        
    else if (knight > (mage, thief))
    {
        printf("knight");
    }
        
    else if (thief > (knight, mage))
    {
        printf("thief");
    }

    else if ((mage = knight) > thief)
    {
        printf("mage, knight");
    }
        
    else if ((knight = thief) > mage)
    {
        printf("knight, thief");
    }
        
    else if ((mage = thief) > knight)
    {
        printf("mage, thief");
    }
    
    else
    {
        printf("wakaranai");
    }
    
    return 0;
}