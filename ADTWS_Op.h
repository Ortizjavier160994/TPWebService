#ifndef ADTWS_OP__H__
#define ADTWS_OP__H__ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "errors.h"
#include "utils.h"

#define DEFAULT_FORMAT "GET"

typedef struct{
	char* request;
	char* response;
	char* operation;
	char* operation_time;
	char* format;
}ADTWS_Op;


typedef int (data_parser*)(void*);



int ADTWS_Op_create(ADTWS_Op*, int, const char**);
int ADTWS_Op_destroy(ADTWS_Op*);
int ADTWS_Op_set_operation(ADTWS_Op*);
int ADTWS_Op_set_request(ADTWS_Op*, int, const char**);
int ADTWS_Op_set_format(ADTWS_Op*, int, const char**);
int ADTWS_Op_set_operation_time(ADTWS_Op*);



int parse_xml();
int parse_jason();

int ADTWS_Op_validate_operation(ADTWS_Op*);


#endif