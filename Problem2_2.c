// call by value
// #include <stdio.h>

// void fun(int x){ // x=100;
//     x=200;
//     printf("Inside the fun function x: %d\n", x);
// }

// int main(){
//     int a=100;

//     fun(a); // argument hisabe a pataychen

//     printf("Inside main funciton a: %d\n",a);

//     return 0;
// }


// call by reference
#include <stdio.h>

void  fun(int *x){ // x=0x7ffee41437c4;
    printf("Inside the fun function x pointer stored address: %p\n", x);
    printf("Inside the fun function x pointer stored variable address er value: %d\n", *x);
    *x=500;
    printf("Inside updated value: %d\n", *x);
    
}

int main(){
    int a=100;

    printf("a variable address: %p\n",&a);
    printf("Before fun function called Inside main funciton a: %d\n",a);
    fun(&a); // argument hisabe a pataychen

     printf("Inside main funciton a: %d\n",a);
    

    return 0;
}