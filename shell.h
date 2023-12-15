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

int process(void);
int execute_command(void);
int fork(void);
int get_env();

#endif /* __STRING__H */