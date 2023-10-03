#include "sortdepo.h"

SortDepo::SortDepo(Professor array[], int size):Sort(array,size)
{
}

bool SortDepo::compare(Professor i,Professor  j){
    if(i.getDepo()<j.getDepo())return true;
    if(i.getDepo()>j.getDepo())return false;
    if(i.getName()<j.getName()) return true;
    return false;
}
