#include <stdio.h>
#include <stdlib.h>

int main()
{
    int req[20], n, head, original, size;
    int i, j, movement = 0;
    char direction;

    printf("Enter number of requests: ");
    scanf("%d", &n);

    printf("Enter request sequence: ");
    for(i = 0; i < n; i++)
        scanf("%d", &req[i]);

    printf("Enter initial head position: ");
    scanf("%d", &head);

    printf("Enter disk size: ");
    scanf("%d", &size);

    printf("Enter direction (L/R): ");
    scanf(" %c", &direction);

    original = head;

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(req[i] > req[j])
            {
                int temp = req[i];
                req[i] = req[j];
                req[j] = temp;
            }
        }
    }

    printf("\nDisk Head Movement:\n");
    printf("%d", head);

    if(direction == 'R' || direction == 'r')
    {
        for(i = 0; i < n; i++)
        {
            if(req[i] >= original)
            {
                movement += abs(head - req[i]);
                head = req[i];
                printf(" -> %d", head);
            }
        }

        movement += abs(head - (size - 1));
        head = size - 1;
        printf(" -> %d", head);

        movement += head;
        head = 0;
        printf(" -> %d", head);

        for(i = 0; i < n; i++)
        {
            if(req[i] < original)
            {
                movement += abs(head - req[i]);
                head = req[i];
                printf(" -> %d", head);
            }
        }
    }
    else
    {
        for(i = n - 1; i >= 0; i--)
        {
            if(req[i] <= original)
            {
                movement += abs(head - req[i]);
                head = req[i];
                printf(" -> %d", head);
            }
        }

        movement += head;
        head = 0;
        printf(" -> %d", head);

        movement += size - 1;
        head = size - 1;
        printf(" -> %d", head);

        for(i = n - 1; i >= 0; i--)
        {
            if(req[i] > original)
            {
                movement += abs(head - req[i]);
                head = req[i];
                printf(" -> %d", head);
            }
        }
    }

    printf("\n\nTotal Head Movement = %d\n", movement);

    return 0;
}
