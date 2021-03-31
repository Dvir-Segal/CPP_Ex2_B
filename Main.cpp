/**
 * Demo program for message-board exercise.
 * 
 * Author: Erel Segal-Halevi
 * Since : 2021-03
 */

#include "Board.hpp"
#include "Direction.hpp"
using ariel::Direction;

#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
	ariel::Board board;
	board.post(100, 101, Direction::Horizontal, "node.js");
    board.post(100 ,100 ,Direction::Vertical, "angular");
    board.post(101, 104, Direction::Horizontal, "java");
    board.post(103, 110, Direction::Horizontal, "python");
    board.post(104, 107, Direction::Vertical, "cpp");

	board.show();

    board.post(150, 151, Direction::Horizontal, "node.js");
    board.post(150 ,150 ,Direction::Vertical, "angular");
    board.post(151, 154, Direction::Horizontal, "java");
    board.post(153, 160, Direction::Horizontal, "python");
    board.post(154, 157, Direction::Vertical, "cpp");
    board.post(150, 157, Direction::Vertical, "script");
    board.post(152, 150, Direction::Vertical, "sharp");
    board.post(153, 158, Direction::Horizontal, "html");
    board.post(150, 152, Direction::Horizontal, "oop");

    board.show();
}

