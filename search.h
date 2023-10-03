#ifndef SEARCH_H
#define SEARCH_H
#include"professor.h"

class Search
{
public:
    Search(Professor array[], int size);

    virtual int compare(Professor i, Professor j) = 0;

    int search(Professor lost);
    int binarieSearch(Professor lost);

protected:
    Professor* array;
    int size;
};

#endif // SEARCH_H
