#include <stdio.h>

int One_dimention_Pointer(){
    int a[3] = {1,2};
    // int a[3] = {1,2,0(=NULL)};
    int *p = a;

    printf("%d %d %d\n", a[0],a[1],a[2]);
    // a의 0,1,2 인덱스의 값들

    printf("%d %d %d\n", *a,*(a+1),*(a+2));
    // a = &a[0], *a = *(&a[0]), *와 &이 상쇄되어 a[0]

    printf("%d %d %d\n", *p,*(p+1),*(p+2));
    // *p = a배열의 주소값과 동일

    printf("%d %d %d\n", p[0],p[1],p[2]);

   return 0;
}

int Two_Dimension_Pointer(){
    int a[3][2] = {{1,2},{3,4},{5,6}};
    int *p = a[1];

    printf("%d %d %d\n", *a[0],*a[1],*a[2]);
    // 1,3,5
    printf("%d %d %d\n", **a,**(a+1),**(a+2));
    // 1,3,5, a=&a[0] -> *(a[0]), a[0]=&a[0][0]
    printf("%d %d\n",*p,*(p+1));
    // 3,4, p = a[1], *(a[1]) = a[1][0], *(p+1) = *(a[1]+1) = a[1][1]
    printf("%d %d\n",p[0],p[1]);
    // 3,4, (a[1])[0] = a[1][0]

   return 0;
}
