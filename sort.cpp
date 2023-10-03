#include "sort.h"

Sort::Sort(Professor array[], int tamanho)
    : array(array), arraySSort(array), size(tamanho) {}

QString Sort::print() {
  QString exit;
  if (!array)
    throw QString("empty array");
  for (int i = 0; i < size; i++) {
    exit += QString::number(array[i].getId()) + ";";
  }
  return exit;
}
QString Sort::printSelectionSort() {
  QString exit;
  if (!array)
    throw QString("empty array");
  for (int i = 0; i < size; i++) {
    exit += QString::number(array[i].getId()) + ";";
  }
  return exit;
}
void Sort::selectionSort() {
  if (!array)
    throw QString("empty array");
  Professor minor;
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size - 1; j++) {
      if (compare(array[i], array[j])) {
        minor = arraySSort[j];
        arraySSort[j] = arraySSort[i];
        arraySSort[i] = minor;
      }
    }
  }
}
