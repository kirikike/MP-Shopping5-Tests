**1.Matrix();**

- **(Llama a clear())**
- **\_nrows = 0 y \_ncols = 0**
- **\_data = nullptr**
- **\_rowLabels() y \_colLabels()**

**2.Matrix(const Matrix& orig);**

- **El tamaño de filas y columnas debe coincidir con la matriz original**
- **this[i][j] == orig[i][j] 3.Matrix(size\_t r, size\_t c, double defValue = 0.0);**
- **Los elementos de la matriz tienen que tener defVaule y tamaño rxc**

**4.virtual ~Matrix();**

- **Las filas y columnas deben de ser 0**

**5.ize\_t columns()const;**

**6.size\_t rows() const; 7.const double & at(size\_t row, size\_t col) const;**

- **0<=row<\_nrows y 0<=col<\_ncols**
- **Devuelve el elemento [row][col]. Solo se puede consultar, no se tiene permiso de edición**
- **Si “row” y “col” son inválidos salta un assert , devuelve npos;**

**8.double & at(size\_t row, size\_t col);** 

- **0 <= row < \_nrows y 0 <= col < \_ncols**
- **¿poner un assert?**

**9.void resize(size\_t nrows, size\_t ncols, double defValue =**

**0.0);**

- **Número de filas coincide con nrows (nrows >= 1)**
- **Número de columnas coincide con ncols (ncols >= 1)**
- **Todos los elementos inicializados a defValue**

**10.void clear();**

- **\_nrows = 0 y \_ncols = 0**
- **\_data = nullptr**
- **\_rowLabels() y \_colLabels()**

**11.const double & operator()(size\_t row, size\_t col) const;**

- **Devuelve el elemento [row][cols]**
- **Si “row” y “col” son inválidos salta un assert**

**12.double & operator()(size\_t row, size\_t col);** 

- **Devuelve referencia al elemento [row][col]**
