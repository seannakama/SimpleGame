
#pragma once
#include <iostream>
#include <string>
#include "Enemy.h"

using namespace std;
class Robot :public Enemy {
public:
	Robot();
	void move_position();
	void fire_weapon();
	void update_status();
};