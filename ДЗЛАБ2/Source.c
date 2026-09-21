#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

int main() {
    const float SPEED_PER_WALK = 4;
    const float SPEED_PER_RUN = 3 * SPEED_PER_WALK;

    setlocale(LC_CTYPE, "RUS");

    float quarts;
    printf("Введите количество килломаетров: ");
    scanf("%f", &quarts);

    double total_distance = quarts / SPEED_PER_RUN;

    double total_time = total_distance * 60;

    printf("\nРАСЧЕТ КОЛИЧЕСТВА ЗАТРАЧЕННОГО ВРЕМЕНИ\n");
    printf("================================\n\n");
    printf("УСЛОВИЯ:\n");
    printf("- Скорость хотьбы: %.1f км/ч.\n", SPEED_PER_WALK);
    printf("- Скорость бега: %.0f км/ч.\n\n", SPEED_PER_RUN);

    printf("РАСЧЕТ:\n");
    printf("- Дистанция: %.0f км.\n", quarts);
    printf("- Общее затраченное время в часах: %.2f км / %.0f км/ч = %.2f ч.\n",
        quarts, SPEED_PER_RUN, total_distance);
    printf("- Общее затраченное время в минутах: %.2f ч * 60 = %.2f мин.\n",
        total_distance, total_time);
    printf("================================\n");
    printf("ВРЕМЯ ЗАТРАЧЕННОЕ НА ПРОЙДЕННУЮ ДИСТАНЦИЮ: %.3f ч. или %.0f мин\n", total_distance, total_time);

    return 0;
}