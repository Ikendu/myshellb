#include "main.h"

void execmd(char **av)
{
	char *command = NULL;

	while (1)
	{
		if(av)
		{
			command = av[0];
			int exe = execve(command, av, NULL);
			if (exe == -1)
			{
				perror("Execution error ocured");
			}
		}
	}
}
