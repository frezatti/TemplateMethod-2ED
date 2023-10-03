#ifndef SORTMAT_H
#define SORTMAT_H
#include"sort.h"

class SortMat: public Sort
{
public:
    SortMat(Professor array[],int size);
    bool compare(Professor i, Professor j) override;
};

#endif // SORTMAT_H
