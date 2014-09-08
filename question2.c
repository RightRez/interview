#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#define INITIAL_BUFF_SIZE 32
 
// copies oldbuf to a new buffer of size new_buff_size
// and returns a pointer to the new buffer
char* enlarge_buffer(char* oldbuf, size_t new_buff_size)
{
  char* newbuf = malloc(sizeof(char)*new_buff_size);
 
  memcpy(newbuf, oldbuf, new_buff_size);
 
  // zero out oldbuf, we're done with it
  memset(oldbuf, 0, new_buff_size);
 
  return newbuf;
}
 
int main(int argc, char** argv)
{
  char c;
  char* buff = malloc(sizeof(char)*INITIAL_BUFF_SIZE);
  int buffsize = INITIAL_BUFF_SIZE;
  int charsread = 0;
  puts("Enter text. Include a dot ('.') in your input to exit:");
 
  do {
    c = getchar();
    charsread++;
 
    // Enlarge the buffer if we need to.
    if (charsread > buffsize) {
      buffsize = buffsize * 2;
      buff = enlarge_buffer(buff, buffsize);
    }
 
    buff[charsread] = c;
  } while (c != '.');
 
  size_t i;
  for (i = 0; i < charsread; i++) {
    putchar(buff[i]);
  }
 
  free(buff);
 
}
