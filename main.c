/*
** EPITECH PROJECT, 2018
** 103cipher_2018
** File description:
** main
*/

#include "header.h"

void    prog_desc()
{
    my_putstr("USAGE:\n     ./103cipher message key flag\n\n");
    my_putstr("DESCRIPTION\n    message");
    my_putstr("    a message to be crypted, made of ASCII characters\n");
    my_putstr("    key        the encryption key, made of ASCII characters");
    my_putstr("\n    flag       0 for encryption, 1 for decryption\n");
}

int    check_input(int ac, char *m, char *k, char *f)
{
    if (ac == 1) {
        my_putstr("Invalid number of arguments -> ./103cipher -h for help\n");
        return (0);
    }
    if (m[0] == '-' && m[1] == 'h' && m[2] == '\0') {
        prog_desc();
        return (0);
    } else if (ac != 4) {
        my_putstr("Invalid number of arguments -> ./103cipher -h for help\n");
        return (0);
    } else {
        if (f[0] != '1' && f[0] != '0') {
            my_putstr("Invalid flag -> ./103cipher -h for help\n");
            return (0);
        }
    }
    return (1);
}

int    main(int ac, char **av)
{
    if (check_input(ac, av[1], av[2], av[3]) == 1) {
        if (av[3][0] == '1' && my_strlen(av[3]) == 1) {
            /*message_d(av[1], av[2]);*/
            return (0);
        } else if (av[3][0] == '0' && my_strlen(av[3]) == 1) {
            message_e(av[1], av[2]);
        } else {
            my_putstr("Invalid argument type -> ./103cipher -h for help\n");
            return (0);
        }
    }
    return (0);
}