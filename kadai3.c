#include <stdio.h>

int main(void)
{
    int diff;
    char small; // 小文字
    char large; // 大文字
    
    printf("アルファベットの小文字を入力してください");
    scanf("%c", &small);
    diff = 'A' - 'a';     // 'a'と'A'との文字の差
    large = small + diff; // 大文字に変換
    
    printf("小文字は%c   大文字は%c\n", large, small);
    return 0;
}