#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char password[100];
    char large;
    char small;
    
    int k;
    printf("パスワードを入力してください");
    scanf("%s", password);
    
    for (int i = 0; password[i] != '\0'; i++)
    {
        if(isupper(password[i])) large = 1;
        if(islower(password[i])) small = 1;
        if(large && small) break;
    }
    
    if(strlen(password) >= 8)
    {
        if(large >= 1)
        {
            if(small >= 1)
            {
                printf("強いパスワードです");
            }
            else
            {
                printf("小文字が含まれていません");
            }
        }
        else
        {
            printf("大文字が含まれていません");
        }
    }
    
    else
    {
        printf("8文字以上ではありません");
    }

    return 0;
}