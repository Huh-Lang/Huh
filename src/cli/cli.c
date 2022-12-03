#include "cli.h"

#if __GNUC__
#define COM "[GNU GCC]"
#elif __clang__
#define COM "[LLVM CLANG]"
#elif _MSC_BUILD
#define COM "[MSFT MSVC]"
#endif
#define COMP COM" [LICENSE GPL] [TYPE help() GET HELP INFO]"

void CliInit()
{
    puts(getVersion); // getVersio is define
    puts(COMP);
}
