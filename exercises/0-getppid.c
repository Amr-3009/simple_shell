// Online C compiler to run C program online
#include <stdio.h>
#include <unistd.h>

/**
 * main - PID & PPID
 * Return: Always 0
 */
 
int main(void) 
{
// Write C code here
pid_t my_ppid;
my_ppid = getppid();
printf("Parent Process ID is:%u\n", my_ppid);
pid_t my_pid;
my_pid = getpid();
printf("Process ID is:%u\n", my_pid);
return (0);
}
