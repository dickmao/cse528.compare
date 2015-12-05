#ifndef	GLOBALS_H_INCLUDED
#define GLOBALS_H_INCLUDED

#include <stdio.h>
#include "RPF/Globals.h"

// Set to 1 to enable saving of samples
#define SAVE_SAMPLES 1		// Save the samples from Pbrt. (Turn off to simply render the scene)
#define SAVE_IMAGES 0		// To output the pbrt samples as images switch to 1
#define WRITE_SAMPLES 0		// To write the files as a dat file switch to 1

// Type for the sample elements
typedef float SampleElem; 

#define SAMPLER_API __declspec(dllexport)

class SampleWriter;

#define BUFFER_SIZE 1000

// The value for the gamma curve when outputting the final image
#define COLOR_GAMMA 0.5f

#define SAMPLE_EPSILON 0.01

// Sample indexes

// Sample categories
enum CATEGORY {

	POSITION	=	X_COORD,
	COLOR		=	COLOR_1,
	FEATURE		=	WORLD_1_X, 
	RANDOM		=	U_COORD

};

// Refers to the x and y coordinates
#define NUM_OF_POSITIONS		int(2)

// Refers to the number of color channels
#define NUM_OF_COLORS			int(3)

// Refers to the number of features (see list below)
#define NUM_OF_FEATURES			int(18) 

// Refers to the number of random parameters we use (see list below)
#define NUM_OF_RANDOM_PARAMS	int(5) 

// Refers to the total size of a sample
#define SAMPLE_LENGTH			int(NUM_OF_POSITIONS + NUM_OF_COLORS + NUM_OF_RANDOM_PARAMS + NUM_OF_FEATURES)

// Misc. functions
#undef min
#undef max

#undef MIN
#define MIN(a, b) ((a) < (b) ? (a) : (b))

#undef MAX
#define MAX(a, b) ((a) > (b) ? (a) : (b))

#endif
