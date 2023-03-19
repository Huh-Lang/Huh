///===========================================================
/// 定义result
/// 函数通过返回result类型数据，丰富异常处理方式
///
/// return(Opition(true,number,value,...)); OR return(Opition(false,number,value));
/// boolean_optition: 返回运行结果，成功true；失败false
/// number: 返回值数量
/// ...(value)： 返回值
///
/// ex:
/// Result a(){
/// return(Opition(true,number,value,...)); OR return(Opition(false,number,value));
/// }
///===========================================================
#pragma once

#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

#define Result void*

#define usize unsigned long long
#define bool _Bool
#define true 1
#define false 0

void* Opition(bool boolean_optition, usize number, ...);
