#include <stdio.h>
#include "cli/cli.h"
int main(int argc, char **argv) {
  if(argc == 1)
    CliInit();
  return 0;
}
