#include <unistd.h>
#include <sys/syscall.h>

/**
 * main - Entry point
 *
 * Return Always: (0) - Success
 */
int main(void)
{
	const char msg[] = "_putchar\n";
	syscall(SYS_write, 1, msg, sizeof(msg));
	return (0);
}
