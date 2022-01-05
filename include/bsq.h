/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** bsq.h
*/

#include <stddef.h>

#ifndef MY_STRUCT_
#define MY_STRUCT_

typedef struct map_info_s
{
    char *buffer_map;
    int rows;
    int cols;
    char **map;
    int max_square_size;
    int x;
    int y;
}map_info_t;

int my_atoi(char *str);
int my_strlen(char const *str);
char **mem_alloc_2d_array(int nb_rows, int nb_cols);
int get_number_of_lines(map_info_t *map);
int get_number_of_cols(map_info_t *map);
int get_map_info(map_info_t *map);
int get_map(char const *filepath, map_info_t *map);
int my_printf(char *str, ...);
int my_strlen(char const *str);
char *my_strncpy(char *dest, char const *src, int n);
int is_square_of_size(char **map, int y, int x, int size);
int init_bsq(map_info_t *map);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strndup(const char *s, size_t n);
int process_bsq(map_info_t *map);
int find_biggest_square_from(char **map, int y, int x);
int my_putstr(char *str);
void my_putchar(char c);
int my_put_nbr(long int nb);

#endif
