#ifndef SORTDTN_H
#define SORTDTN_H
#include<sort.h>


class SortDTN:public Sort
{
public:
    SortDTN(Professor array[], int size);

    bool compare(Professor i, Professor j) override;

};

#endif // SORTDTN_H
