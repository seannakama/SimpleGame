#pragma once
#include <iostream>
#include <string>
#include "Enemy.h"

using namespace std;
class Tiger :public Enemy {
public:
	Tiger();
	void move_position();
	void fire_weapon();
	void update_status();
};