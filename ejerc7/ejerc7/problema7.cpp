//
//  main.cpp
//  ejerc9
//
//  Created by Usuario on 8/09/18.
//  Copyright © 2018 Usuario. All rights reserved.
//

#include <iostream>
using namespace std;
int primoAlto(){
    int primos = 1;
    long int actual, divisores;
    actual = 2;
    while (primos < 7){
        actual++;
        divisores = 0;
        for (int i = 1; i <= actual; i++){
            if (actual % i == 0) divisores++;
        }
        if (divisores == 2) {
            primos++;
        }
    }
    return actual;
}
int main(){
    cout<<"avo primo es:"<<primoAlto()<<endl;
}
