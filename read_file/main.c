#include <stdio.h>

int main() {
  FILE *fptr;
  int c, stock;
  char buffer[200], item[10];
  float price;



  fptr = fopen("myfile.txt", "r"); // open file on read mode

  fgets(buffer, 20, fptr);	/* read a line */
  printf("%s", buffer);

  fscanf(fptr, "%d%s%f", &stock, item, &price); /* read data */
  printf("%d  %s  %4.2f", stock, item, price);

  while ((c = getc(fptr)) != EOF) /* read the rest of the file */
    printf("%c", c);

  fclose(fptr);

  return 0;
}
