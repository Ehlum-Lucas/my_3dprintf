/*
** EPITECH PROJECT, 2021
** 3dprintf.c
** File description:
** @maelbecel
*/

#include "my_3dprintf.h"

static char *get_part(letter_t letter, int i)
{
    switch (i) {
        case 0:
            return strdup(letter.letter1);
        case 1:
            return strdup(letter.letter2);
        case 2:
            return strdup(letter.letter3);
        case 3:
            return strdup(letter.letter4);
        case 4:
            return strdup(letter.letter5);
        case 5:
            return strdup(letter.letter6);
    }
}

static char *get_letter(char x, int i)
{
    for (int j = 0; Letters[j]; j++)
        if (Letters[j].ascii == x)
            return get_part(Letters[j], i)
}

static char *get_line(char *str, int i)
{
    char *line = malloc(sizeof(char) * 10 * my_strlen(str));
    int j = 0;

    for (int x = 0; x < my_strlen(str); x++) {
        line = strcat(line, get_letter(str[x], i));
    }
}


int my_3dprintf(char *str, ...)
{
    va_list ap;
    va_start(ap, str);

    for (int i = 0; i < 6; i++) {
        printf("%s\n" , get_line(str, i));
    }
    va_end(ap);
    return 0;
}
