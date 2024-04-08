#include <iostream>

int main () {

    int num;

    printf("digite um numero:");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("o número digitado é par.\n");

    } else {
        printf("o número é ímpar.\n");
    }

return 0;
}