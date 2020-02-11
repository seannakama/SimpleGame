#pragma once
#include <iostream>
#include <string>
#include "Enemy.h"

using namespace std;
class Bomber :public Enemy {
public:
	Bomber();
	void move_position();
	void fire_weapon();
	void update_status();
};