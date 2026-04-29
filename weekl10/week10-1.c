/// week10-2.cpp 另外一種排序法
/// 上週教Bubble Sort泡泡排序法,慢!
/// 今天教 Selection Sort 選擇排序法, 快一點!
#include <stdio.h>

int main()
{
    // 初始化陣列
    int a[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    // 印出原始陣列
    for (int k = 0; k < 10; k++) printf("%d ", a[k]); /// 空格
    printf("\n"); /// 這兩行, 負責印出陣列裡的數字

    // 選擇排序法核心邏輯
    for (int i = 0; i < 10; i++) { /// 左邊i
        for (int j = i + 1; j < 10; j++) { /// 右邊j (就是從 i+1開始)
            if (a[i] > a[j]) { /// 大小不對,就交換 (由小到大排)
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // 印出排序後的結果
    for (int k = 0; k < 10; k++) printf("%d ", a[k]); /// 空格
    printf("\n"); /// 這兩行, 負責印出陣列裡的數字


}
