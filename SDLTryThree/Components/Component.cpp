#include "Component.h"

Component::Component(bool _isEnabled)
{
	isEnabled = _isEnabled;
}



Entity* Component::GetEntity()
{
	return entity;
}

bool Component::IsEnabled()
{
	return isEnabled;
}

void Component::SetEnabled(bool _val)
{
	isEnabled = _val;
}
