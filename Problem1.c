#include <stdio.h>

int funSum(int x, int y){ // function with parameter with return 
    
    int ans = x + y;
    return ans;
}

int funSum2(){ //function  with return but no parameter
    int g=100;
    // scanf("%d", &g);
    return g;
}

void funSum3(int t, int u) // function with parameter but no return 
{
    printf("Inside the funsum3 function: %d %d\n",t, u);
}


void funSum4(){ // function with no parameter and no return
    int a, b;
    scanf("%d %d", &a, &b);

    printf("Sub of a , b : %d\n",a-b);
}

int main(){
    // int a=10, b=20;

    // int sum = funSum(a, b);// a, b, argument
    // int sub = a-b;

    // printf("%d\n",sum);


    // int c=5, d=20;

    // int sum2 = funSum(c, d);
    // int sub2 = c-d;

    //  printf("%d\n",sum2);


    // int ans2 = funSum2();// no argument;
    // printf("Ans2 : %d\n",ans2);

    //funSum3(100, 200); // argument nibe

    funSum4(); // no argument 

    return 0;
}