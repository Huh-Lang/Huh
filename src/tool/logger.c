//===========================================================
//定义logger的行为
//===========================================================
#include "logger.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void logger(log *send_log,char *time){
	log_data = realloc(log_data,sizeof(log) * *log_data_target_ptr + 1);
    log_data[*log_data_target_ptr] = *send_log;
	log_data_target_ptr++;
}

void debug(char *event,char *msg){
	log *tmp = {event,Debug,*msg};
	time_t t = time(NULL);
	char *time = asctime(gmtime(&t));
	logger(tmp,time);
}
void info(char *event,char *msg){
	log *tmp = {event,Info,*msg};
	time_t t = time(NULL);
	char *time = asctime(gmtime(&t));
	logger(tmp,time);

}
void warn(char *event,char *msg){
	log *tmp = {event,Warn,msg};
	time_t t = time(NULL);
	char *time = asctime(gmtime(&t));
	logger(tmp,time);
}
void error(char *event,char *msg){
	log *tmp = {event,Error,msg};
	time_t t = time(NULL);
	char *time = asctime(gmtime(&t));
	logger(tmp,time);

	EXIT_FAILURE;
}

void free_log_data(){
    free(log_data);
	free(log_data_target_ptr);
}

void print_log(){
	printf("%s", log_data);
}