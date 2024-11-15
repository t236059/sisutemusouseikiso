#include <stdio.h>

int main(void)
{
    int apple,orenge,banana;
    
    apple = 10;  //リンゴの数
    orenge = 20; //オレンジの数
    banana = 30; //バナナの数
    
    // 変数と定数の比較
    if(apple == 10)
       printf("リンゴは１０個あります\n");
    if(orenge != 20)
       printf("オレンジは２０個ありません\n");
    if(banana >= 30)
       printf("バナナは３０以上あります\n");
    if(orenge < 20)
       printf("オレンジは２０個未満です\n");

    //変数と変数の比較
    if(apple > orenge)
       printf("リンゴの数はオレンジの数より多いです\n");
    if(orenge > banana)
       printf("オレンジの数はバナナの数より多いです\n");
       
    return 0;
}