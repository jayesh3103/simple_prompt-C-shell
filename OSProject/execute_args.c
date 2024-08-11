#include "shell.h"

int execute_args(char **args)
{
    char *builtin_func_list[] = {
        "cd",
        "env",
        "help",
        "exit"
    };
    int (*builtin_func[])(char **) = {
        &own_cd,
        &own_env,
        &own_help,
        &own_exit
    };
    int i = 0;

    if (args[0] == NULL)
    {
        // Empty command was entered
        return -1;
    }

    // Find if the command is a builtin
    for (; i < sizeof(builtin_func_list) / sizeof(char *); i++)
    {
        // If there is a match, execute the builtin command
        if (strcmp(args[0], builtin_func_list[i]) == 0)
        {
            return ((*builtin_func[i])(args));
        }
    }

    // Create a new process for non-built-in commands
    return new_process(args);
}
