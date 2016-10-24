#ifndef ADTWS__H__
#define ADTWS__H__ 

#include <stdio.h>
#include <stdlib.h>
#include "errors.h"
#include "utils.h"
#include "ADT_List.h"
#include "ADT_Client.h"
#include "ADT_Queue.h"
#include "ADTWS_Op"

typedef struct{
	ADTWS_Op operation_t;
	list_t operation_list;
	list_t client_list;
	queue_t execution_queue;
}ADTWS;


int ADTWS_create(ATDWS*, ADTWS_Op);
int ADTWS_valid_operation(ADTWS*);
int ADTWS_consume(ADTWS*);
int ADTWS_destroy (ADTWS*);
int ADTWS_get_client_list();



int fill_operation_list(list_t*);
int fill_client_list(list_t*);

#endif