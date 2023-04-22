#include <stdio.h>

int main() 
{
    printf("short               : %lu byte \n", sizeof(short));
    printf("int                 : %lu byte \n", sizeof(int));
    printf("long                : %lu byte \n", sizeof(long));
    printf("long long           : %lu byte \n", sizeof(long long));
    printf("unsigned int        : %lu byte \n", sizeof(unsigned int));
    printf("unsigned long       : %lu byte \n", sizeof(unsigned long));
    printf("unsigned long long  : %lu byte \n", sizeof(unsigned long long));
    printf("float               : %lu byte \n", sizeof(float));
    printf("double              : %lu byte \n", sizeof(double));
    printf("char                : %lu byte \n", sizeof(char));


    return 0;
}
