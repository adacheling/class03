


void send(int* to, int* from, int count) {
  do *to++ = *from++; 
  while (--count > 0);
}
