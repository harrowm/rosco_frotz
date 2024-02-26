// Move the definition of these two variables here to avoid multiple 
// definitions after moving to a "flat" makefile structure (ie
// reuse the standard rosco_m68k makefile)
// Malcolm Harrow Feb 2024

#include <stdbool.h>
#include "setup.h"

bool do_more_prompts;
f_setup_t f_setup;