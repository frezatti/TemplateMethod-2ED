#include "search.h"
#include "professor.h"

Search::Search(Professor array[], int size):
    array(array),
    size(size)
{
}

int Search::search(Professor lost){
    if(!array)throw QString("empty array");
    int i =0;
       for(i=0;i<size;i++){
           if(compare(array[i],lost)==0){
               return i;
           }
       }
       return -1;
}

int Search::binarieSearch(Professor lost){
    if(!array)throw QString("empty array");

    int start = 0;
    int end = size-1;

    while(start<=end){
        int mid = (start+end)/2;
        if(compare(array[mid],lost)==0) return mid;
        if(compare(array[mid],lost)==1) start = mid+1;
        else end = mid-1;
    }
    return -1;
}
