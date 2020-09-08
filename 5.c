#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
    printf("Enter the name of the file: ");
    char c[98];
    char c1[BUFSIZ];
    scanf("%s",c);
    printf("------------------------------------------\n\n");
    snprintf(c1,sizeof(c1),"ls -lu %s",c);
    system(c1);
    printf("\n------------------------------------------\n\n");
}
