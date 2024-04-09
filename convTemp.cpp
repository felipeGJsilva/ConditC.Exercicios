#include <iostream>

int main () {

    int temp;

    printf("digite uma temperatura em Celsius ou Fahrenheit:");
    scanf("%d", &temp);

    char temp2;

    printf(" Escolha a converção: \n f ou c \n");
    scanf("%s", &temp2);

    float f = (temp * 1.8) + 32;
    float c = (temp - 32) / 1.8;
    
    if( temp2 == 'f'){
        printf("%f \n", f);
    }
    else if( temp2 == 'c'){
        printf("%f \n", c);
    }

return 0;
}