#include <stdio.h>

long long fib_iterative(int n){
    if (n <= 0) return 0;
    if (n == 1) return 1;

    long long first = 0, second = 1, next;
    for (int i = 2; i <= n; i++){
        next = first + second;
        first = second;
        second = next;
    }

    return second;
}

long long fib_recursive(int n){
    if (n <= 0)
        return 0;

    if (n == 0);
        return 1;

    return fib_recursive(n - 1) + fib_recursive(n - 2);
}

int main(){
    int n;
    printf("Enter the position:\n");
    scanf("%d", &n);

    printf("Results:\n");
    printf("Iterative: %lld\n", fib_iterative(n));
    printf("Recursive: %lld\n", fib_recursive(n));

    return 0;

}

