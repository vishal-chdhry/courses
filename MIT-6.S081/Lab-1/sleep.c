#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
  if (argc > 1) {
    sleep(argv[1]);
  }
  exit(0);
}