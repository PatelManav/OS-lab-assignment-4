#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

int pid2;
int main()
{
    int pid1;
    pid1 = fork();
   
    if(pid1 > 0)
    {
        sleep(2); 
    }
    if(pid1 == 0)
    {
        system("ps aux | grep 'Z' >> $fil.txt");
        printf("operation completed\n");
        exit(0);
    }
}
