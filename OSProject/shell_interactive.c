#include "shell.h"

void shell_interactive(void)
{
    char *line;
    char **args;
    int status = -1;

    do {
        printf("simple_prompt$ "); // Display the prompt
        line = read_line();        // Read input from stdin
        args = split_line(line);   // Tokenize the input
        status = execute_args(args); // Execute the command

        // Free allocated memory to avoid memory leaks
        free(line);
        free(args);

        // Exit with the returned status
        if (status >= 0)
        {
            exit(status);
        }
    } while (status == -1); // Continue until the user exits
}
