//
//  main.cpp
//  problema9
//
//  Created by Usuario on 8/09/18.
//  Copyright © 2018 Usuario. All rights reserved.
//

#include <iostream>
using namespace std;
int tripletepitagorico(){
    int a=0,b=0,c=0;
    while (a <= 1000){
        while (b <= 1000){
            while (c <= 1000){
                if(a+b+c==1000 && a*a + b*b == c*c) return a*b*c;
                cout<<a<<" "<<b<<" "<<c<<endl;
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
