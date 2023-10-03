#ifndef CONTROLER_H
#define CONTROLER_H
#include<QString>
#include"professor.h"
#include<sorttitle.h>
#include<sortdepo.h>
#include<sortname.h>
#include<sortmat.h>
#include<sortcontracttype.h>
#include<sortdtn.h>
#include <searchname.h>
#include<searchid.h>

#include <QFile>

class Controler
{
public:
    Controler();

    Professor *getArray(int index);

    void sortName();
    void sortDepo();
    void sortMat();
    void sortTitle();
    void sortContractType();
    void sortDtn();

    Professor BinaireSearchName(QString info);
    Professor BinaireSearchId(QString tmp);
    Professor sequentialSearchName(QString info);
    Professor sequentialSearchId(QString info);

    int getSize();

private:
    int findSize(QString file);

    int size;
    Professor *array;
    Professor *sorted;

};

#endif // CONTROLER_H
