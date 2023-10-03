#ifndef SEARCHID_H
#define SEARCHID_H
#include<search.h>


class SearchId:public Search
{
public:
    SearchId(Professor array[], int size);

    int compare(Professor i,Professor j);
};

#endif // SEARCHID_H
