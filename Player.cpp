#include "DxLib.h"
#include "Player.h"
#include "GetKey.h"

GetKey c_getkey;
void Player::Loadgraphic()
{
	LoadDivGraph("image/animeplayer.bmp", 6, 3, 2, 30, 45, image);
}

void Player::Move()
{
	if ((c_getkey.Key_return(KEY_INPUT_A)) > 0)
	{
		x--;
	}
	if ((c_getkey.Key_return(KEY_INPUT_D)) > 0)
	{
		x++;
	}
	if ((c_getkey.Key_return(KEY_INPUT_W)) > 0)
	{
		y--;
	}
	if ((c_getkey.Key_return(KEY_INPUT_S)) > 0)
	{
		y++;
	}
}

void Player::Drawgraphic()
{
	DrawGraph(240 + x, 320 + y, image[i],TRUE);
	i++;
	if (i == 5)
	{
		i = 0;
	}
}

