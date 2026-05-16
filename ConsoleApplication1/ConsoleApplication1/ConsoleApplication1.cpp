// ConsoleApplication1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
struct Parameter
{
    char name[10];
    int hp;
    int attack;
    int defense;
};
void DispParameter(Parameter param)
{
    printf("Name:%s\n", param.name);
    printf("HP:%d\n", param.hp);
    printf("Attack:%d\n", param.attack);
    printf("Defense:%d\n", param.defense);
}
int main()
{
    Parameter A = { "Rui",10,99,1 };

    Parameter F = { "Riku",32,24,69 };
    DispParameter(A);
    DispParameter(F);
    return 0;
}

