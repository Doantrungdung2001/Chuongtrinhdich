/* 
 * @copyright (c) 2008, Hedspi, Hanoi University of Technology
 * @author Huu-Duc Nguyen
 * @version 1.0
 */

#include <stdio.h>
#include <stdlib.h>
#include "error.h"

void error(ErrorCode err, int lineNo, int colNo) {
  switch (err) {
  case ERR_END_OF_COMMENT:
    printf("%d-%d:%s\n", lineNo, colNo, ERM_END_OF_COMMENT);
    break;
  case ERR_IDENT_TOO_LONG:
    printf("%d-%d:%s\n", lineNo, colNo, ERM_IDENT_TOO_LONG);
    break;
  case ERR_INVALID_CHAR_CONSTANT:
    printf("%d-%d:%s\n", lineNo, colNo, ERM_INVALID_CHAR_CONSTANT);
    break;
  case ERR_INVALID_SYMBOL:
    printf("%d-%d:%s\n", lineNo, colNo, ERM_INVALID_SYMBOL);
    break;
  }
  exit(-1);
}

