#include "Tiger.h"   //needed if files are separate
#include <string>
#include "string"
#include <iostream>
#include <sstream>

using namespace std;

Tiger::Tiger() {
	SetX_position(300);
	SetY_position(500);
	SetWidth(5);
	SetHeight(15);
	SetStatus(2);
}

void Tiger::move_position() {
	int rd = rand() % 2;
	if (rd = 0)
	{
		if (GetX_position() + 6 > 800)
			SetX_position(GetX_position() - 6);
		else
			SetX_position(GetX_position() + 6);
	}
	else
	{
		if (GetX_position() - 6 < 0)
			SetX_position(GetX_position() + 6);
		else
			SetX_position(GetX_position() - 6);
	}

	cout << "Tiger moves to " << GetX_position() << "," << GetY_position() << " ";
}

void Tiger::fire_weapon() {
	cout << "Tiger fire weapon: ";
	if (GetStatus() > 0)
	{
		cout << "bite " << endl;
	}
	else
	{
		cout << "dead!!!!" << endl;
	}
}

void Tiger::update_status() {
	cout << "Tiger update status: ";
	if (GetStatus() > 0)
	{
		if (GetStatus() - 1 == 0)
		{
			cout << "hit, status points 0 (ROAR)" << endl;
			SetStatus(GetStatus() - 1);
		}
		else
		{
			SetStatus(GetStatus() - 1);
			cout << "hit, status points " << GetStatus() << " (roar)" << endl;
		}

	}
	else
		cout << "hit, status points 0 (ROAR)" << endl;
}
