#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int pid1, pid2;
    pid1 = fork();
    if (pid1 == 0)
        printf("i am child\n");
    else
    {
        sleep(2);
        printf("i am parent\n");
    }
}
