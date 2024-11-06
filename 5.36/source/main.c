#include <stdio.h>

// 函式原型：將 n 個圓盤從源柱移動到目標柱
/* 1.一次只能移動一個圓盤。
   2.不能將較大的圓盤放在較小的圓盤上。
   3.可以借助第三根柱子作為中介   */
void hanoi(int n, char source, char target, char auxiliary);

int main() {
    int n;

    // 輸入圓盤數量
    printf("請輸入圓盤數量: ");
    scanf("%d", &n);

    // 呼叫漢諾塔遞歸函式
    printf("移動 %d 個圓盤的步驟：\n", n);
    hanoi(n, 'A', 'C', 'B');  // A 是源柱，C 是目標柱，B 是輔助柱

    return 0;
}

// 遞歸函式：將 n 個圓盤從源柱 source 移動到目標柱 target，輔助柱為 auxiliary
void hanoi(int n, char source, char target, char auxiliary) {
    if (n == 1) {
        // 只有一個圓盤時，直接從源柱移動到目標柱
        printf("將圓盤 1 從 %c 移動到 %c\n", source, target);
    }
    else {
        // 將 n-1 個圓盤從源柱移動到輔助柱
        hanoi(n - 1, source, auxiliary, target);

        // 將第 n 個圓盤從源柱移動到目標柱
        printf("將圓盤 %d 從 %c 移動到 %c\n", n, source, target);

        // 將 n-1 個圓盤從輔助柱移動到目標柱
        hanoi(n - 1, auxiliary, target, source);
    }
}