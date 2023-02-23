#include"first.h"
#include<iostream>

first::first(){
    
}

first::first(int x,int y){
    set_a(x);
    set_b(y);
}

int first::sum(){
    return a+b;
}

void first::set_a(int n){
    a = n;
}

void first::set_b(int n){
    b = n;
}

int first::get_a(int n){
    return a;
}

int first::get_b(int n){
    return b;
}