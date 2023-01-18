/*
** EPITECH PROJECT, 2021
** 3dprintf.h
** File description:
** @maelbecel
*/

#ifndef MY3DPRINTF_H_
    #define MY3DPRINTF_H_

    #include <stdarg.h>
    #include <stdio.h>

    typedef struct letter_s {
        char **letter;
        char ascii;
    } letter_t;

    int my_3dprintf(char *str, ...);

#endif