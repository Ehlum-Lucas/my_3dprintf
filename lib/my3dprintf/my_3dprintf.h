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
    #include <string.h>
    #include <stddef.h>

    typedef struct letter_s {
        char *letter1;
        char *letter2;
        char *letter3;
        char *letter4;
        char *letter5;
        char *letter6;
        char ascii;
    } letter_t;

    extern const letter_t Letters[];

    int my_3dprintf(char *str, ...);

#endif