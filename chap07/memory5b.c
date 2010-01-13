#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    char z = *(const char *) 0;
    
    printf("A read from location zero\n");
    exit(EXIT_SUCCESS);
}

