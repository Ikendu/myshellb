#include "main.h"

int main(int ac, char **av)
{
	(void) ac;
	(void) av;
	char *buff = NULL;
	ssize_t line;
	size_t n;

	while(1)
	{
		printf("ikendu > ");
		line = getline(&buff, &n, stdin);
		
		if (line == -1)
		{
			printf("Exiting...");
			return (-1);
		}

		printf("%s", buff);
		
	}
	return (0);
}
