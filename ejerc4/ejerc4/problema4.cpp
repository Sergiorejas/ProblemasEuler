//
//  main.cpp
//  ejerc7
//
//  Created by Usuario on 10/09/18.
//  Copyright © 2018 Usuario. All rights reserved.
//

#include <iostream>
using namespace std;
int palindromo (){
    int palindromo,temp,aux,b = 0;
    int mayor = 0;
    for (int i = 100; i< 999; i++){
        for (int j = 100; j < 999; j++){
            palindromo = i * j;
            
            //Voltear numero
            temp = palindromo;
            b=0;
            //palindromo = 1532
            //temp = 0
            
            while ( temp > 0){
                aux = temp % 10;   //aux = 2
                temp = temp / 10;  //temp = 1
                b = b * 10 + aux;  // b = 32
            }
            
            //Verificar  si es palindromo
            if (palindromo==b && palindromo > mayor ) {
                mayor = palindromo;
            }
            
        }
    }
    return mayor;
}
int main(){
    cout<<palindromo()<<endl;
}
