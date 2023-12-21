#ifndef __STRING_H__
#define __STRING_H__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

extern char **environ;

/*int wait(void);*/


int custum(int ac, char **av, char **env);
int process(void);
int execute_command(void);
int fork(void);
int get_env();
int ctrld(char **args);
int cd(char **args);
int help(char **args);
extern char **environ;
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _putchar(char c);
char *_get_path(char **env);
int _values_path(char **arg, char **env);
char *_getline_command(void);
void _getenv(char **env);
void _exit_command(char **args, char *lineptr, int _exit);
int _fork_fun(char **arg, char **av, char **env,
char *lineptr, int np, int c);

#endif /* __STRING__H */