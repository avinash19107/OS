# OS Program

This repository contains a simple C program that demonstrates process creation using `fork()`.

```c
#include <stdio.h>
#include <unistd.h>

int main()
{
    int pid;

    pid = fork();

    if (pid < 0)
    {
        printf("Process creation failed\n");
    }
    else if (pid == 0)
    {
        printf("Child Process\n");
        printf("Child PID: %d\n", getpid());
        printf("Parent PID: %d\n", getppid());
    }
    else
    {
        printf("Parent Process\n");
        printf("Parent PID: %d\n", getpid());
        printf("Child PID: %d\n", pid);
    }

    return 0;
}
```

## Output Screenshot

Place your screenshot in this repository as `screenshot.png` and it will appear below:

![Process output screenshot](screenshot.png)
