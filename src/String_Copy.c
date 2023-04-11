#include <stdio.h>

int main() {
    char a[20] = "Hello";
    char b[10] = "Soojebi";
    char c[20] = "Hello";

    strcpy(a,b);
    // b의 문자열을 a에 복사
    printf("%s %s\n", a,b);
    // Soojebi Soojebi

    strncpy(c,b,3);
    // b의 문자열을 c에 복사하는데 b의 3번째까지만 복사
    printf("%s %s\n", c,b);
    // Soolo Soojebi

    return 0;
}
