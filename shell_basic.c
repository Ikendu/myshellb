#include <stdio.h>

char *line_reader()
{
	int position = 0;
	int buffersize = 1024;
	char buff = malloc(sizeof(char) * buffersize);
	int c;
	while(!buff)
	{
		fprintf(stderr, "%sdash : Alocation error%s\n", RED, RESET);
		exit(EXIT_FAILURE);
	}
}

void control()
{
    char *linear;
    char **spliter;
    int determin = 1;

    do {
            printf("> ");
            linear = line_reader();
            flag = 0;
            spliter = line_spliter(line);
            determin = bash_luncher(spliter);
            free(linear);
            free(determin);
    }while(luncher);
}

int main()
{
    control();
}

