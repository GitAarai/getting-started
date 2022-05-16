#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char *token;
char Arr[30] = "My Name is Ravi";

token = strtok(Arr, ",");
while (token != NULL)
{
    printf("%s\n", token);
    token = strtok(NULL, ",")
}

return 0;
}