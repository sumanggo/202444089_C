#include <stdio.h>
#include <stdlib.h>

int main (void) {

    system("title 정수 2개 입력받아 사칙연산");
    
    int num1, num2, hap, sub, mul, div;

    printf("1. 첫번째 정수 입력 : ");
    scanf_s("%d",&num1);

    printf("2. 두번째 정수 입력 : ");
    scanf_s("%d",&num2);

    hap = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;

    printf("덧셈 결과 : %d + %d = %d \n", num1, num2, hap);
    printf("뺄셈 결과 : %d - %d = %d \n", num1, num2, sub);
    printf("곱셈 결과 : %d * %d = %d \n", num1, num2, mul);
    printf("나눗셈 결과 : %d / %d = %f \n", num1, num2, (float)div);

    return 0;

}