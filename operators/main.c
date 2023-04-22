#include <stdio.h>

int main(void) 
{
	int i = 0;
	int j = 0;
	int k = 0;
	
    /***************** Aritmetik Operatörler *********************/
    printf("10 + 3 = %d \n", (10+3));
    printf("10 - 3 = %d \n", (10-3));
    printf("10 * 3 = %d \n", (10*3));
    printf("10 / 3 = %d \n", (10/3));
    printf("10 % 3 = %d \n", (10%3));


    /***************** Arttırma / Azaltma Operatörleri *********************/
	/***** Post-Increment (++) *****/
	k = j + (i++);				// k = 0 + 0
	// şimdi i = 1 oldu
	printf("k : %d \n", k);		//k : 0
	k = j + i;
	printf("k : %d \n", k);		//k : 1
	
	/***** Post-Decrement (--) *****/
	k = j + (i--);				// k = 0 + 1
	// şimdi i = 0 oldu
	printf("k : %d \n", k);		//k : 1
	k = j + i;
	printf("k : %d \n", k);		//k : 0
	
	/***** Pre-Increment (++) *****/
	k = j + (++i);				// k = 0 + 1
	printf("k : %d \n", k);		// k : 1
	
	/***** Pre-Decrement (--) *****/
	k = j + (--i);				// k = 0 + 0
	printf("k : %d \n", k);		// k : 0
	

    /***************** Karşılaştırma Operatörler *********************/
    int x = 10;
    int y = 5;
    
    printf("x > y : %d \n", (x > y));
    printf("x < y : %d \n", (x < y));
    printf("x == y : %d \n", (x == y));
    printf("x != y : %d \n", (x != y));


    /***************** Mantıksal Operatörler *********************/
    int sayi1 = 10;
    int sayi2 = 5;
    
    printf("sonuc : %d \n", (sayi1 > 1) && (sayi2 < 1));    // false
    printf("sonuc : %d \n", (sayi1 > 1) || (sayi2 < 1));    // true
    printf("sonuc : %d \n", !(sayi1 > 1));                  // false



	return 0;
}
