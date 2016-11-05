/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   consoleserver.h
 * Author: sconrad
 *
 * Created on October 30, 2016, 6:28 PM
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <signal.h>
#include <unistd.h>


#ifndef CONSOLESERVER_H
#define CONSOLESERVER_H

#ifdef __cplusplus
extern "C" {
#endif


pthread_t console_start();
int console_stop();
void *run(void *vargp);

#ifdef __cplusplus
}
#endif

#endif /* CONSOLESERVER_H */

