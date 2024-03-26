#include <stdio.h>

int main (void) {

    for (int i = 5; ; i--)
    {
        if (i == 1) 
        {
            break;
        }
        printf("*");
    }
}
