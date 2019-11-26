#include <time.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

char ** parse_args( char * line ){
  char ** output = calloc(sizeof(char*),6);
  char * cursor = line;
  for (size_t i = 0;cursor != NULL;i++){
    output[i] = strsep( &cursor," ");
    printf("%ld",i);
  }
  return output;
}

int main() {
  //char * line = "ls -a -l";
  char line[100] = "ls -a -l";
  char ** args = parse_args( line );
  execvp(args[0], args);
  return 0;
}
