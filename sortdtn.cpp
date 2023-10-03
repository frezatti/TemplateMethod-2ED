#include "sortdtn.h"

SortDTN::SortDTN(Professor array[], int size):Sort(array,size)
{

}

bool SortDTN::compare(Professor i, Professor j){
    if(i.getDepo()<j.getDepo()) return true;
    if(i.getDepo()>j.getDepo()) return false;
    if(i.getTitle()<j.getTitle())return true;
    if(i.getTitle()> j.getTitle()) return false;
    if(i.getName()<j.getName()) return true ;
    return false;

}

