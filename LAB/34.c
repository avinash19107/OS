#include <stdio.h>

int main()
{
    int start, length, i;

    printf("Enter starting block: ");
    scanf("%d", &start);

    printf("Enter file length: ");
    scanf("%d", &length);

    printf("\nSequential File Allocation\n");
    printf("File\tBlock\n");

    for(i = 0; i < length; i++)
    {
        printf("%d\t%d\n", i + 1, start + i);
    }

    printf("\nFile allocated successfully.\n");

    return 0;
}
