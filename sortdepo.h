#ifndef SORTDEPO_H
#define SORTDEPO_H
#include"sort.h"

class SortDepo: public Sort
{
public:
    SortDepo(Professor array[], int size);
    bool compare(Professor i, Professor j) override;
};

#endif // SORTDEPO_H
