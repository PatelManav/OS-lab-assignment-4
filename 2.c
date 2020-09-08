#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int pid2;
int main()
{
    int pid1;
    pid1 = fork();
    
    if(pid1 == 0)
    {
        pid2 = getpid();
        printf("i am child my PID = %d and he is my parent with PID = %d\n",pid2,getppid());
        printf("---------------------------------------\n");
        printf("here is list of files and folders:\n");
        system("ls");
        printf("---------------------------------------\n");
    }
    else
    {
        sleep(2);
        printf("i am parent with PID = %d\n",getpid());
        printf("i am child with PID = %d\n",pid1);
    }
}
