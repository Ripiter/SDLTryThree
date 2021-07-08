#include "RenderEntity.h"

RenderEntity::RenderEntity(Renderer _renderer, const char* _entityName) : Entity(_entityName)
{
	renderer = _renderer;
	//Entity::Entity(_entityName);
}
