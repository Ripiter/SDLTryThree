#pragma once
#include "Entity.h"
#include "../Renderer/Renderer.h"

class RenderEntity : public Entity 
{
private:
	Renderer renderer;
public:
	RenderEntity(Renderer _renderer, const char* _name);
};

