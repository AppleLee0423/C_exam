#include <stdio.h>

int main() {
    char a[8] = "Hello";

    printf("%s\n",a);
    // Hello

    printf("%s\n",a+1);
    // ello, a의 1번째 주소부터 NULL = a[5] 직전까지

    a[3] = NULL;

    printf("%s\n",a+1);
    // el, a의 1번째 주소부터 NULL 직전까지

    printf("%s\n",a+4);
    // o, a의 4번째 주소부터 NULL 직전까지

    return 0;
}
