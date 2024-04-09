#include <stdio.h>

int main(void) {
    
    for(int i = 0; i < 3; i++) 
    {
        for(int q = 0; q <= i; q++) 
        {
            printf("*");
        }
        printf("\n");
    }
}
/*
다음 중 위 코드의 실행결과로 옳은 것은?
1. ***
   ***
   ***

2. *
   **
   ***

3. ***
   **
   *
   
4.    *
     ***
    *****
*/