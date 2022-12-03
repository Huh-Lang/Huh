//===========================================================
//定义logger
//记录log需要事件和等级
//
//ex: level(event,msg);
//event：*char
//level: debug < info < warn < error
//msg:*char
//PS:level为error时，会向result.h申请结束，然后彩色打印log(需要在main中加入log_out())
//===========================================================
#ifndef __LOGGER_H__
#define __LOGGER_H__

#include <stdlib.h>
#include <time.h>

typedef enum Level{
    Debug,
    Info,
    Warn,
    Error,
};

typedef struct Log{
    char *event;
    enum Level level;
    char *msg;
}log;

log *log_data;
u_int *log_data_target_ptr = 0;

void logger(log *send_log,time_t timer);

void debug(char *event,char *msg,...);
void info(char *event,char *msg,...);
void warn(char *event,char *msg,...);
void error(char *event,char *msg,...);

void free_log_date();

#endif