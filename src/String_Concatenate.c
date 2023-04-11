#include <stdio.h>

int main() {
    char a[20] = "Hello";
    char b[10] = "Soojebi";
    char c[20] = "Hello";

    strcat(a,b);
    // a의 뒤에 b를 붙여라
    printf("%s %s\n", a,b);
    // HelloSoojebi Soojebi

    strncat(c,b,3);
    //c의 뒤에 b를 붙이는 데 b의 3번째까지만 붙여라
    printf("%s %s\n", c,b);
    // HelloSoo Soojebi

    return 0;
}
