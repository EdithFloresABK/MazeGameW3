#pragma once
#include "PlacableActor.h"

class Rock : public PlacableActor
{
public:
	Rock(int x, int y)
		: PlacableActor(x, y)
	{

	}

	virtual ActorType GetType() override { return ActorType::Rock; }
	virtual void Draw() override;
};