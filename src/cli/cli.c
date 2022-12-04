#include "cli.h"

#define Version "0.0.0.1 Dev"
#define getVersion Version" (R) Huh Devlopment"

#if __GNUC__
#define COM "[GNU GCC]"
#elif __clang__
#define COM "[LLVM CLANG]"
#elif _MSC_BUILD
#define COM "[MSFT MSVC]"
#else
#define COM "[UNKNOW COMPILER]"
#endif
#define COMP COM" [LICENSE GPL] [TYPE help() GET HELP INFO]"

void CliInit()
{
    puts(getVersion); // getVersio is define
    puts(COMP);
}
