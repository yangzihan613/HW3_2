#include <stdio.h>
#include <limits.h>  // 包含 ULLONG_MAX 常數

// 計算第 n 項斐波那契數的非遞歸函數
unsigned long long int fibonacci(unsigned int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    unsigned long long int a = 0, b = 1, fib;
    for (unsigned int i = 2; i <= n; i++) {
        fib = a + b;  // 計算下一項斐波那契數
        a = b;        // 更新 a 為前一項
        b = fib;      // 更新 b 為當前項
    }
    return fib;
}

// 查找能在系統上顯示的最大斐波那契數
void find_max_fibonacci() {
    unsigned long long int a = 0, b = 1, fib;
    unsigned int n = 1;  // 從 F(1) 開始

    while (1) {
        // 檢查是否即將溢出：如果 a + b 超過了 unsigned long long int 的最大值
        if (ULLONG_MAX - a < b) {
            printf("最大可表示的斐波那契數是 F(%u) = %llu\n", n, a);
            break;
        }

        // 計算下一個斐波那契數
        fib = a + b;
        a = b;
        b = fib;
        n++;
    }
}

int main() {
    unsigned int n;

    // 計算並輸出用戶指定的斐波那契數列項
    printf("請輸入你要計算的斐波那契數列的項數 n: ");
    scanf("%u", &n);  // 讀取用戶輸入

    unsigned long long int result = fibonacci(n);
    printf("第 %u 項斐波那契數是: %llu\n", n, result);

    // 查找並顯示能顯示的最大斐波那契數
    find_max_fibonacci();

    return 0;
}
