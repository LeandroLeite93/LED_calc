/*
LED_calc.cpp

programa simples em C ANSI para micro controladores e entre outros.. 

   Fiz este programa para mostra alimentação de um LED para isso temos que calcular o Resistor e o VIN,
para isso foi criado este software simples onde este teste podera ser feito. Este programa terá uma nova versão em breve. 
*/ 


#include <iostream>

int main()
{
    float Vin  = 0.0,
          Vled = 0.0,
          Iled = 0.0,
          Resistor = 0.0;
    

    printf("LED CALC v1.0 \n\n");
    printf("Autor: Leandro Pinheiro Leite \n\n");
    printf("Projeto Estudo \n\n");

    printf("Digite o valor do Vin (em Volts): ");
    scanf_s("%f", &Vin);
    printf("\n\n");
    printf("Digite o valor do Vled (em Volts): ");
    scanf_s("%f", &Vled);
    printf("\n\n");
    printf("Digite o valor do Iled (em Amperes): ");
    scanf_s("%f", &Iled);
    printf("\n\n");

    Resistor = (Vin - Vled) / Iled; 

    printf("Vin = %.2f \n\n", Vin); 
    printf("Vled = %.2f \n\n", Vled); 
    printf("Iled = %.2f \n\n", Iled);
    printf("O Resistor para o LED tem o valor de: %.2f Ohms\n\n", Resistor); 


}

