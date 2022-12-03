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

typedef enum level{
    debug,
    info,
    warn,
    error,
};


#endif