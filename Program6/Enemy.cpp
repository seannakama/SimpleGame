#include "Enemy.h"
#include <string>
#include <iostream>
#include <sstream>


void Enemy::SetX_position(double x) {
	x_position = x;
}

void Enemy::SetY_position(double y) {
	y_position = y;
}

void Enemy::SetWidth(double w) {
	width = w;
}

void Enemy::SetHeight(double h) {
	height = h;
}

void Enemy::SetStatus(double s) {
	status = s;
}

void Enemy::SetAmmo(int a) {
	ammo = a;
}

double Enemy::GetX_position() {
	return x_position;
}

double Enemy::GetY_position() {
	return y_position;
}

double Enemy::GetWidth() {
	return width;
}

double Enemy::GetHeight() {
	return height;
}

double Enemy::GetStatus() {
	return status;
}

int Enemy::GetAmmo() {
	return ammo;
}