///===========================================================
/// 定义result
/// 函数通过返回result类型数据，丰富异常处理方式
///
/// return(Opition(true,number,value,...)); OR return(Opition(false));
/// boolean_optition: 返回运行结果，成功true；失败false
/// number: 返回值数量
/// ...(value)： 返回值，但不能是数组或字符串
///
/// ex:
/// Result a(){
/// return(Opition(true,number,value,...)); OR return(Opition(false));
/// }
///===========================================================
#ifndef __RESULT_H__
#define __RESULT_H__

#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include "logger.h"

#define Result void*

#define bool _Bool
#define true 1
#define false 0

///禁止传入数组或字符串
void* Opition(bool boolean_optition, usize number,...);

#endif