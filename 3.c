#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int pid2;
int main()
{
    int pid1;
    pid1 = fork();
   
    if(pid1 != 0 && pid1 != -1)
    {
        sleep(2);  
        printf("child has become zombie\n");      
    }
    else
    {
        return 0;
    }
}
