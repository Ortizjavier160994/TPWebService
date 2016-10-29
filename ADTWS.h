#ifndef ADTWS__H__
#define ADTWS__H__ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "errors.h"
#include "utils.h"
#include "ADT_List.h"
#include "ADT_Client.h"
#include "ADT_Queue.h"
#include "ADTWS_Op.h"

#define CLIENT_PATH_POSITION 0
#define OPERATION_PATH_POSITION 1
#define LOG_PATH_POSITION 2

typedef struct{
	ADTWS_Op operation_t;
	list_t operation_list;
	list_t client_list;
	queue_t execution_queue;
	char* config_file;
}ADTWS;


int ADTWS_create(ATDWS*, ADTWS_Op);
int ADTWS_valid_operation(ADTWS);
int ADTWS_consume(ADTWS*);
int ADTWS_destroy (ADTWS*);




int fill_operation_list(list_t*, const char*);
int fill_client_list(list_t*, const char*);
int get_file_path(char*, const char*, int);

#endif