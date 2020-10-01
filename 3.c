#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define and &&
//sleep and fork example
int pid2;
int main()
{
    int pid1;
    pid1 = fork();

    if (pid1 != 0 and pid1 != -1)
    {
        sleep(2);
        printf("Child has become Zombie\n");
    }

    return 0;
}
