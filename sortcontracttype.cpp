#include "sortcontracttype.h"

SortContractType::SortContractType(Professor array[], int size):Sort(array,size)
{
}

bool SortContractType::compare(Professor i, Professor j){
    if(i.getContractType()<j.getContractType()) return true;
    if(i.getContractType() > j.getContractType()) return false;
    if(i.getName()<j.getName()) return true;
    return false;
}

