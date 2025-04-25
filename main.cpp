#include <stdio.h>
#define NOMINMAX
#include <Windows.h>

template <typename T>
T min(T a, T b) {
    return (a < b) ? a : b;
}

int main() {
    int a = 10, b = 20;
    float d = 5.5f, e = 3.3f;

    printf("より小さい整数: %d\n", min(a, b));
    printf("より小さい浮動小数点数: %.2f\n", min(d, e));

    system("pause");    

    return 0;
}
