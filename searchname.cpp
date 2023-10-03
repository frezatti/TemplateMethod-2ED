#include "searchname.h"

SearchName::SearchName(Professor array[], int size):Search(array, size)
{
}

int SearchName::compare(Professor i, Professor j){
    if(i.getName()<j.getName()) return -1;
    if(i.getName()==j.getName()) return 0;
    return 1;
}
