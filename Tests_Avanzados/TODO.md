**Matrix(const std::string \*rowLabels, size\_t nrows, const std::string \* colsLabels, size\_t ncols, double value)**

**Comprueba primero que ncols,nrows>=1**

**La matriz debe tener tamaño nrows y ncols \_rowLabels.at(i).getKey() = rowLabels[i] i=0...nrows \_colsLabels.at(i).getKey() = colsLabels[i]i=0..ncols El valor de sus elementos es value**

**2.std::string labelAtRow(size\_t row) const;**

- **Devuelve la etiqueta asociada con una fila.**
- **Tiene que comprobar que la fila es correcta**

**3. 4.**

|**std::string labelAtCol(size\_t col) const;**|
| - |
|<p>- **Devuelve la etiqueta asociada con la columna col.**</p><p>- **Tiene que comprobar que la columna es correcta.**</p>|
|**int Matrix::rowIndexOf(const std::string & label) const**|
- **Devuelve el número de fila de la etiqueta pasada por parámetro. En el caso en el que la etiqueta no exista o no pertenezca a la matriz se devuelve -1 (npos).**
- **Están ordenadas como deberían, es decir, la posición de la primera etiqueta es 0, la segunda 1, etc. y son consecutivas**

**5.bool Matrix::setLabels(Index & idx, const string \* labels,** 

**int nlabels)**

- **El orden del idx coincide con el orden de labels, es decir:**
- **Precondición: labels no puede contener duplicados**
- **idx.at(i).getKey() == labels[i]. idx.at(i).getPos()== i.**

**6.int Matrix::colIndexOf(const std::string & label) const**

- **Devuelve el número de columna de la etiqueta pasada por parámetro. En el caso en el que la etiqueta no exista o no pertenezca a la matriz se devuelve -1 (npos).**
- **Están ordenadas como deberían, es decir, la posición de la primera etiqueta es 0, la segunda 1, etc. y son consecutivas**

**7.int Matrix::getLabels(const Index & idx, string \* labels)** 

**const ![](Aspose.Words.876f63d8-c22f-41a1-9415-f0e0879b0b9a.001.png)**

- **Devuelve el número de labels insertadas.#include "Matrix.h"**
- **labels acaba siendo de la forma labels[i] = idx.at(i).getKey(). 8.int Matrix::getRowLabels(string \* labels) const**
- **Dada una etiqueta, nos da la fila asociada.**

**9.int Matrix::getColLabels(string \* labels) const**

- **Dada una etiqueta devuelve la columna asociada.**

**10.Matrix & Matrix::normalize()**

**La suma de cada fila vale 1.**

\1. const double & operator()(const string & row, const string & col) const;

\1. Comprueba que rowIndexOf(row)>= 0
