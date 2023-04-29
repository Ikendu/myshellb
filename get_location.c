#include "main.h"

char *getlocation(char *command)
{
	char *path, *path_dup, *token, *file_path;
	int command_len, directory_len; 
	struct stat buffer;

	path = getenv("PATH");

	if(path)
	{
		path_dup = strdup(path);

		command_len = strlen(command);
	
		token = strtok(path_dup, ":");
		while (token)
		{
			directory_len = strlen(token);
			
			file_path = malloc(directory_len + command_len + 2);
			strcpy(file_path, token);
			strcat(file_path, "/");
			strcat(file_path, command);
			strcat(file_path, "\0");

			int st = stat(file_path, &buffer);
			if (st == 0)
			{
				free(path_dup);
				return(file_path);
			}
			else
			{
				free(file_path);
				token = strtok(path, ":");
			}
		}
		free(path_dup);
		int st1 = stat(file_path, &buffer);
		if (st1 == 0)
		{
			return(command);
		}

		return (NULL);
	}
	return (NULL);
}
