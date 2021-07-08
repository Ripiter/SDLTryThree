#pragma once
#include "Entities/RenderEntity.h"
#include "Utility/Input.h"
#include <iostream>
class Player : public RenderEntity
{
public:
	Player(Renderer renderer, const char* _name);
	~Player() override;
	void Awake() override;
	void Start() override;
	void Update() override;
};

