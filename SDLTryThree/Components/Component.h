#pragma once
class Entity;

class Component
{
public:
	bool isEnabled;
	Entity* entity;

	Component(bool _isEnabled = true);
	virtual ~Component() = default;
	
	Entity* GetEntity();
	bool IsEnabled();
	void SetEnabled(bool _val);

	virtual void Update() = 0;
};

