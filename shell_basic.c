#ifndef SHELL_BASIC_C_INCLUDED
#define SHELL_BASIC_C_INCLUDED

void control
{
    char *linear;
    char **spliter;
    int luncher = 1;

    do {
            printf("> ");
            linear = line_reader();
            flag = 0;
            spliter = line_spliter(line);
            luncher = bash_luncher(spliter);
            free(linear);
            free(spliter);
    }while(luncher);
}


#endif // SHELL_BASIC_C_INCLUDED
