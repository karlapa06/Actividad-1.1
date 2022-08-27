// =================================================================
//
// File: activity.h
// Author: Karla Alejandra Padilla González
// Date: 26 de agosto de 2022
//
// ===============================
#ifndef ACTIVITY_H
#define ACTIVITY_H

// ===============================
// sumaIterativa. Calculate the sum from 1 to n with an iterative
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	el ciclo tiene una complejidad de O(n) si bien en el ciclo tenemos la n y la tercer condicion del ciclo es una suma, su complejidad es de O(n).
// =================================================================
#include <iostream>
using namespace std;
#include <math.h>

unsigned int sumaIterativa(unsigned int n) {
  int suma = 0; 
  for (int i=1;i<=n;i++){
    suma = suma +i; 
  }
  return suma;
}

// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	tiene una complejidad de O(n), ya que en su ejecución y su parámetro de control se incrementa en un valor constante. 
// =================================================================
unsigned int sumaRecursiva(unsigned int n) {
  if (n <= 0) 
    return 0;
  else 
    return n + sumaRecursiva(n-1);
}
// =================================================================
// sumaDirecta. Calculate the sum from 1 to n with a mathematical
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	tiene una complejidad de O(1), ya que es una sentencia simple. 
// =================================================================
unsigned int sumaDirecta(unsigned int n) {
	int suma= (n*(n+1))/2;
  return suma;
} 

#endif /* ACTIVITY_H */