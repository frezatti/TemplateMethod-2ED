#include "professor.h"

Professor::Professor()
{

}

Professor::Professor(int id, QString Name, QString depo, QString title,QString contacttype):
    id(id),
    name(Name),
    depo(depo),
    title(title),
    contractType(contacttype)
{
}

int Professor::getId() const
{
    return id;
}

void Professor::setId(int newId)
{
    id = newId;
}

QString Professor::getName() const
{
    return name;
}

void Professor::setName(QString newName)
{
    name = newName;
}

QString Professor::getDepo() const
{
    return depo;
}

void Professor::setDepo(QString newDepo)
{
    depo = newDepo;
}

QString Professor::getTitle() const
{
    return title;
}

void Professor::setTitle(QString newTitle)
{
    title = newTitle;
}

QString Professor::getContractType() const
{
    return contractType;
}

void Professor::setContractType(QString newContactType)
{
    contractType = newContactType;
}
