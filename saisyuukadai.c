#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(0));
    int seikai = (rand() % 100) + 1;
    int number;

    printf("1～100の数字を入力してください: ");

    while (1)
    {
        scanf("%d", &number);
        if (number > seikai)
        {
            printf("高すぎます。もう一度入力してください: ");
        } 
        else if (number < seikai)
        {
            printf("低すぎます。もう一度入力してください: ");
        }
        else
        {
            printf("正解です！\n");
            break;
        }
    }

    return 0;
}

