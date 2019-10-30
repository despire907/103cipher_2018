/*
** EPITECH PROJECT, 2018
** 103cipher_2018
** File description:
** message_e
*/

#include "../header.h"

int   **malloc_matrix(int len)
{
    int **matrix = NULL;
    int i = 0;

    matrix = (int **)malloc(sizeof(int*) * (len + 3) / 3);
    while (i < ((len + 3) / 3)) {
        matrix[i] = (int *)malloc(sizeof(int) * 3);
        i++;
    }
    return (matrix);
}

int    **fill_matrix(char const *str, int **matrix)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int res = 3;

    while (str[k]) {
        j = 0;
        res = 3;
        while (j < 3) {
            matrix[i][j] = str[k];
            my_putnbr(matrix[i][j]);
            my_putchar('\t');
            k++;
            j++;
            res--;
        }
        my_putchar('\n');
        i++;
    }
    return (matrix);
}

int    message_e(char *message, char *key)
{
    int **key_matrix = malloc_matrix(my_strlen(key));
    key_matrix = fill_matrix(key, key_matrix);
}