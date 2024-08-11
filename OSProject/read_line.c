#include "shell.h"

char *read_line(void)
{
    char *line = NULL;
    size_t bufsize = 0;

    if (getline(&line, &bufsize, stdin) == -1)
    {
        if (feof(stdin))
        {
            free(line); // Free memory when EOF is reached
            exit(EXIT_SUCCESS); // Exit on EOF
        }
        else
        {
            free(line); // Free memory on error
            perror("Error while reading the line from stdin");
            exit(EXIT_FAILURE);
        }
    }
    return line;
}