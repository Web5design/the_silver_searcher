#ifndef PRINT_H
#define PRINT_H

#include "util.h"

void print_path(const char *path, const char sep);
void print_binary_file_matches(const char *path);
void print_file_matches(const char *path, const char *buf, const int buf_len, const match matches[], const int matches_len);
void print_line_number(int line, const char sep);
void print_file_separator(void);
const char *normalize_path(const char *path);

#endif
