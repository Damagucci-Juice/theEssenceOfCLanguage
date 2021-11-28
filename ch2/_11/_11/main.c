#include <stdio.h>
#include <limits.h>     // Include to use SHRT_MIN, USHRT_MAX etc

#define USHRT_MIN 0

int main(void){
    printf("SHRT_MIN    : %hd\n",   SHRT_MIN);
    printf("SHRT_MIN-1  : %hd\n",   SHRT_MIN-1);
    printf("SHRT_MAX    : %hd\n",   SHRT_MAX);
    printf("SHRT_MAX+1  : %hd\n\n", SHRT_MAX+1);

    printf("USHRT_MIN   : %hu\n", USHRT_MIN);
    printf("USHRT_MIN-1 : %hu\n", USHRT_MIN-1);
    printf("USHRT_MAX   : %hu\n", USHRT_MAX);
    printf("USHRT_MAX+1 : %hu\n", USHRT_MAX+1);
    
    return 0;
}
