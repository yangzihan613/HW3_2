#include <stdio.h>

// �p��̤j���]�ơ]�ϥ�����۰��k�^
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// �p��̤p������
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b; // �קK��Ʒ���
}

int main() {
    int num1, num2;
    printf("��J��Ӿ��: ");
    scanf("%d %d", &num1, &num2);

    int result = lcm(num1, num2);
    printf("�̤p�����Ƭ�: %d\n", result);

    return 0;
}
