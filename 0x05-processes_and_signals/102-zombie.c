#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * infinite_while - entry point
 * Return: 0
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int process;
	pid_t zombie_pid;

	process = 0;
	while (process < 5)
	{
		zombie_pid = fork();
		if (zombie_pid > 0)
		{
			printf("Zombie process created, PID: %d\n", zombie_pid);
		}
		else
			exit(0);
		process++;
	}
	infinite_while();
	return (0);
}
