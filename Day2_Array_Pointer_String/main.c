#include <stdio.h>
 
int main()
{
 
    //Sử dụng con trỏ;
    char *myString = "Pham Van Du";
    const char *myString1 = "Pham Van Du";
	myString1 = "PhamVanDu1234567890";
    printf("%s\n", myString);
    printf("%s\n", myString1);

    
    return 0;
}