#include <stdio.h>
#include "assert.h"
#include <string.h>
#include "Detect_range.h"

int main()
{
  char Data[50]= {0};
  int range[12] = {0,1,1,2,4,3,0,6,7,9,10,11};
  char* expectedValue = "1-4, 5\n 6-7,2\n 9-11, 3\n";
   
  //Detect_range(Data, range, (sizeof(range)/sizeof(int)));
  
  {
    //assert(!strcmp(Data, expectedValue);
  }
}
