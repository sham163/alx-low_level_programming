#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/**
 * Description: struct list_s - struct list_s
 * @str: str
 * @len: len
 * @next: next
 */



typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

size_t print_list(const list_t *h);


#endif
