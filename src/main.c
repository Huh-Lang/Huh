#include <stdio.h>
#include "cli/cli.h"
#include "tool/logger.h"
int main(int argc, char **argv) {
  if(argc == 1)
    CliInit();
  return 0;
}
