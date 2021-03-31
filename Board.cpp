#include "Board.hpp"
#include "Direction.hpp"
#include <iostream>
#include <string>
#include <climits>
#include <unordered_map>
#include <utility>
#include <bits/stdc++.h>
using namespace std;
using namespace ariel;

void Board::post(unsigned int row, unsigned int col, Direction dir, string message){
    unsigned int i=0;
    unsigned int j=0;
    switch (dir){
    case Direction::Horizontal:
        while (message[i]!='\0'){
            table[{row, col+i}] = message[i];
            i++;
        }
        if (col < limitColLeft) {
            limitColLeft = col;
        }
        if(limitColRight < col+i){
            limitColRight = col+i;
        }
        if(row < limitRowUp){
            limitRowUp = row;
        }
        if (limitRowDown < row){
            limitRowDown = row;
        }
        break;
    
     case Direction::Vertical:
        while (message[j]!='\0'){
            table[{row+j, col}] = message[j];
            j++;
        }
        if (col < limitColLeft) {
            limitColLeft = col;
        }
        if(limitColRight < col){
            limitColRight = col;
        }
        if(row < limitRowUp){
            limitRowUp = row;
        }
        if (limitRowDown < row+j){
            limitRowDown = row+j;
        }
        break;
    }
}

string Board::read(unsigned int row, unsigned int col, Direction dir, unsigned int length){
    string message;
    switch (dir){
    case Direction::Horizontal:
        for (unsigned int i = 0; i < length; i++){
            if (table.find({row, col+i}) == table.end()){
                message += '_';
            }
            else{
                message += table[{row, col+i}]; 
            } 
        }
        break;
    
    case Direction::Vertical:
        for (unsigned int i = 0; i < length; i++){
            if (table.find({row+i, col}) == table.end()){
                message += '_';
            }
            else{
                message += table[{row+i, col}];  
            }
        }
        break;
    }
    return message;
}

void Board::show(){
    for (unsigned int i = limitRowUp; i < limitRowDown; i++){
        for (unsigned int j = limitColLeft; j < limitColRight; j++){
            if (table.find({i, j}) == table.end()){
                cout << "_";
            }
            else{
                cout << table[{i, j}];
            }
        }
        cout << "\n";       
    }
    cout << " " << endl;
}