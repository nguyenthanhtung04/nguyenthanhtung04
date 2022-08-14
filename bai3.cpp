#include <stdio.h>
int main(){
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    int Fibonacci(int n){
    printf("So Fibonacci thu %d la: %d", n, Fibonacci(n));
        return 1;
    int a1 = 1, a2 = 1;
    if (n == 1 || n == 2)
    int i = 3, a;
    while (i <= n){
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        i++;
    }
        return a;
    }
}
