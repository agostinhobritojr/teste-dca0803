/* qsort example */
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* qsort */

float values[] = { 40.5, 40, 100, 90, 20, 25 };

int compare (const void * a, const void * b){
  if (*(float*)a < *(float*)b) return -1;
  if (*(float*)a == *(float*)b) return 0;
  if (*(float*)a > *(float*)b) return 1;
}

int main ()
{
  int n;
  qsort (values, 6, sizeof(float), compare);
  for (n=0; n<6; n++)
     printf ("%f ",values[n]);
  return 0;
}
