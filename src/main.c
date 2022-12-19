#include <stdio.h>

#include "cli/cli.h"
#include "tool/logger.h"
#include "tool/result.h"

Result main(int argc, char **argv) {
  debug("Started", "Hello,World");
  info("Started", "Hello,World");
  if (argc == 1)
    CliInit();
  return (Opition(true,0));
}
