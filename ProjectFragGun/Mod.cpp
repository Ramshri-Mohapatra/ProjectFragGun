#include"Mod.h"
#include<string>
#include<vector>

using namespace std;

Mod::Mod()
{}
Mod::Mod(string& modName, double fireSpeed, double magSize, string& bulletName) :modName(modName), fireSpeed(fireSpeed), magSize(magSize),bulletName(bulletName)
{

}
string Mod::getBulletName() const

{
	return bulletName;
}
void Mod::setBulletName(std::string& newBulletName)

{
	bulletName = newBulletName;
}

string Mod::getModName() const
{
	return modName;
}

void Mod::setModName(string &newModName) 
{
	modName = newModName;
}

double Mod::getFireSpeed() const 
{
	return fireSpeed;
}

double Mod::getMagSize() const 
{
	return magSize;
}

void Mod::setFireSpeed(double newFireSpeed) 
{
	fireSpeed = newFireSpeed;
}

void Mod::setMagSize(double newMagSize) 
{
	magSize = newMagSize;
}