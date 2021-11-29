#include <stdio.h>

int main(void) {
    int i;
    char ch;
    short s;
    unsigned short us;
    
    i = 10;
    ch = (int)i;
    printf("i=%d --> ch=%d\n", i, ch);
    
    i = 300;
    ch = (int)i;
    printf("i=%d --> ch=%d\n", i, ch);
    
    ch = 10;
    i = (int)ch;
    printf("i=%d --> ch=%d\n", i, ch);
    
    ch = -2;
    i = (int)ch;
    printf("i=%d --> ch=%d\n", i, ch);
    
    s = 32767;
    us = (unsigned short)s;
    printf("s=%d --> us=%d\n", s, us);

    us = 32767;
    s = (short)s;
    printf("us=%d --> s=%d\n", us, s);
    
    s = -1;
    us = (unsigned short)s;
    printf("s=%d --> us=%d\n", s, us);
    
    us = 65535;
    s = (short)s;
    printf("us=%d --> s=%d\n", us, s);
    
    printf("s =%hx\n", s);  // Print 's' by hexa of 2bytes.
    printf("us =%hx\n", us);
    return 0;
}
