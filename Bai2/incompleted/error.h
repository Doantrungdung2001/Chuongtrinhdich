/* 
 * @copyright (c) 2008, Hedspi, Hanoi University of Technology
 * @author Huu-Duc Nguyen
 * @version 1.0
 */

#ifndef __ERROR_H__
#define __ERROR_H__

typedef enum {
  ERR_END_OF_COMMENT,
  ERR_IDENT_TOO_LONG,
  ERR_INVALID_CHAR_CONSTANT,
  ERR_INVALID_SYMBOL,
  ERR_INVALID_CONSTANT_CHAR
} ErrorCode;


#define ERM_END_OF_COMMENT "End of comment expected!"
#define ERM_IDENT_TOO_LONG "Identification too long!"
#define ERM_INVALID_CHAR_CONSTANT "Invalid const char!"
#define ERM_INVALID_SYMBOL "Invalid symbol!"
#define ERM_ERR_INVALID_CONSTANT_CHAR

void error(ErrorCode err, int lineNo, int colNo);

#endif
