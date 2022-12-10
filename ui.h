#ifndef _UI_H_
#define _UI_H_

#define MAXX 160
#define MAXY 50

#define MAX_INTENSITY 13
#define MIN_INTENSITY 4

#include <stdbool.h>


typedef struct {
	char char_value;
	int intensity;

}cell;


// extern - defined in matrix.c 

extern cell matrix[MAXX][MAXY];

// prototypes

bool init_ui();
void cleanup_ui();
void show_matrix();






#endif
