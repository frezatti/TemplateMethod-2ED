#ifndef SORTCONTRACTTYPE_H
#define SORTCONTRACTTYPE_H

#include<sort.h>

class SortContractType: public Sort
{
public:
    SortContractType(Professor array[], int size);

    bool compare(Professor i, Professor j) override;
};

#endif // SORTCONTRACTTYPE_H
