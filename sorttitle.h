#ifndef SORTTITLE_H
#define SORTTITLE_H
#include<sort.h>


class SortTitle: public Sort
{
public:
    SortTitle(Professor array[], int size);
    bool compare(Professor i,Professor j);
};

#endif // SORTTITLE_H
