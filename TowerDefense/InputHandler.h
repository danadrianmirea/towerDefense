#pragma once
#include "pch.h"
#include "Clickable.h"

class InputHandler
{
public:
	static InputHandler& GetInstance() 
	{
		static InputHandler instance;
		return instance;
	}
	~InputHandler(){
		entities.clear();
	}
	InputHandler(InputHandler const&) = delete;
	void operator=(InputHandler const&) = delete;
	void Register(Clickable& entity);
	void Unregister(Clickable& entity);
	void Clear();
	void HandleClick(Vector2 mousePos);
private:
	InputHandler(){};
	std::list<Clickable*> entities;
};
