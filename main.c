#include "main.h"
int main(int ac, char **av)
{
	(void)ac;
	char *buff = NULL;
	ssize_t line;
	size_t n;
	char *buff2;
	char *token;
	int num = 0;
	int i;


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

		buff2 = malloc(sizeof(char) * line);
		if(buff2 == NULL)
		{
			perror("Allocation failed");
			return (-1);
		}
		strcpy(buff2, buff);

		token = strtok(buff2, " \n");
		while (token !=NULL)
		{
			num++;
			token = strtok(NULL, " \n");
		}
		num++;

		av = malloc(sizeof(char*) * num);

		token = strtok(buff, " \n");
		for (i = 0; token != NULL; i++)
		{
			av[i] = malloc(sizeof(char) * strlen(token));
			strcpy(av[i], token);

			token = strtok(NULL, " \n");
		}
		av[i] = NULL;


	}

	return (0);
}

