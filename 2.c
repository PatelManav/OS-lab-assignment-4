#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//fork example
int pid2;
int main()
{
    int pid1;
    pid1 = fork();

    if (pid1 == 0)
    {
        pid2 = getpid();
        printf("I am Child my PID = %d and he is my Parent with PID = %d\n", pid2, getppid());
        printf("---------------------------------------\n");
        printf("Here is list of Files and Folders: \n");
        system("ls");
        printf("---------------------------------------\n");
    }
    else
    {
        sleep(2);
        printf("I am Parent with PID = %d\n", getpid());
        printf("I am Child with PID = %d\n", pid1);
    }
}
