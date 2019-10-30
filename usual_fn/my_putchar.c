/*
** EPITECH PROJECT, 2018
** my_putchar.c
** File description:
** fzfezef
*/

#include <unistd.h>
#include "../header.h"

void    my_putchar(char c)
{
    write(1, &c, 1);
}
