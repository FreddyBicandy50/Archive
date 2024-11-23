#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    pid_t pid = fork();

    if (pid < 0)
    {
        perror("Fork failed");
        exit(1);
    }
    else if (pid == 0)
    {
        printf("Child:\n");
        printf("myid = %d\n", getpid());
        printf("my parent's id = %d\n", getppid());
        printf("Child process is starting...\n");
        exit(0);
    }
    else
    {
        printf("Parent:\n");
        printf("myid = %d\n", getpid());
        printf("my child's id = %d\n", pid);
        printf("Parent process is executing!\n");
        wait(NULL);
        printf("Parent process finished\n");
    }
    return 0;
}
