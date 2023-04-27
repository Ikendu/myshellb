#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
	int a = 60;

	printf("my current PID is %d\n", getpid());


	printf("%d\n", a);

	printf("my parent PID is %d\n my current PID is %d\n", getppid(), getpid());
        printf("Im done printing\n");

	return (0);
}



