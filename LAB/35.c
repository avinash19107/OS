#include <stdio.h>

int main()
{
    int indexBlock, n, blocks[20], i;

    printf("Enter index block: ");
    scanf("%d", &indexBlock);

    printf("Enter number of file blocks: ");
    scanf("%d", &n);

    printf("Enter file block numbers: ");
    for(i = 0; i < n; i++)
        scanf("%d", &blocks[i]);

    printf("\nIndexed File Allocation\n");
    printf("Index Block = %d\n", indexBlock);

    printf("\nIndex\tFile Block\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%d\n", i, blocks[i]);
    }

    printf("\nFile allocated successfully.\n");

    return 0;
}
