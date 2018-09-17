//
//  main.cpp
//  fibonacci
//
//  Created by Usuario on 10/09/18.
//  Copyright © 2018 Usuario. All rights reserved.
//

#include <iostream>
using namespace std;
int fibonacci(){
    int a,b;
    a=1;
    b=1;
    int suma = 0;
    while(b < 4000000){
        b=a+b;
        a=b-a;
        if (b % 2 == 0 ) suma = suma +b;
    }
    return suma;
}
int main(){
    cout<<"La suma es es: "<<fibonacci()<<endl;
    return 0;
}
    
