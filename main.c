#include <stdio.h>
#include <stdbool.h>

#define MAXNUM 100

int main()
{
    int primeNums[MAXNUM + 1] = {2, 3};
    int allNums[MAXNUM + 1] = {};

    // add all 100 nums into the array
    for (unsigned long i = 0; i <= MAXNUM; i++)
    {
        allNums[i] += i;
    }

    // calculating which ones are prime and adding them to the prime array
    int k = 2;

    for (unsigned long i = 4; i <= MAXNUM; i++)
    {

        //is divisible by more than 2 nums?
        int divideableNums = 0;
        for (unsigned long long j = 1; j <= allNums[i]; j++)
        {
            if (allNums[i] % j == 0)
            {
                divideableNums++;
            }
        }

        //adding to the prime array
        if (divideableNums == 2)
        {
            primeNums[k] = allNums[i];
            k++;
        }
    }

    for (unsigned long i = 0; i <= MAXNUM; i++)
    {
        if (primeNums[i] != 0)
        {
            printf("prime number is: %i \n", primeNums[i]);
        }
    }

    return 0;
}