#include <stdio.h>
#include <string.h>     // strcmp()를 사용하기 위해 추가

int main(void) {
    char str[]="abc";       //place "abc" to str array.
    
    printf("\"abc\"==\"abc\" ? %d\n", "abc"=="abc");
    printf("  str==\"abc\" ? %d\n", str=="abc");
    printf("strcmp(str, \"abc\") ? %d\n", strcmp(str, "abc"));
    printf("strcmp(str, \"abb\") ? %d\n", strcmp(str, "abb"));
    printf("strcmp(str, \"abd\") ? %d\n", strcmp(str, "abd"));

    return 0;
}
