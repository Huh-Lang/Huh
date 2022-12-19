#include <stdio.h>

#include "cli/cli.h"
#include "tool/result.h"

Result main(int argc, char **argv) {
  if (argc == 1)
    CliInit();
  return (Opition(true, 0));
}
