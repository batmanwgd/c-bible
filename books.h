#ifndef BIBLE_BOOKS_H
#define BIBLE_BOOKS_H

typedef struct Book {
    char *title;
    char *abbrev;
} book_t;

char *booktitle(char *abbrev);
book_t findbook(char *abbrev);

#endif
