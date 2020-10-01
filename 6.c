#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    FILE *f1 = fopen("/proc/cpuinfo", "rb");
    char *c;

    size_t s = 0;
    while (getdelim(&c, &s, 0, f1) != -1)
        puts(c);

    free(c);
    fclose(f1);
}
