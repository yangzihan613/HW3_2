#include <stdio.h>

// �禡�쫬�G�N n �Ӷ�L�q���W���ʨ�ؼЬW
/* 1.�@���u�ಾ�ʤ@�Ӷ�L�C
   2.����N���j����L��b���p����L�W�C
   3.�i�H�ɧU�ĤT�ڬW�l�@������   */
void hanoi(int n, char source, char target, char auxiliary);

int main() {
    int n;

    // ��J��L�ƶq
    printf("�п�J��L�ƶq: ");
    scanf("%d", &n);

    // �I�s�~�ն��k�禡
    printf("���� %d �Ӷ�L���B�J�G\n", n);
    hanoi(n, 'A', 'C', 'B');  // A �O���W�AC �O�ؼЬW�AB �O���U�W

    return 0;
}

// ���k�禡�G�N n �Ӷ�L�q���W source ���ʨ�ؼЬW target�A���U�W�� auxiliary
void hanoi(int n, char source, char target, char auxiliary) {
    if (n == 1) {
        // �u���@�Ӷ�L�ɡA�����q���W���ʨ�ؼЬW
        printf("�N��L 1 �q %c ���ʨ� %c\n", source, target);
    }
    else {
        // �N n-1 �Ӷ�L�q���W���ʨ컲�U�W
        hanoi(n - 1, source, auxiliary, target);

        // �N�� n �Ӷ�L�q���W���ʨ�ؼЬW
        printf("�N��L %d �q %c ���ʨ� %c\n", n, source, target);

        // �N n-1 �Ӷ�L�q���U�W���ʨ�ؼЬW
        hanoi(n - 1, auxiliary, target, source);
    }
}