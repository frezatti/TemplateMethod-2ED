#include "searchid.h"

SearchId::SearchId(Professor array[], int size):Search(array, size)
{
}

int SearchId::compare(Professor i, Professor j){
    if(i.getId()<j.getId()) return -1;
    if(i.getId()==j.getId()) return 0;
    return 1;
}
