#include "Entity.h"

Entity::Entity(const char* _entityName, bool _isEnabled)
{
	entityName = _entityName;
	isEnabled = _isEnabled;
	InitTransform();
}

Entity::~Entity()
{
	RemoveAllComponents();
}

void Entity::AddComponent(Component* _comp)
{
	_comp->entity = this;
	components.push_back(_comp);
}

void Entity::Update()
{
	for (int i = 0; i < components.size(); i++)
	{
		components.at(i)->Update();
	}
}


void Entity::RemoveAllComponents()
{
	for (Component* comp : components) {
		delete comp;
	}

	components.clear();
}

void Entity::InitTransform()
{
	transform = new Transform();
	transform->pos = new Vector2();

	AddComponent(transform);
}
