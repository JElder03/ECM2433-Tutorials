#ifndef __PIPES_H
#define __PIPES_H

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void parent(void);
void child(void);
void sig_handler(int);

#endif
