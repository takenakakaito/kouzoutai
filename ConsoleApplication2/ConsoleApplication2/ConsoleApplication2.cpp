// ConsoleApplication2.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
struct Score
{
    char name[10];
    int score;
};
void DispScore(Score score)
{
    printf("Name:%s\n", score.name);
    printf("Score:%d\n", score.score);
}
int main()
{
    int total=0;
    float ave=0;
    int max=0;
    Score A = { "Raiki",44 };
    Score B = { "Raito",34 };
    Score C = { "Yusei",16 };
    Score D = { "Mahiro",32 };
    Score E = { "Naoto",9 };
    DispScore(A);
    DispScore(B);
    DispScore(C);
    DispScore(D);
    DispScore(E);
    Score students[5] = { A,B,C,D,E };
    for (int i = 0; i < 5; i++)
    {
        total += students[i].score;
        if (max<students[i].score)
        {
            max = students[i].score;
        }
    }
    ave = (float)total / 5;
    printf("平均:%f",ave);
    for (int j = 0; j < 5; j++)
    {
        if (max == students[j].score)
        {
            printf("最高得点:%d", students[j].score);
            printf("名前:%s", students[j].name);
        }
    }
    
}

