#include <stdio.h>
#include <string.h>

void reversePrint(const char *str)
{
    if (str)
    {
        reversePrint(strtok (NULL, " \t\n\r"));
        printf("%s ", str);
    }
}

int main(void)
{
    char string[] = "This is a sentence";
    reversePrint(strtok(string, " \t\n\r"));
    return 0;
}
