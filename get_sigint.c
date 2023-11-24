#include "main.h"

/**
 * get_sigint - this will handle the crtl + c call in prompt
 * @sig: this does signal handler
 */
void get_sigint(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\n^-^ ", 5);
}
