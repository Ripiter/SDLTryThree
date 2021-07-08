#pragma once
#include <string>

class Vector2
{
public:
	float x = 0;
	float y = 0;

	std::string GetValueAsString() {
		std::string s = "X: " + std::to_string(x) + " y: " + std::to_string(y);

		return s;
	}
};

