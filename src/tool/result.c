///===========================================================
/// 定义result的行为
///===========================================================
#include "result.h"

void* Opition(bool boolean_optition, usize number,...){
    va_list value_list;
    va_start(value_list, number);
    if (boolean_optition == false){
        return false;
    }
    void* *tmp;
    tmp = (void *)malloc(0);
    for (usize i = 0; i <= number; i++)
    {
        void* value_list_tmp = va_arg(value_list, void *);
        tmp = realloc(tmp, sizeof(tmp) + sizeof(value_list_tmp));
		tmp[i] = value_list_tmp;
        free(value_list_tmp);
    }
    return tmp;
}
