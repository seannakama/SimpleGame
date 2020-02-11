#pragma once
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>


using namespace std;
class Enemy {
private:
	double x_position;
	double y_position;
	double width;
	double height;
	double status;
	int ammo;

protected:
	void SetAmmo(int a);
	void SetX_position(double y);
	void SetY_position(double y);
	void SetWidth(double w);
	void SetHeight(double h);
	void SetStatus(double s);

	int GetAmmo();
	double GetX_position();
	double GetY_position();
	double GetWidth();
	double GetHeight();
	double GetStatus();

public:
	virtual void move_position() = 0;
	virtual void fire_weapon() = 0;
	virtual void update_status() = 0;
};