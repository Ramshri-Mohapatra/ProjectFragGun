#include"Bullet.h"
#include<vector>
#include<string>

using namespace std;

Bullet::Bullet() : bulletName("default"), bulletDamage(20)
{

}

Bullet::Bullet(string &bulletName, double bulletDamage) :bulletName(bulletName), bulletDamage(bulletDamage)
{

}

string Bullet::getBulletName() const
{
	return bulletName;
}

void Bullet::setBulletName(string &newBulletName)
{
	bulletName = newBulletName;
}

double Bullet::getBulletDamage() const
{
	return bulletDamage;
}

void Bullet::setBulletDamage(double newDamage)
{
	bulletDamage = newDamage;
}