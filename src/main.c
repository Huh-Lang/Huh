#include <stdio.h>

#include "cli/cli.h"
#include "tool/result.h"

int main(int argc, char **argv) {
  if (argc == 1){
      CliInit();
      CliHelp();
  } else if (argc > 1){
      CliInit();
  }
  return (0);
}
