#include <stdio.h>
unsigned long long fact(int n, int i)
{
    unsigned long long result = 1;
    for (i; i <= n; ++i){
        result *= i;
    }
    return result;
}
int main()
{
    int k, i;
    scanf("%i%i", &k, &i);
    printf("%llu\n", fact(k, k-i+1));
}