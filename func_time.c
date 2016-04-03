#include <stdio.h>
#include <time.h>

int test(int a, int b)
{
    if (a == b)
    {
        a = b;
    }
    else
    {
        a = 0;
    }

    return 0;
}



int main()
{
    int ma, mb;
    int i;
    int max = 1000000;
    clock_t start, end;
    double durat;
    start = clock();

    for (i = 0; i < max; i++)
    {
    if (ma == mb)
    {
        ma = mb;
    }
    else
    {
        ma = 0;
    }

    }
    end = clock();
    
    durat = (double)(end - start)/CLOCKS_PER_SEC;
    printf("for time: %f\n", durat);

    start = clock();
    for (i = 0; i < max; i++)
    {
        test(ma, mb);
    }

    end = clock();
    
    durat = (double)(end - start)/CLOCKS_PER_SEC;
    printf("func time: %f\n", durat);
}

