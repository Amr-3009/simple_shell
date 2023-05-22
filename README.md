# Simple Shell

### Intro
This repository is a ALX Project. The project consisted in writing a shell like Unix shell, in **C**, using a limited number of standard library functions, So Instead we used our own functions.

The goal in this project was to make us understand how a shell works. To single out some items: what is the *environment*, the difference between *functions* and *system calls*, how to create *processes* using `execve`...  


### How to use it
First we compile the program using:
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`

Then run it using:
`./hsh`

##### List of built in commands
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

##### Features
It can handle commands:
Basicly Every Program in `$PATH`
It Support Single Word like `ls` 

It Handle Path `ls /tmp`

it Handle Options Like `ls -l`

it Handle All Three Togther Like `ls -l /var `

It also can handle comments #
