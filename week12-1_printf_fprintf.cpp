#include <stdio.h>

int main()
{
    FILE * fout = fopen("file.txt", "w");

    printf("Hellow World\n");
    fprintf(fout, "Hello World\n");
}
