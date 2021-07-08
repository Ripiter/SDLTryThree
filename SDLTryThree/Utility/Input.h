#pragma once

enum class InputKey {
	a = 18,
	s = 19,
	defaultKey = 0
};

class Input
{
private:
	static InputKey key;
public:
	static bool ButtonDown(InputKey _key);
};


