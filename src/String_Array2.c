#include <stdio.h>

int main() {
    char a[2][8] = {"Hello", "Soojebi"};

    printf("%s\n",a[0]);
    // Hello, a[0] 첫번째 문자열 출력

    printf("%s\n",a[1]);
    // Soojebi, a[1] 두번째 문자열 출력

    printf("%s\n",a[1]+3);
    // jebi, a[1] 문자열의 세번째 자리부터 NULL 값까지 출력

    a[1][4] = NULL;

    printf("%s\n",a[1]+2);
    // oj, a[1] 문자열의 두번째 자리부터 NULL 값까지 출력

    return 0;
}
