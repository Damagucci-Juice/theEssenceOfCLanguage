#include <stdio.h>
#pragma warning(disable:4996)   // Use to remove warnings to use alternative functions.

int main(void) {
    float f;
    double d;
    
    printf("Input two float>");
    scanf("%f%lf", &f, &d);     // There may or may not be a gap between the two indicators.
    
    printf("The float you entered is %f.\n", f);
    printf("The float you entered is %f.\n", d);
    
    return 0;
}
