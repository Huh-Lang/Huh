//===========================================================
//定义logger的行为
//===========================================================
#include "logger.h"
#include <stdlib.h>
#include <time.h>

void logger(log *send_log,time_t timer){
    realloc(log_data,sizeof(struct Log));
    log_data[*log_data_target_ptr] = *send_log;
}

void debug(char *event,char *msg,...){}
void info(char *event,char *msg,...){}
void warn(char *event,char *msg,...){}
void error(char *event,char *msg,...){}

void free_log_data(){
    free(log_data);
}