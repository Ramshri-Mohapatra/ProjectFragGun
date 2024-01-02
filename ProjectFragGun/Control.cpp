#include "Gun.h"
#include"Mod.h"
#include"Bullet.h"
#include<iostream>
#include<fstream>
#include<algorithm>
#include<map>
#include <sstream>

using namespace std;

void readMod(istream& in, map<string, Mod>& modList)
{
	string line;

	while (getline(in, line))
	{
		string modName;
		string bulletName;
		double fireSpeed;
		double magSize;
		istringstream line_s(line);

		if (line_s >> modName >> fireSpeed >> magSize >> bulletName)
		{
			Mod& mod = modList[modName];
			mod.setModName(modName);
			mod.setFireSpeed(fireSpeed);
			mod.setMagSize(magSize);
			mod.setBulletName(bulletName);
			
		}

	}
}

void readBullet(istream& in, map<string, Bullet>& bulletList)
{
	string line;

	while (getline(in, line))
	{
		string bulletName;
		double bulletDamage;
		istringstream line_s(line);

		if (line_s >> bulletName >> bulletDamage)
		{
			Bullet& bullet = bulletList[bulletName];
			bullet.setBulletName(bulletName);
			bullet.setBulletDamage(bulletDamage);
		}

	}
}

int main()

{
	ifstream modFile("Mod.txt");
	map<string, Mod> modList;

	readMod(modFile, modList);

	ifstream bulletFile("Bullet.txt");
	map<string, Bullet> bulletList;

	readBullet(bulletFile, bulletList);

	string modName;

	Gun myGun("Weapon 117-X", bulletList["default"], modList["default"], 20, 100, 30);

	char userInput;

	cout << "Using weapon:" << " " << myGun.getName() << endl;
	cout << "Enter x to shoot" << endl;
	while(true)
	{
		
		cin >> userInput;

		if(userInput == 'Q' || userInput == 'q')
		{
			break;
		}
		else if(userInput == 'X' || userInput == 'x')
		{
			if(myGun.getBulletCount() > 0)
			{
				myGun.setBulletCount(myGun.getBulletCount() - 1);
				cout << "Fire! Bullet count :" << " " << myGun.getBulletCount() << endl;

			}
			else
			{ 
				myGun.setBulletCount(myGun.getBulletCount() + myGun.getMagSize());
				cout << "Reload" << endl;
			}
		}
		else if(userInput == 'M' || userInput == 'm')
		{
			cout << "Enter Mod" << endl;
			cin >> modName;
			Mod mod = modList[modName];
			Bullet bullet = bulletList[mod.getBulletName()];

			myGun.setMod(mod);
			myGun.setBullet(bullet);
			myGun.setFireSpeed(myGun.getFireSpeed() + mod.getFireSpeed());
			myGun.setMagSize(myGun.getMagSize() + mod.getMagSize());
			myGun.setBulletCount(myGun.getBulletCount() + mod.getMagSize());

			cout << mod.getModName() << " loaded" << endl;
			
		}
		else if(userInput == 'P' || userInput == 'p')
		
		{
			cout << "Mod Name" << " " << myGun.getMod().getModName() << endl;
			cout << "FireSpeed" << " " << myGun.getFireSpeed() << endl;
			cout << "MagSize" << " " << myGun.getMagSize() << endl;
			cout << "BulletType" << " " << myGun.getBullet().getBulletName() << " " << myGun.getBullet().getBulletDamage() << endl;
		}
		else
		{
			cout << "Invalid input. Try again." << endl;
		}

	}
	cout << "Exiting game." << endl;

	//cout << myGun.getBullet().getBulletName();

	return 0;

}