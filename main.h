#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "consoleserver.h"

struct console_threads
{
	pthread_t server_thread;
};

void sysStart(struct console_threads* c_threads);
void serverStart();
void listenerStart();
void sysStop();
void serverStop();
void listenerStop();
