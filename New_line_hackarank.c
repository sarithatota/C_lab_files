#include <math.h>
#include <stdlib.h>
//CODED BY SARITHA
int main() {

    char *s;
    int i;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
        printf("\n");
        }
        else
        {
            printf("%c",s[i]);
        }
    }
    printf("ROLL NUMBER 24B11CS450");
    return 0;
}

