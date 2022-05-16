#pragma once // prevents multiple definitions

#include <iostream> // print library

// Exercise 1: implements function 'add', that adds two numbers
int add(int a, int b);

// Exercise 2: implements function 'mul', that multiplies two numbers
int mul(int a, int b);

// ===============
// implementations

int add(int a, int b)
{
int resultado = a + b;
return resultado;
}

// Exercise 2: implements function 'mul', that multiplies two numbers
int mul(int a, int b)
{
int resultado = a * b;
return resultado;
}

int main(){
    int valor1, valor2;
    cout << "Digite o primeiro valor: ";
    cin >> valor1;
    cout << "Digite o segundo valor: ";
    cin >> valor2;

    cout << "O valor da soma eh: "<<add(valor1,valor2)<<endl;

    cout << "O valor da multiplicado eh: "<<mul(valor1,valor2)<<endl;

    system("pause");


}
