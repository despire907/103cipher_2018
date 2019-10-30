/*
** EPITECH PROJECT, 2018
** 103cipher_2018
** File description:
** header
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <math.h>

void    my_putchar(char c);
void    my_putstr(char const *str);
void    my_putnbr(int nb);
int    my_strlen(char const *str);
char    *my_revstr(char *str);
int    str_to_int(char const *str);
int    message_e(char *message, char *key);