#include <stdio.h>
#include <ctype.h>

int main() {
    char upper;
    printf("輸入一個字元 : ");
    scanf(" %c", &upper);
    printf("%c\n", tolower(upper));
    return 0;
}
