#ifndef PPM_H
#define PPM_H

#include <stdio.h>
#include <fstream>

typedef struct header_t;
typedef struct pixel_t;

header_t* readHeader(FILE*);
pixel_t** readPPM(FILE*,header_t*);
void writeP6Image(header_t*, pixel_t**, FILE*);
void grayScaleImage(header_t*, pixel_t**, FILE*);
void flipImage(header_t*, pixel_t**, FILE*);
pixel_t** allocateMemory(header_t*);
void freeMemory(pixel_t**, header_t*);


#endif PPM_H