#include <stdio.h>

int main(void) {
    
    int mul;
    int i;
    
    printf("입력 : ");
    scanf("%d" , &mul);
    
    printf("원하는 단을 입력하세요. \n");

    


    for (i = 1; i <= 9; i++)
    {
        int result = mul*i;
        printf("%d * %d = %d \n",mul, i, result);
    }
        
     
}