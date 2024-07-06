#include <stdio.h>
#include <Windows.h>

int main() {
    SetConsoleCP ( 1251 );
    SetConsoleOutputCP ( 1251 );
int n, count = 0;

    printf("Введіть натуральне число n: ");
    scanf("%d", &n);

    if (n <= 1 || n >= 150) {
        printf("Число n повинно бути в діапазоні 1 < n < 150\n");
        return 1;
    }

    for (int m = 1; m < n; m++) {
        if (n / m == n % m) {
            count++;
        }
    }

    printf("Кількість рівних дільників: %d\n", count);

    return 0;
}
