#include<iostream>
#include<string>
#include<ctime>


enum class Weapon{FISTS,GUN,SHOTGUN,REVOLVER,SNIPER,MACHINE_GUN,MAX};

class Zombie;


class Player {
public:
	Weapon weapon;
	float precision;
	int life;

	int weaponDamage() {
		switch (weapon)
		{
		case Weapon::FISTS: return 0;
		case Weapon::GUN: return 1;
		case Weapon::SHOTGUN:return 2;
		case Weapon::REVOLVER:return 3;
		case Weapon::SNIPER:return 4;
		case Weapon::MACHINE_GUN:return 5;
		default: break;


		}




	}
public:
	void attack(Zombie &zombie) {
		zombie.life = zombie.life - weaponDamage()*precision;



	}
	
	Player::Player() {
		weapon = Weapon(rand() % static_cast<int>(Weapon::MAX));
		precision = (rand()%10)/10;
		life = 100; 

	}

	Player::Player(Weapon t_weapon, float t_precision, int t_life) {
		weapon = t_weapon;
		precision = t_precision;
		life = t_life;


	}

	bool isAlive() {


	}
	



};

class Zombie {
public:
	int distanceToPlayer;
	float speed;
	float damage;
	int life;
	Zombie::Zombie() {
    
		distanceToPlayer = rand() % 180 + 20;
		speed = rand() % 20;
		damage = rand() % 20;




	}


	void attack(Player & player) {
		if (distanceToPlayer <= 0)
		{
			player.life = player.life - damage;

	 }



	}

	bool isAlive() {

		return life > 0;

};



int main() {

	srand(time(nullptr));
	Player player;
	const int NUMZOMBIES = 10;
	Zombie arr[NUMZOMBIES];
	bool zombiesAreAlive = true; 

	do {
		for (int i = 0; i < NUMZOMBIES; i++)
		{

		}


	} while (player.isAlive() && zombie.isAlive());





}