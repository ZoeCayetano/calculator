//************************************************************************************************************** 
// FILE: Kalk.cpp
//
// DESCRIPTION: Implements the functions that performs the operations of the Kalk language.
//
// COURSE: CSE100 Principles of Programming with C++, Spring 2016
//
// AUTHOR
// Zoe Cayetano            (zcayetan@asu.edu)
//**************************************************************************************************************
#include <cmath>
#include <iostream>
#include <string>
#include "Kalk.hpp"  

using namespace std;
double gRegA, gRegB, gRegC;

void kalk_add();
void kalk_atob();
void kalk_atoc();
void kalk_btoa();
void kalk_btoc();
void kalk_ctoa();
void kalk_ctob();
void kalk_display();
void kalk_div();
void kalk_load();
void kalk_mul();
void kalk_power();
string kalk_read_operator(string sPrompt);
void kalk_sqrt();
void kalk_sub();

void kalk_add()
{
    gRegA = gRegA + gRegB;
}

void kalk_atob()
{
    gRegB = gRegA;
}

void kalk_atoc()
{
    gRegC = gRegA;
}

void kalk_btoa()
{
    gRegA = gRegB;
}

void kalk_btoc()
{
    gRegC = gRegB;
}

void kalk_ctoa()
{
    gRegA = gRegC;
}

void kalk_ctob()
{
    gRegB = gRegC;
}

void kalk_display()
{
    char chReg;
    cin >> chReg;
    
    if (chReg == 'a') {
        cout << gRegA << endl;
    } else if (chReg == 'b') {
        cout << gRegB << endl;
    } else if (chReg == 'c') {
        cout << gRegC << endl;
    } else {
        cout << "Invalid register operand: " << chReg << endl;
    }
    
}

void kalk_div()
{
    gRegA = gRegA / gRegB;
}

void kalk_init()
{
    gRegA = 0;
    gRegB = 0;
    gRegC = 0;
}

void kalk_interpret()
{
    string oper;
    oper = kalk_read_operator("? ");
    
    while (oper != "q") {
        if (oper == "+") {
            kalk_add();

        } else if (oper == "atob") {
            kalk_atob();

        } else if (oper == "atoc") {
            kalk_atoc();
        
        } else if (oper == "btoa") {
            kalk_btoa();
        
        } else if (oper == "btoc") {
            kalk_btoc();
            
        } else if (oper == "ctoa") {
            kalk_ctoa();
            
        } else if (oper == "ctob") {
            kalk_ctob();
            
        } else if (oper == "d") {
            kalk_display();
            
        } else if (oper == "/") {
            kalk_div();
            
        } else if (oper == "l") {
            kalk_load();
            
        } else if (oper == "*") {
            kalk_mul();
            
        } else if (oper == "^") {
            kalk_power();
            
        } else if (oper == "&") {
            kalk_sqrt();
            
        } else if (oper == "-") {
            kalk_sub();
        
        } else {
            cout << "Invalid operator: " << oper << endl;
        }
        oper = kalk_read_operator("? ");
    }
}

void kalk_load()
{
    char chReg;
    cin >> chReg;
    
    if (chReg == 'a') {
        cin >> gRegA;
        
    } else if (chReg == 'b') {
        cin >> gRegB;
        
    } else if (chReg == 'c') {
        cin >> gRegC;
        
    } else {
        cout << "Invalid register operand: " << endl;
    }
}

void kalk_mul()
{
    gRegA = gRegA * gRegB;
}

void kalk_power()
{
    gRegA = pow (gRegA, gRegB);
}

string kalk_read_operator(string pPrompt)
{
    cout << pPrompt;
    string oper;
    cin >> oper;
    return oper;
}

void kalk_sqrt()
{
    gRegA = sqrt(gRegA);
}

void kalk_sub()
{
    gRegA = gRegA - gRegB;
}
