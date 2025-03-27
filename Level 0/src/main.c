//gcc -m32 -o attachment main.c
#include "stdlib.h"
#include "unistd.h"
void main()
{
    system("/bin/sh");
    exit(0);
}
