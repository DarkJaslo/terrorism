#include <stdio.h>

// C is often referred to as a "high-level language", which has aged poorly, but holds true 
// if we compare it to assembly language. Or does it?
int main(int argc, char** argv)
{
begin:
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);

    int result = 0;
    int i = 1;
loop:
    if (i > n) goto endloop;
    result = result + i;
    i = i+1;
    goto loop;
endloop:
    printf("Result: %d\n", result);
}