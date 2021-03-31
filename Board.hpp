#include <string>
#include <iostream>
#include <climits>
#include <unordered_map>
#include <bits/stdc++.h>
#include <utility>
#include "Direction.hpp"
using namespace std;

namespace ariel{
    class Board{
        private:
            map<pair<unsigned int, unsigned int>, char> table;
            unsigned int limitColRight = 0;
            unsigned int limitColLeft = UINT_MAX;
            unsigned int limitRowDown = 0;
            unsigned int limitRowUp = UINT_MAX;
        

    public:
        Board(){table[{0, 0}] = '_';}
        ~Board(){}
        void post(unsigned int row, unsigned int col, ariel::Direction dir, string message);
        string read(unsigned int row, unsigned int col, ariel::Direction dir, unsigned int length);
        void show();
    };
}