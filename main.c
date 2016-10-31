/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: sconrad
 *
 * Created on October 30, 2016, 6:26 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {    
     
    char consoleInput = 0;
    
    sysStart();
    
    while (consoleInput != 'q')
    {
        printf("Press q to terminate server ");
        scanf("%s", &consoleInput);
    }
     
    sysStop();
    
    return (EXIT_SUCCESS);
}

void sysStart(){
    serverStart();
    listenerStart();
}

void serverStart(){
    printf("***Conrad Household IoT Console*****\n");
    printf("Starting console server... ");
    //Console server startup here        
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
    //Server shutdown here
  
}

void listenerStop(){
    printf("Terminating device listener...\n");  
    //Listener shutdown here
}
