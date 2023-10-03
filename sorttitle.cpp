#include "sorttitle.h"

SortTitle::SortTitle(Professor array[],int size):Sort(array,size)
{

}

bool SortTitle::compare(Professor i, Professor j){
    if(i.getTitle()<j.getTitle()) return true;
    if(i.getTitle()>j.getTitle()) return false;
    if(i.getName()<j.getName()) return true;
    return false;

}

