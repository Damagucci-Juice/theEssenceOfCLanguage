#include <stdio.h>

int main(void) {
    
    int hex = 0xABCD;
    int mask = 0xF0F0;
    
    printf("hex=%X\n", hex);
    printf("%X\n", hex & mask);
    
    hex = hex >> 4;
    printf("%X\n", hex & mask);
    
    hex = hex >> 4;
    printf("%X\n", hex & mask);

    hex = hex >> 4;
    printf("%X\n", hex & mask);

    return 0;
    
}
