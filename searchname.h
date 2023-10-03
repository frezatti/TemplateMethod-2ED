#ifndef SEARCHNAME_H
#define SEARCHNAME_H
#include<search.h>

class SearchName: public Search
{
public:
    SearchName(Professor array[], int size);

    int compare(Professor i, Professor j) override;
};

#endif // SEARCHNAME_H
