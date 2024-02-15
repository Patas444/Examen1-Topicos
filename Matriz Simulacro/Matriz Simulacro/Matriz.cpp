#include <iostream>
using namespace std;
/**
 * @file Matriz.cpp
 * @version 1.0
 * @date 15/02/2024
 * @author Lucio Eduardo Robles Gaspar
 * @title Matriz 3x3
 * @brief Matriz Clasica y Transpuesta
*/
int matriz[3][3];
int main()
{
/**
 * @brief Se ingresan los valores para crear la matriz.
 * @param Matriz, i, j.
 * @return Registra los numeros hasta cumplir el limite de la matriz.
*/
    cout << "Escribe un numero entero: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matriz[i][j];
        }
    }
/**
 * @brief Acomoda los numeros dentro de la matriz.
 * @param Matriz, i, j.
 * @return Genera la matriz acomodando los numeros de izquierda a derecha.
*/
    cout << "-------------------" << endl;
    cout << "Matriz:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz[i][j] << "  ";
        }
        cout << endl;
    }
/**
 * @brief Acomoda los numeros dentro de la matriz de forma traspuesta.
 * @param Matriz, i, j.
 * @return Genera la matriz acomodando los numeros de ariba a abajos.
*/
    cout << "-------------------" << endl;
    cout << "Matriz Transpuesta:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz[j][i] << "  ";
        }
        cout << endl;
    }
}