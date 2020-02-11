#include "Robot.h"   //needed if files are separate
#include <string>
#include "string"
#include <iostream>
#include <sstream>

using namespace std;

Robot::Robot() {
	SetX_position(500);
	SetY_position(500);
	SetWidth(3);
	SetHeight(10);
	SetStatus(5);
	SetAmmo(10);
}

void Robot::move_position() {
	int rd = rand() % 2;
	if (rd = 0)
	{
		if (GetX_position() + 3 > 800)
			SetX_position(GetX_position() - 3);
		else
			SetX_position(GetX_position() + 3);
	}
	else
	{
		if (GetX_position() - 3 < 0)
			SetX_position(GetX_position() + 3);
		else
			SetX_position(GetX_position() - 3);
	}

	cout << "Robot moves to " << GetX_position() << "," << GetY_position() << " ";
}

void Robot::fire_weapon() {
	cout << "Robot fire weapon: ";
	if (GetStatus() > 0)
	{
		cout << "gun ";
		if (GetAmmo() > 0)
		{
			SetAmmo(GetAmmo() - 1);
			cout << "(" << GetAmmo() << " left)" << endl;
		}
		else
		{
			cout << "No ammo left" << endl;
		}
	}
	else
	{
		cout << "dead!!!!" << endl;
	}
}

void Robot::update_status() {
	cout << "Robot update status: ";
	if (GetStatus() > 0)
	{
		if (GetStatus() - 1 == 0)
		{
			cout << "hit, status points 0 (BZZZZZZZ)" << endl;
			SetStatus(GetStatus() - 1);
		}
		else
		{
			SetStatus(GetStatus() - 1);
			cout << "hit, status points " << GetStatus() << " (beep)" << endl;
		}

	}
	else
		cout << "hit, status points 0 (BZZZZZZZZ)" << endl;
}