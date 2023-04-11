#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    double a;
    a = sqrt(5.1);
    printf("%.2f\n",a);
    // 2.26, 5.1의 양의 제곱근을 구하면

    int b;
    int i;

    srand(time(NULL));
    // 현재 시간으로 난수 생성

    for(i=0; i<6; i++){
        b = rand()%45+1;
        // 1~45까지 랜덤 난수
        printf("%d ", b);
    }

    return 0;
}
