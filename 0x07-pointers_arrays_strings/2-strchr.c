#include "main.h"

char *_strchr(char *s, char c)
{
    for (; *s != '\0'; s++)
    {
        if (*s == c)
            return (s);
        else if (*(s + 1) == c)
            return (s + 1);
    }

    return (s);
}
