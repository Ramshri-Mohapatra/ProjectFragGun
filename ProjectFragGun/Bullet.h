#ifndef BULLET_H
#define BULLET_H

#include<string>

class Bullet

{
public:
	Bullet();
	Bullet(std::string &bulletName, double bulletDamage);
	std::string getBulletName() const;
	void setBulletName(std::string& newBulletName);
	double getBulletDamage() const;
	void setBulletDamage(double newDamage);

private:
	std::string bulletName ;
	double bulletDamage;
};


#endif 
