#include <stdio.h>

int fun(int x){
    if(x==0){
        return 0;
    }

    int sum = x + fun(x-1);

    return sum;

}

// 1+2+3+4 = 10 
// 4+3+2+1+0 = 10

int main(){
    int n;
    scanf("%d", &n);
    
    
    int ans = fun(n);
    printf("%d\n",ans);

    return 0;
}