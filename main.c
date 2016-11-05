#include "main.h" 

int main(int argc, char** argv) {    
     
    char consoleInput = 0;
    
    struct console_threads *c_threads;
       
    c_threads = (struct console_threads *) malloc(sizeof(struct console_threads));   
    sysStart(c_threads);
    
    while (consoleInput != 'q')
    {
        printf("Press q to terminate server ");
        scanf("%s", &consoleInput);
    }
     
    sysStop();
    
    free(c_threads);

    
    return (EXIT_SUCCESS);
}

void sysStart(struct console_threads* c_threads){
    serverStart();
    listenerStart();
}

void serverStart(){
    printf("***Conrad Household IoT Console*****\n");
    printf("Starting console server... ");
    console_start();       
    printf("Success\n");    
}

void listenerStart(){
    printf("Starting device listener... ");
    //Device listener startup here        
    printf("Success\n");    
}

void sysStop(){
    listenerStop();
    serverStop();
}

void serverStop(){
    printf("Terminating console server...\n");
    console_stop();
  
}

void listenerStop(){
    printf("Terminating device listener...\n");  
    //Listener shutdown here
}
