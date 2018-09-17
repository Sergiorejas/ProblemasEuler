//
//  main.cpp
//  problema10
//
//  Created by Usuario on 13/09/18.
//  Copyright © 2018 Usuario. All rights reserved.
//

#include <iostream>
using namespace std;
int sumaprimos(){
    //int i=2,aux=0;contador=0,j=1;
    int i=2,aux=0,contador,j;
    //En el while tienes que recorrer hasta "numero" y en cada vuelta tienes que preguntar si es divisor de numero o no
    while(i<2000000){
        j=1;
        contador = 0;
        while(j<=i){
            if(i%j==0)
                contador+=1;
            j++;
        }
        if(contador==2)
            aux=aux+i;
        i++;
    }
    return aux;
}

int main(){
    cout<<"LA suma de primos hasta 2 millones es: "<<sumaprimos()<<endl;
    return 0;
}
