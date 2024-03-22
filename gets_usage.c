#include <stdio.h>
#include<string.h>
#define true 1
#define false 0

int matchUserName(char username[])
{
    if (strcmp(username, "c") == 0 || strcmp(username, "b") == 0 || strcmp(username, "a") == 0)
        return true;
    else
        return false;
}

int main()
{
    char username[5];
    int allowedToAccess = 0;
    printf("Enter your username: \t");
    gets(username);

    if(matchUserName(username))
        allowedToAccess = 1;
    if(allowedToAccess == 0)
        printf("access denied!");
    else
        printf("access permitted");


    return 0;
}