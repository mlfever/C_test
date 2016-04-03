#include <stdio.h>

typedef void* pptr;

int main()
{
    int a;
    void *p = &a;
    pptr p1 = &a;

    printf("a: %p\n", &a);
    printf("p + 1: %p\n", (void *)p + 1);
    printf("p1 + 1: %p\n", (int *)p1 + 1);
}
