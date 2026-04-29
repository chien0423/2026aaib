// week10-4.cpp A035
#include <stdio.h>

int main()
{
    int a[100];

    // 1. 块 100 计
    for (int i = 0; i < 100; i++) {
        scanf("%d", &a[i]);
    }

    // 2. 匡拒逼 (パ)
    for (int i = 0; i < 100; i++) {
        for (int j = i + 1; j < 100; j++) {
            if (a[i] > a[j]) { // 狦オ娩ゑ娩碞ユ传
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // 3. 块挡狦北Α
    for (int i = 0; i < 100; i++) {
        printf(" %d", a[i]); // –计玡

        // – 10 计传︽程计 (i=99) ぃ肂传︽
        if (i % 10 == 9 && i != 99) {
            printf("\n");
        }
    }

}
