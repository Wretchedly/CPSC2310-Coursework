#include "ppm.h"

//struct definitions
typedef struct header_t{
    char magicNum[3];
    int width, height, maxVal;
} header_t;

typedef struct pixel_t{
    unsigned char red, green, blue;
} pixel_t;

//function definitions
header_t* readHeader(FILE* inFile){
    header_t* headerPtr;

    return headerPtr;
}

pixel_t** readPPM(FILE* inFile, header_t* header){
    pixel_t** pixelPtrPtr;

    return pixelPtrPtr;
}

void writeP6Image(header_t* header, pixel_t** pixel, FILE* fileOut){

}

void grayScaleImage(header_t* header, pixel_t** pixel, FILE* fileOut){

}

void flipImage(header_t* header, pixel_t** pixel, FILE* fileOut){

}

pixel_t** allocateMemory(header_t* header){
    pixel_t** pixelPtrPtr;

    return pixelPtrPtr;
}

void freeMemory(pixel_t** pixel, header_t* header){

}