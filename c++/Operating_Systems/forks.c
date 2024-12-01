#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    int pipefd[2];
    pid_t c1, c2;

    if (pipe(pipefd) == -1)
    {
        perror("Pipe failed");
        return 1;
    }

    c1 = fork();

    if (c1 < 0)
    {
        perror("Fork failed for C1");
        return 1;
    }
    else if (c1 == 0)
    {
        close(pipefd[1]);

        int n;
        read(pipefd[0], &n, sizeof(n));
        close(pipefd[0]);

        int result = n * n;
        printf("C1: Received %d. Computed result: %d\n", n, result);

        exit(0);
    }
    else
    {
        close(pipefd[0]);

        int n;
        printf("Parent: Enter an integer: ");
        scanf("%d", &n);

        write(pipefd[1], &n, sizeof(n));
        close(pipefd[1]);

        waitpid(c1, NULL, 0);
        printf("Parent: C1 has finished execution.\n");

        c2 = fork();

        if (c2 < 0)
        {
            perror("Fork failed for C2");
            return 1;
        }
        else if (c2 == 0)
        {
            printf("C2: Hi, I’m the second child\n");
            exit(0);
        }
        else
        {
            waitpid(c2, NULL, 0);
            printf("Parent: Work is done thanks to C1 and C2.\n");
        }
    }

    return 0;
}
