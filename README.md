# Simple Shell

### Intro
This repository is a ALX Project. The project consisted in writing a shell like Unix shell, in **C**, using a limited number of standard library functions, So Instead we used our own functions.

The goal in this project was to make us understand how a shell works. To single out some items: what is the *environment*, the difference between *functions* and *system calls*, how to create *processes* using `execve`...  


### How to use it
First we compile the program using:
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`

Then run it using:
`./hsh`

### List of built in commands
* cd [directory]  
Switch to the specified directory (path).
* env  
Displays the environment variable
* exit [exitstatus]  
Exit from the program with exitstatus value. 0 by default.
* getenv NAME  
Return the value of the NAME variable if it is in the environment
* help [command]  
Displays the syntax for the command, or all commands.  
* history  
Displays the last typed user .
* echo [$$] or [$?] or [$PATH]
Return pid and exit statue and PATH.

### Features
It can handle commands:
Basicly Every Program in `$PATH`
It Support Single Word like `ls` 

It Handle Path `ls /tmp`

it Handle Options Like `ls -l`

it Handle All Three Togther Like `ls -l /var `

It also can handle comments #

### Also
* Handle Ctrl+C: your shell should not quit when the user inputs ^C
* If no argument is given to cd the command must be interpreted like cd $HOME
* handle the command cd -
* Handle variables replacement
* Handle the $? variable
* Handle the $$ variable

### List of allowed system calls

   * access (man 2 access)
   * chdir (man 2 chdir)
   * close (man 2 close)
   * closedir (man 3 closedir)
   * execve (man 2 execve)
   * exit (man 3 exit)
   * _exit (man 2 _exit)
   * fflush (man 3 fflush)
   * fork (man 2 fork)
   * free (man 3 free)
   * getcwd (man 3 getcwd)
   * getline (man 3 getline)
   * getpid (man 2 getpid)
   * isatty (man 3 isatty)
   * kill (man 2 kill)
   * malloc (man 3 malloc)
   * open (man 2 open)
   * opendir (man 3 opendir)
   * perror (man 3 perror)
   * read (man 2 read)
   * readdir (man 3 readdir)
   * signal (man 2 signal)
   * stat (__xstat) (man 2 stat)
   * lstat (__lxstat) (man 2 lstat)
   * fstat (__fxstat) (man 2 fstat)
   * strtok (man 3 strtok)
   * wait (man 2 wait)
   * waitpid (man 2 waitpid)
   * wait3 (man 2 wait3)
   * wait4 (man 2 wait4)
   * write (man 2 write)
