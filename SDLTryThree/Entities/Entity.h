#pragma once
#include <vector>
#include "../Components/Component.h"
#include "../Components/Transform.h"

class Entity
{
	std::vector<Component*> components;
	bool isEnabled;
	const char* entityName;

	void RemoveAllComponents();
	void InitTransform();

public:
	Transform* transform;

public:
	Entity(const char* _entityName, bool _isEnabled = true);
	virtual ~Entity();
	inline bool IsEnabled() { return isEnabled; };
	inline void SetEnabled(bool _val) { isEnabled = _val; }
	inline const char* GetEntityName() { return entityName; }
	void AddComponent(Component* _comp);

	// init objects
	virtual void Awake() = 0;
	// link all the objects
	virtual void Start() = 0;
	virtual void Update();


	template <typename T>
	inline T* GetComponent()
    {
		Component* c;

		for (auto* comp : components) {
			c = dynamic_cast<T*>(comp);

			if (c)
				return (T*)comp;
		}
		return nullptr;
	}

	template <typename T>
	inline void DeleteComponent() {
		Component* c;

		for (int i = 0; i < components.size(); i++)
		{
			c = dynamic_cast<T*>(components.at(i));

			if (c) {
				components.erase(components.begin() + i);
				delete c;
			}
		}
	}
};

