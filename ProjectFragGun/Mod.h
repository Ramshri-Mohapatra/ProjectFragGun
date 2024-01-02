#ifndef MOD_H
#define MOD_H

#include<string>
#include"Bullet.h"

class Mod
{
public:
	Mod();
	Mod(std::string& modName, double fireSpeed, double magSize, std::string& bulletName);
	std::string getModName() const;
	std::string getBulletName() const;
	void setBulletName(std::string& newBulletName);
	void setModName(std::string &newModName);
	double getFireSpeed() const;
	double getMagSize() const;
	void setFireSpeed(double fireSpeed);
	void setMagSize(double magSize);

private:
	std::string modName;
	double fireSpeed;
	double magSize;
	std::string bulletName;
};


#endif 

