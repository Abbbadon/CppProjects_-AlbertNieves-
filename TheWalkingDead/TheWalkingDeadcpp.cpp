﻿#include<iostream>​#include<string>​#include<ctime>​enum class Weapons { FISTS, GUN, SHOTGUN, REVOLVER, SNIPER, MACHINE_GUN, MAX };class Zombie;class Player{public:	Weapons weapon;	float precision;	int life;	bool isAlive()	{		return life > 0;	}	void attack(Zombie &z) 	{		z.life = z.life - static_cast<int> (Player::weapon) * Player::precision;	};	Player() :			weapon(static_cast<Weapons>(rand() % static_cast<int>(Weapons::MAX))),		precision((rand() % 10) / 10.f),		life(100) {};	Player(const Weapons &t_weapon, float t_precision, int t_life) :		weapon(t_weapon),		precision(t_precision),		life(t_life) {};	void attack(Zombie &zombie) const;	bool isAlive() const;};class Zombie{public:	int distanceToPlayer;	float speed;	float damage;	int life;	void attack(Player&p)	{		if (distanceToPlayer == 0) {			p.life = p.life - damage;		}		else 		{			--distanceToPlayer;		}	};};