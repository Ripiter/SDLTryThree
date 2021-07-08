#include "Player.h"

Player::Player(Renderer renderer, const char* _name) : RenderEntity(renderer, _name)
{

}

Player::~Player()
{
}

void Player::Awake()
{
}

void Player::Start()
{
	transform->pos->x = 420;
	transform->pos->y = 420;
}

void Player::Update()
{
	if (Input::ButtonDown(InputKey::a)) {
		std::cout << "A\n";
	}
}
