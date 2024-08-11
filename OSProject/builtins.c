#include "shell.h"

int own_cd(char **args)
{
    if (args[1] == NULL)
    {
        fprintf(stderr, "expected argument to \"cd\"\n");
    }
    else
    {
        if (chdir(args[1]) != 0)
        {
            perror("error");
        }
    }
    return -1;
}

int own_exit(char **args)
{
    return atoi(args[1]) == 0 ? 0 : atoi(args[1]);
}

int own_env(char **args)
{
    char **env = environ;
    while (*env)
    {
        printf("%s\n", *env++);
    }
    return -1;
}

int own_help(char **args)
{
    printf("Shell Help\n");
    printf("Built-in commands:\n");
    printf("  cd\n  env\n  help\n  exit\n");
    return -1;
}
