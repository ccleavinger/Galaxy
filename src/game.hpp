#pragma once

#include "draw.hpp"
#include "globals.hpp"
#include "libs/quickmath.hpp"

//----------------------------------------------------------------------------//

struct GameCamera
{
	qm::vec3 pos;
	qm::vec3 up;
	qm::vec3 center;
	qm::vec3 targetCenter;

	float dist;
	float targetDist;

	float tilt;
	float targetTilt;

	float angle;
	float targetAngle;
};

struct GameState
{
	DrawState* drawState;

	GameCamera cam;
};

//----------------------------------------------------------------------------//

bool game_init(GameState** state);
void game_quit(GameState* state);

void game_main_loop(GameState* state);