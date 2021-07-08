#pragma once
#include "../Utility/Vector2.h"
#include "Component.h"

class Transform : public Component
{
public:
	Vector2* pos;
	float scaleX, scaleY;
	Transform();
	virtual ~Transform();

	// Inherited via Component
	virtual void Update();
};

