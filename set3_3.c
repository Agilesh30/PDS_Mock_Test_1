#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char a[15];
    printf("Enter Username:");
    fgets(a,15,stdin);
    if (!(isalpha(a[0])))
    {
        printf("Invalid username,because first character must be an alphabet");
        return 0;
    }
    for (int i=1;i<strlen(a);i++)
    {
         if (isalnum(a[i]) || a[i]=='_')
            continue;
        if (a[i]==' ')
        {
              printf("Invalid Username space not allowed");
              return 0;
        }
        printf("Invalid Username, because special character %c is not allowed",a[i]);
        break;

    }

}


