#include "main.h"

/**
 * execmd - execute commands for the simple shell
 */

void execmd(char **av)
{
	char *command = NULL, *actual_command;

	
	if(av)
		{
			command = av[0];

			actual_command = getlocation(command);  
			
			int exe = execve(actual_command, av, NULL);

			if (exe == -1)
			{
				perror("Execution error ocured");
			}
		}
}		
