#ifndef GUN_H
#define GUN_H

#include<iostream>
#include<string>
#include"Bullet.h"
#include "Mod.h"

class Gun
{
public:
	Gun(const std::string &name, Bullet &bullet, Mod &mod, double bulletCount, double fireSpeed, double magSize);
	const std::string& getName() const;
	void setMod(Mod &newMod);
	void setBullet(Bullet &bullet);
	double getBulletCount() const;
	void setBulletCount(double newBulletCount);
	double getFireSpeed() const;
	double getMagSize() const;
	void setFireSpeed(double newFireSpeed);
	void setMagSize(double newMagSize);
	Bullet getBullet() const;
	Mod getMod() const;

private:
	std::string gunName = "Weapon 117-X";
	Bullet bullet;
	Mod mod;
	double bulletCount = 10;
	double fireSpeed = 100;
	double magSize = 30;
};


#endif 

