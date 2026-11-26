#include <stdio.h>

int main()
{
    int blocks[20], n, i;

    printf("Enter number of blocks: ");
    scanf("%d", &n);

    printf("Enter block numbers: ");
    for(i = 0; i < n; i++)
        scanf("%d", &blocks[i]);

    printf("\nLinked File Allocation\n");

    printf("Start Block = %d\n", blocks[0]);
    printf("End Block = %d\n", blocks[n - 1]);

    printf("\nBlock\tNext Block\n");

    for(i = 0; i < n; i++)
    {
        if(i == n - 1)
            printf("%d\tNULL\n", blocks[i]);
        else
            printf("%d\t%d\n", blocks[i], blocks[i + 1]);
    }

    printf("\nFile allocated successfully.\n");

    return 0;
}
