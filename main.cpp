#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h> 

typedef void (*ResultCallback)(int, int);

void checkResult(int dice, int userGuess) {
    int isEven = dice % 2 == 0 ? 1 : 0;

    printf("出目は %d です。\n", dice);
    if (userGuess == isEven) {
        printf("正解！\n");
    }
    else {
        printf("不正解！\n");
    }
}

void playDiceGame(ResultCallback callback) {
    int dice = rand() % 6 + 1;
    int userGuess;

    printf("奇数は 0、偶数は 1 を入力してください：");
    scanf_s("%d", &userGuess);

    printf("Loading...\n");
    Sleep(3000); 

    callback(dice, userGuess);
}

int main() {
    srand((unsigned int)time(NULL)); 

    playDiceGame(checkResult);

	system("pause");  

    return 0;
}
