#include <stdio.h>
#include <Windows.h>

int recursive_wage(int hour) {
    if (hour == 1) {
        return 100;
    }
    else {
        return recursive_wage(hour - 1) * 2 - 50;
    }
}

int main() {
    /*SetConsoleOutputCP(65001);*/
    int n;
    printf("労働時間を入力してください: ");
    scanf_s("%d", &n);

    int normal_total = 1072 * n;

    int recursive_total = 0;
    for (int i = 1; i <= n; i++) {
        recursive_total += recursive_wage(i);
    }

    printf("通常給与体系の合計給与: %d 円\n", normal_total);
    printf("再帰給与体系の合計給与: %d 円\n", recursive_total);

    if (recursive_total > normal_total) {
        printf("再帰給与体系を選ぶ方が得です！\n");
    }
    else if (recursive_total < normal_total) {
        printf("通常給与体系を選ぶ方が得です！\n");
    }
    else {
        printf("両方の給与体系は同じです！\n");
    }

	system("pause");

    return 0;
}
