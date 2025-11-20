#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include "funcs.h"

int main(void) {
/* this will run forever until we call exit(0) in select_menu_item() */
  for(;;) {
    main_menu();
  }
  /* not reached */
  return 0;
}
