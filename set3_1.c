#include <stdio.h>
#include <string.h>

void originalList(char names[5][20], int n)
{
    int i;

    printf("\nOriginal List:");

    for (i = 0; i < n; i++)
        printf("\n%s", names[i]);
}

void rotateList(char names[5][20], int n, int k)
{
    int i, index = 0, iteration = 1;
    char rotate[5][20];

    for (i = n - k + 1; iteration < k; i++)
    {
        strcpy(rotate[index], names[i]);

        iteration++;
        index++;
    }

    for (i = 0; index < n; index++)
    {
        strcpy(rotate[index], names[i]);
        i++;
    }

    printf("\nRotated List (when k=%d):", k);

    for (i = 0; i < n; i++)
        printf("\n%s", rotate[i]);
}

int main()
{
    int n, i, k, choice;
    char names[5][20];

    printf("Enter total count:");
    scanf("%d", &n);

    printf("Enter names:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%s", names[i]);
    }

    printf("Enter k:");
    scanf("%d", &k);

    do
    {
        printf("\n\n===== MENU =====");
        printf("\n1. Display Original List");
        printf("\n2. Rotate List");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                originalList(names, n);
                break;

            case 2:
                rotateList(names, n, k);
                break;

            case 3:
                printf("\nExiting...");
                break;

            default:
                printf("\nInvalid choice!");
        }

    } while (choice != 3);

    return 0;
}
