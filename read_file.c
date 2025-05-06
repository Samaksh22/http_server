#include <stdio.h>

int main()
{
    FILE *pf = fopen("poem.txt", "r");

    char buffer[256];

    while(fgets(buffer, 255, pf) != NULL)
    {
        printf("%s", buffer);
    }

    fclose(pf);
    return 0;
}