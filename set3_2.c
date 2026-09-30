#include <stdio.h>
#include <string.h>
 int searchString(char list[ ][20], int n, char key [ ])
 {
     int pos=-1;

     for (int i=0;i<n;i++)
     {
         if (strncmp(list[i],key,strlen(key))==0)
         {
             return i+1;
         }
     }
     if (pos==-1)
       return -1;
 }

int main()
{
    int n;
   printf("Enter n:");
   scanf("%d",&n);
   char names[n][20];
   char keyword[20];
   printf("Enter names:");
   for (int i=0;i<n;i++)
    scanf("%s",names[i]);
    printf("Enter keyword:");
    scanf("%s",keyword);
    printf("%d", searchString(names,n,keyword));
}
