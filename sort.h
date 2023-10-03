#ifndef SORT_H
#define SORT_H
#include<QString>
#include"professor.h"

class Sort
{
public:

    Sort(Professor array[], int tamanho);

    QString print();
    QString printSelectionSort();

    virtual bool compare(Professor i, Professor j) = 0;

    void selectionSort();



protected:
    Professor *array;
    Professor *arraySSort;
    int size;
};

#endif // SORT_H
