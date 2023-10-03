#include "sortmat.h"

SortMat::SortMat(Professor array [],int size):Sort(array,size)
{
}

bool SortMat::compare(Professor i , Professor j){
    return (i.getId() < j.getId());
}


