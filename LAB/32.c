#include <stdio.h>

int main()
{
    int pages[20], frames[10], time[10];
    int n, f, i, j, faults = 0, hit, counter = 0;

    printf("Enter number of pages: ");
    scanf("%d", &n);

    printf("Enter page reference string: ");
    for(i = 0; i < n; i++)
        scanf("%d", &pages[i]);

    printf("Enter number of frames: ");
    scanf("%d", &f);

    for(i = 0; i < f; i++)
    {
        frames[i] = -1;
        time[i] = 0;
    }

    printf("\nPage\tFrames\t\tStatus\n");

    for(i = 0; i < n; i++)
    {
        hit = 0;
        counter++;

        for(j = 0; j < f; j++)
        {
            if(frames[j] == pages[i])
            {
                hit = 1;
                time[j] = counter;
                break;
            }
        }

        if(!hit)
        {
            int pos = 0;

            for(j = 0; j < f; j++)
            {
                if(frames[j] == -1)
                {
                    pos = j;
                    break;
                }

                if(time[j] < time[pos])
                    pos = j;
            }

            frames[pos] = pages[i];
            time[pos] = counter;
            faults++;
        }

        printf("%d\t", pages[i]);

        for(j = 0; j < f; j++)
        {
            if(frames[j] == -1)
                printf("- ");
            else
                printf("%d ", frames[j]);
        }

        printf("\t%s\n", hit ? "Hit" : "Fault");
    }

    printf("\nTotal Page Faults = %d\n", faults);
    printf("Total Page Hits = %d\n", n - faults);

    return 0;
}
