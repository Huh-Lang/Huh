#include "cli.h"

#define Version "0.0.1 Dev"
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
#define COMP COM" [LICENSE GPL]"

void CliInit()
{
    puts(getVersion); // getVersion is defined
    puts(COMP);
}

const char HELPS[] ="-H --help\n-O\n-V --version\n";

void CliHelp(){
	puts(HELPS);
}
