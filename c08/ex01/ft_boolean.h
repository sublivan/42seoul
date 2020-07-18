#ifndef _FT_BOOLEAN_H_
#define _FT_BOOLEAN_H_

#include <unistd.h>

typedef enum {
	false = 0,
	true = 1
}	t_bool;

#define FALSE false
#define TRUE true

#define EVEN_MSG "I have an even number of arguments\n"
#define ODD_MSG "I have an odd number of arguments\n"

#define EVEN(number) (number % 2 == 0)

#define SUCCESS 0
#endif