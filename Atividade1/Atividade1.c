#include <stdio.h>

int main(void) {
    
    int a, b, c;
    
    printf("Entre 1 a 10, qual tabuada você quer conferir?: ");
    scanf("%d", &a);
    for(b = 1; b <= 10; b++) {
        c = a * b;
    printf("\n %d x %3d = %3d", a,b,c);
    }

    return 0;
}