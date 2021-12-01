#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <iostream>
int main()
{
    FILE *file;
    char output[100000];
    file = _popen("tasklist", "r");
    fread(output, 1, sizeof(output), file);
    fclose(file);
    if (strstr(output, "chrome.exe"))
    {
        printf("chrome is running!\n");
    }
    else
    {
        printf("chrome is not running!\n");
    }
    return 0;
}