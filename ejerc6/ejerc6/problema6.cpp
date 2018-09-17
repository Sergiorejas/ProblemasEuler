//
//  main.cpp
//  ejerc8
//
//  Created by Usuario on 10/09/18.
//  Copyright © 2018 Usuario. All rights reserved.
//

#include <iostream>
using namespace std;
int difcuadrado(){
    int a=0,b=0,c=0;
    for(int i=1;i<=100;i++){
        a=a+i*i;
        b=i+b;
    }
    c=b*b-a;
    return c;
}
int main(){
    cout<<"La diferencia es: "<<difcuadrado()<<endl;
}
