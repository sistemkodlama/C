#include <stdio.h>

int main()
{
    int x = 10;
    printf("x : %p \n", &x);    // x adresini bas 

    char ch = 'a';
    //int* y =  &ch;     // int* = char*   , uyuşmayan tiplerin ataması, Warning!

    int* p_x = &x;      // int* = int* , OK
    printf("x adres değeri : %p \n", p_x);
    printf("x 'in değeri   : %d \n", *p_x);
    printf("p_x adresinde tutulan integer değeri : %d \n", *p_x);


    return 0;
}
