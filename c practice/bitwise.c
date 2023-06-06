#include<stdio.h>
int main()
{
    // &(2), |(3), ^(1), ~(-3), <<(2), >>(1)
    int a = 42, b = 43;
    printf("\nBitwise And is: %d", a&b);
    printf("\nBitwise Or is: %d", a|b);
    printf("\nBitwise XOR(exclusive or) is: %d", a^b);
    printf("\nBitwise compliment of %d is: %d", a, ~a);
    printf("\nBitwise left shift of %d is: %d", a, a<<1);
    printf("\nBitwise right shift of %d is: %d", a, a>>1);
    return 0;
}