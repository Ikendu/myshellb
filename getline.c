#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *buff = NULL;
	size_t n = 10;

	char **tokens = NULL;
	int i;

	buff = malloc(sizeof(char) * n);
	if (buff == NULL)
	{
		printf("The allocation failed\n");
		return (0);
	}

	printf("younglife > ");
	getline(&buff, &n, stdin);
	
	printf("The number of character is %ld\n", n--);
	printf("the value: %s", buff);
	

	tokens[i] = strtok(buff, " ");
	while (tokens[i])
	{
		++i;
		tokens[i] = strtok(buff, " ");
	}
	i = 0;

	while (tokens[i])
	{
		printf("%s\n", tokens[i]);
		i++;
	}

	return (0);
}
