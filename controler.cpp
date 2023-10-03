#include "controler.h"
#include<iostream>

Controler::Controler():
    size(0),
    array(0)
{
    try {
    QString filename = "/Users/adrielfrezatti/Programing/C++/Faculdade/ED2/AtivadadeFile-ED2/DocentesEscolaBD_TESTE_V1.csv";
    QString filelogger ="/Users/adrielfrezatti/Programing/C++/Faculdade/ED2/AtivadadeFile-ED2/log.cvs";
    QFile file(filename);
    QFile log(filelogger);
    QByteArray error;

    std::string str;
    QStringList strlist;
    size = findSize(filename);
    if(!size) throw QString ("KaBoooom");
    array = new Professor[size];
    sorted = new Professor[size];

    if(!file.open(QIODevice::ReadOnly|QIODevice::Text)) throw file.errorString();
    if(!log.open(QIODevice::WriteOnly|QIODevice::Text)) throw QString("logs not opened(KAAAAABOOOOOOM)");
    for(int i=0;!file.atEnd();i++){
        str = file.readLine();
        strlist = QString::fromStdString(str).chopped(1).split(";");

        if(strlist.size()==5&& !strlist[0].isEmpty() && !(strlist[1]==" ")){
            int temp= strlist[0].toInt();
            array[i].setId(temp);
            array[i].setName(strlist[1]);
            array[i].setDepo(strlist[2]);
            array[i].setTitle(strlist[3]);
            array[i].setContractType(strlist[4]);
            sorted[i] = array[i];
        }
        else {
            i--;
        error = QByteArray::fromStdString(str);
        log.write(error);
        }
    }

    log.close();
    size = size - findSize(filelogger);
    file.close();
    } catch (std::bad_alloc &error) {
        throw QString("bad alloc");
    }
}
int Controler::findSize(QString filename){
    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text)) throw file.errorString();
    int i;
    for(i=0;!file.atEnd();i++){
        file.readLine();
    }
    file.close();
    return i;
}

Professor* Controler::getArray(int index){
    switch (index) {
    case 1:
        sortMat();
        return sorted;
        break;
    case 2:
        sortName();
        return sorted;
        break;
    case 3:
        sortDepo();
        return sorted;
        break;
    case 4:
        sortTitle();
        return sorted;
        break;
    case 5:
        sortContractType();
        return sorted;
        break;
    case 6:
        sortDtn();
        return sorted;
    default:
        return array;
        break;
    }
}

int Controler::getSize(){
    return size;
}
void Controler::sortName(){
    class sortName sorter(sorted,size);
    sorter.selectionSort();
}

void Controler::sortMat(){
    class SortMat sorter(sorted,size);
    sorter.selectionSort();
}
void Controler::sortDepo(){
    class SortDepo sorter(sorted,size);
    sorter.selectionSort();
}
void Controler::sortTitle(){
    class SortTitle sorter(sorted,size);
    sorter.selectionSort();
}
void Controler::sortContractType(){
    class SortContractType sorter(sorted,size);
    sorter.selectionSort();
}
void Controler::sortDtn(){
    class SortDTN sorter(sorted,size);
    sorter.selectionSort();
}

Professor Controler::BinaireSearchName(QString tmp){
    bool ok;
    tmp.toInt(&ok);
    if(ok)throw QString("Escreva um nome");
    class SearchName find(sorted,size);
    sortName();
    Professor temp;
    temp.setName(tmp);
    int i = find.binarieSearch(temp);
    if(i == -1)throw QString("Nao encontrado");
    return sorted[i];
}

Professor Controler::BinaireSearchId(QString tmp){
    bool ok;
    int num = tmp.toInt(&ok);
    if(!ok)throw QString("not a number");
    class SearchId find(sorted,size);
    sortMat();
    Professor temp;
    temp.setId(num);
    int i = find.binarieSearch(temp);
    if(i == -1)throw QString("Nao encontrado");
    return sorted[i];
}

Professor Controler::sequentialSearchName(QString tmp){
    bool ok;
    tmp.toInt(&ok);
    if(ok)throw QString("Escreva um nome");
    class SearchName find(sorted,size);
    Professor temp;
    temp.setName(tmp);
    int i = find.search(temp);
    if(i == -1)throw QString("Nao encontrado");
    return sorted[i];
}

Professor Controler::sequentialSearchId(QString tmp){
    bool ok;
    int num = tmp.toInt(&ok);
    if(!ok)throw QString("not a number");
    class SearchId find(sorted,size);
    Professor temp;
    temp.setId(num);
    int i = find.search(temp);
    if(i == -1)throw QString("Nao encontrado");
    return sorted[i];
}
