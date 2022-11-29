#include <stdio.h>

static char input[2048];

int main(int argc, char** argv) {
  puts("XLisp v0.0.1");
  puts("Press Ctrl+C to exit\n");

  while (1) {
    fputs("xlisp> ", stdout);

    fgets(input, 2048, stdin);

    printf("No you're a %s", input);
  }

  return 0;
}
