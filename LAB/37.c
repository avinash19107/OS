#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, head, requests[20], i, movement = 0;

    printf("Enter number of requests: ");
    scanf("%d", &n);

    printf("Enter request sequence: ");
    for(i = 0; i < n; i++)
        scanf("%d", &requests[i]);

    printf("Enter initial head position: ");
    scanf("%d", &head);

    printf("\nDisk Head Movement:\n");
    printf("%d", head);

    for(i = 0; i < n; i++)
    {
        movement += abs(head - requests[i]);
        head = requests[i];

        printf(" -> %d", head);
    }

    printf("\n\nTotal Head Movement = %d\n", movement);

    return 0;
}
