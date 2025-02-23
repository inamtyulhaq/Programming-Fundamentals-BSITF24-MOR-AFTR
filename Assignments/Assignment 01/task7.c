// ah, flowcharts
// please, practice them on paper

// let's do the solution

// what's a prime number?
// which is divisible only by 1 and itself

// so what will we do?
// we will take number N
// we will start from 2 and go till the half of that number
// and see if any number exactly divides our N or not

#include <stdio.h> // ye wo code hai jo printf, scanf karayga
// hamari asani kelie, warna windows awein screen par kuch likhne nahi deta, it's strict

int main() // program always starts from main function
// leave now, what functions are
{
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            printf("its not a prime.");
            return 0; // it means that now program is over
        }
    }
    printf("you passed the test, its a prime.");
    return 0;
}