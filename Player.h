#pragma once
class Player{
public:
	//Player();
	//~Player();
	int image[6];
	int x=0, y=0;
	int spare;
	int i=0;
	void Loadgraphic();
	void Drawgraphic();
	void Move();
};