#include "sortname.h"

sortName::sortName(Professor array[],int tamanho):Sort(array,tamanho)
{
}

bool sortName::compare(Professor i,Professor j){
    return (i.getName() < j.getName());
}

