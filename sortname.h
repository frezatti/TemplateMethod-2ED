#ifndef SORTNAME_H
#define SORTNAME_H
#include"sort.h"

class sortName:public Sort
{
public:
    sortName(Professor array[], int tamanho);
    bool compare(Professor i, Professor j) override;
};

#endif // SORTNAME_H
