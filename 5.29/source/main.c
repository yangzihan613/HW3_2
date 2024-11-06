#include <stdio.h>

// 計算最大公因數（使用輾轉相除法）
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 計算最小公倍數
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b; // 避免整數溢位
}

int main() {
    int num1, num2;
    printf("輸入兩個整數: ");
    scanf("%d %d", &num1, &num2);

    int result = lcm(num1, num2);
    printf("最小公倍數為: %d\n", result);

    return 0;
}
