#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int ac, char **av)
{
	(void) ac;
	int i = 0;

	printf("The process id is %d\nThe parent process id is %d\n", getpid(), getppid());
	printf("The arguments are %d in number\n", ac); 
	printf("The first argument is %s\n", av[0]);

	//for(i = 0; i < ac; i++)
	while(av[i])
	{
		printf("Argument %d is %s\n", i, av[i]);
		i++;
	}

	return (0);
}
