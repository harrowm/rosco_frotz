/* dumb-frotz.h
 *
 * Frotz os functions for a standard C library and a dumb terminal.
 * Now you can finally play Zork Zero on your Teletype.
 *
 * Copyright 1997, 1998 Alembic Petrofsky <alembic@petrofsky.berkeley.ca.us>.
 * Any use permitted provided this notice stays intact.
 */

#ifndef DUMB_FROTZ_H_
#define DUMB_FROTZ_H_

#include "frotz.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

// Quick hack for rosco_m68k IO ..
#include <machine.h>
#define putchar(ch) mcPrintchar(ch)
#define getchar() mcReadchar()

/* from ../common/setup.h */
extern f_setup_t f_setup;

extern bool do_more_prompts;

/* From input.c.  */
bool is_terminator (zchar);

/* dumb-input.c */
bool dumb_handle_setting(const char *setting, bool show_cursor, bool startup);
void dumb_init_input(void);

/* dumb-output.c */
void dumb_init_output(void);
bool dumb_output_handle_setting(const char *setting, bool show_cursor,
				bool startup);
void dumb_show_screen(bool show_cursor);
void dumb_show_prompt(bool show_cursor, char line_type);
void dumb_dump_screen(void);
void dumb_display_user_input(char *);
void dumb_discard_old_input(int num_chars);
void dumb_elide_more_prompt(void);
void dumb_set_picture_cell(int row, int col, char c);

/* dumb-pic.c */
void dumb_init_pictures(char *graphics_filename);

extern char *strdup(char *);

#endif