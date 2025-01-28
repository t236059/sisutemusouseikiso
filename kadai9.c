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
    
    printf("charisma = %d\n ", charisma);


    int mage, knight, thief;
    
    mage = intelligence;
    knight = stamina;
    thief = charisma;

    if (mage > knight && mage > thief)
    {
        printf("mage\n");
    }
    else if (knight > mage && knight > thief)
    {
        printf("knight\n");
    }
    else if (thief > mage && thief > knight)
    {
        printf("thief\n");
    }
    else if (mage == knight && mage > thief)
    {
        printf("mage, knight\n");
    }
    else if (knight == thief && knight > mage)
    {
        printf("knight, thief\n");
    }
    else if (mage == thief && mage > knight)
    {
        printf("mage, thief\n");
    }
    else
    {
        printf("wakaranai\n");
    }
    return 0;
}
    
}