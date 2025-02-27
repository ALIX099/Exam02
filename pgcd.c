#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) 
{
	return b ? gcd(b , a % b) :a;
}

int main(int ac, char **av) 
{
    if (ac == 3)
        printf("%d\n", gcd(atoi(av[1]), atoi(av[2])));
    else
        printf("\n");
}

