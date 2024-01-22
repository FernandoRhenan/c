#include <windows.h>
#include <stdio.h>

void f2(char p[])
{
    printf("Printf from f2 %d\n", &p);
    printf("Printf from f2 %s\n", p);
}

void f1(char p[])
{
    printf("Printf from f1 %d\n", &p);
    f2(p);
}

int main()
{
    char p[] = "helloworld";
    printf("Printf from main %d\n", &p);
    f1(p);
    return 0;
}