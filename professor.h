#ifndef PROFESSOR_H
#define PROFESSOR_H
#include <QString>

class Professor {
public:
  Professor();
  Professor(int id, QString Name, QString depo, QString title,QString contacttype);


  int getId() const;
  void setId(int newId);
  QString getName() const;
  void setName(QString newName);
  QString getDepo() const;
  void setDepo( QString newDepo);
  QString getTitle() const;
  void setTitle( QString newTitle);
  QString getContractType() const;
  void setContractType(QString newContractType);

  private:
  int id;
  QString name;
  QString depo;
  QString title;
  QString contractType;
};

#endif // PROFESSOR_H
