#include "Bomber.h"   //needed if files are separate
#include <string>
#include "string"
#include <iostream>
#include <sstream>

using namespace std;

Bomber::Bomber() {
	SetX_position(100);
	SetY_position(100);
	SetWidth(3);
	SetHeight(10);
	SetStatus(8);
	SetAmmo(50);
}

void Bomber::move_position() {
	int rd = rand() % 2;
	double move = rand() % 15 + 15;
	if (rd = 0)
	{
		if (GetX_position() + move > 800)
			SetX_position(GetX_position() - move);
		else
			SetX_position(GetX_position() + move);
	}
	else
	{
		if (GetX_position() - move < 0)
			SetX_position(GetX_position() + move);
		else
			SetX_position(GetX_position() - move);
	}

	cout << "Bomber moves to " << GetX_position() << "," << GetY_position() << " ";
}

void Bomber::fire_weapon() {
	cout << "Bomber fire weapon: ";
	if (GetStatus() > 0)
	{
		cout << "bomb ";
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

void Bomber::update_status() {
	cout << "Bomber update status: ";
	if (GetStatus() > 0)
	{
		if (GetStatus() - 1 == 0)
		{
			cout << "hit, status points 0 (BOOOOM)" << endl;
			SetStatus(GetStatus() - 1);
		}
		else
		{
			SetStatus(GetStatus() - 1);
			cout << "hit, status points " << GetStatus() << " (ping)" << endl;
		}

	}
	else
		cout << "hit, status points 0 (BOOOOM)" << endl;
}
