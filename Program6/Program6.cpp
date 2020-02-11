/***************************************************************
*file: Program6.cpp
*author: S. Nakama
*class: CS 2560 – C++
*assignment: Program 6
*date last modified: 12/4/2019
*
*purpose: This program uses polymorphism and virtual functions to implement an
*inheritance hierarchy. The base class Enemy is the parent class to the child 
*classes: Tiger, Jet, and Robot. Every class will consists of variables that will
*control positions, dimensions, and actions
****************************************************************/
#include <conio.h>
#include <iostream>
#include "Enemy.h"
#include "Tiger.h"
#include "Bomber.h"
#include "Robot.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

#include <string>
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	const int max_enemy = 20;
	Enemy* enemy_ptr[max_enemy];
	int num_enemy = 3;

	Tiger* tiger = new Tiger();
	Bomber* bomber = new Bomber();
	Robot* robot = new Robot();



	enemy_ptr[0] = tiger;
	enemy_ptr[1] = bomber;
	enemy_ptr[2] = robot;


	int rd;
	int rd2;

	while (true)
	{
		for (int i = 0; i < num_enemy; i++) {
			enemy_ptr[i]->move_position();
		}
		cout << endl;
		rd = rand() % num_enemy;
		enemy_ptr[rd]->fire_weapon();
		rd2 = rand() % num_enemy;
		enemy_ptr[rd2]->update_status();
		_getch();
		cout << endl;
	}
	return 0;
};