//
//  main.cpp
//  ejerc9
//
//  Created by Usuario on 16/09/18.
//  Copyright © 2018 Usuario. All rights reserved.
//
#include <iostream>
using namespace std;
int tripletepitagorico(){
    int a=1,b=1,c=1;
    while (a <= 1000){
        b=1;c=0;
        while (b <= 1000){
            c=1;
            while (c <= 1000){
                if(a+b+c==1000 && a*a + b*b == c*c) return a*b*c;
                //cout<<a<<" "<<b<<" "<<c<<endl;
                c++;
            }
            b++;
        }
        a++;
    }
    return 0;
}
int main(){
    cout<<"El producto es: "<<tripletepitagorico()<<endl;
}

