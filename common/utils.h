//
// Created by thonkdifferent on 20.05.26.
//
/**
 * Fișier ce conține o serie de macrocomenzi pentru verificări de rutină
 */
#ifndef TEMA3_NIVC_UTILS_H
#define TEMA3_NIVC_UTILS_H
#include <stdlib.h>
/// Macrocomanda de bază. Introduce o verificare a unei variabile împotriva unei valori
/// errVal. Dacă această valoare este găsită, se va returna retVal
/// @param val Variabila de verificat
/// @param errVal Valoarea de eroare. Verificați documentațiile metodelor folosite pentru a introduce valoarea corectă
/// @param ret Valoarea ce trebuie returnată. lăsați argumentul gol pentru return simplu
#define ENSURE_FULL(val,errVal, ret){if(val == errVal) { return ret;}}

/// Verifică dacă valoarea nu este nulă. Dacă este, se va returna NULL
/// @param val Variabila de verificat
#define ENSURE_NOTNULL_RNULL(val) ENSURE_FULL(val, NULL, NULL);
/// Verifică dacă valoarea nu este nulă. Dacă este, se va ieși din funcție
/// @param val Variabila de verificat
#define ENSURE_NOTNULL(val) ENSURE_FULL(val,NULL,)
/// O prescurtare pentru instanțierea a unei singure variabile de tip T pe heap
/// @param T Tipul variabilei
#define new(T) (T*) calloc(1,sizeof(T))
#endif //TEMA3_NIVC_UTILS_H
