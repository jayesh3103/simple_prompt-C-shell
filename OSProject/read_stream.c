#include "shell.h"

char *read_stream(void)
{
    int bufsize = 1024;
    int i = 0;
    char *line = malloc(sizeof(char) * bufsize);
    int character;

    if (line == NULL)
    {
        fprintf(stderr, "Allocation error in read_stream");
        exit(EXIT_FAILURE);
    }

    while (1)
    {
        character = getchar(); // Read the first character from the stream
        if (character == EOF)
        {
            free(line);
            exit(EXIT_SUCCESS); // Exit on EOF
        }
        else if (character == '\n')
        {
            line[i] = '\0';
            return line; // Return the line when newline is reached
        }
        else
        {
            line[i] = character;
        }
        i++;

        if (i >= bufsize)
        {
            bufsize += bufsize;
            line = realloc(line, bufsize);
            if (line == NULL)
            {
                fprintf(stderr, "Reallocation error in read_stream");
                exit(EXIT_FAILURE);
            }
        }
    }
}