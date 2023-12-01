#include <stdio.h>


int main(){
    int a = 100;

    printf("Address of a variable: %p\n",&a);
    printf("Value of a : %d\n",a);

    int *ptr =  &a;
    printf("In pointer stored address: %p\n",ptr);
    printf("In pointer stored address variable value: %d\n",*ptr);

    *ptr = 200;
    printf("In pointer stored address variable value after update: %d\n",*ptr);
    printf("Value of a variable: %d\n",a);
    return 0;
}