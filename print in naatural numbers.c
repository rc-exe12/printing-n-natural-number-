#include<stdio.h>

void printNaturalNumbers(int);

int main() {
    int n ;
    printf("First  natural numbers:\n");
    scanf("%d",&n);
    printNaturalNumbers(n);
    return 0;
}
void printNaturalNumbers(int n)
{
    printf("First %d natural numbers:\n",n);
    for(int i = 1; i <= n; i++) {
        printf("%d\n", i);
    }
    printf("\n");
}
