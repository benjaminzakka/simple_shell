#include "main.h"

/**
 * get_sigint - Handle the crtl + c call in prompt
 * @sig: A signal handler
 */
void get_sigint(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\n^-^ ", 5);
}
