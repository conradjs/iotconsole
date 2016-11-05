
#include "consoleserver.h"


pthread_t console_start()
{
	pthread_t tid;	
	pthread_create(&tid, NULL, run, NULL);
	pthread_join(tid, NULL);
	
	return tid;
}

void *run(void *vargp)
{
	sleep(1);
	printf("Thread running!\n");
	
	return 0;
}
	
int console_stop()
{
	printf("Stopping console...\n");
	
	return 0;
}
