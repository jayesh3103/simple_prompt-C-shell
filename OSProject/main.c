#include "shell.h"

int main(void)
{
    // Check if the shell is running interactively or non-interactively
    if (isatty(STDIN_FILENO) == 1)
    {
        shell_interactive();
    }
    else
    {
        shell_no_interactive();
    }
    return 0;
}
