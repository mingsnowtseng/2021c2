#include <stdio.h>
int main()
{
    FILE * f = fopen("ÀÉ®×¿é¥X.txt","w+");
    fprintf(f, "Hello\n");

    printf("Hello World\n");
}
