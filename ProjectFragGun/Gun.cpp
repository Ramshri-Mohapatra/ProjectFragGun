#include"Gun.h"
#include<vector>
#include<string>

using namespace std;

Gun::Gun(const string &name, Bullet &bullet, Mod &mod, double bc, double fs, double ms) 
	: gunName(name), bullet(bullet), mod(mod), bulletCount(bc), fireSpeed(fs), magSize(ms)
{
	
}

const string& Gun::getName() const
{
	return gunName;
}

void Gun::setMod(Mod& newMod)
{
	mod = newMod;
}

void Gun::setBullet(Bullet& newBullet)
{
	bullet = newBullet;
}

double Gun::getBulletCount() const
{
	return bulletCount;
}

void Gun::setBulletCount(double newBulletCount)
{
	bulletCount = newBulletCount;
}

double Gun::getFireSpeed() const
{
	return fireSpeed;
}

double Gun::getMagSize() const
{
	return magSize;
}

void Gun::setFireSpeed(double newfireSpeed)
{
	fireSpeed = newfireSpeed;
}

void Gun::setMagSize(double newMagSize)
{
	magSize = newMagSize;

}

Bullet Gun::getBullet() const
{
	return bullet;
}

Mod Gun::getMod() const
{
	return mod;
}