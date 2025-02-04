#pragma once

#include "pch.h"

class GameEntity
{

public:

	//Entity Functions
	virtual void Draw();
	void Move(Vector2& moveVector);

private:

	//Scale
	float m_scale;

	//Rotation radian
	float m_rotation;

	//Location on the (x, y) coordinate system
	Vector2 m_location;

	//Name of the entity image
	Texture2D* m_image;

	//Entity status
	bool m_active;

public:
	//Default constructor
	GameEntity(Texture2D* image, Vector2 coordinates = {0., 0.}, float rotation = 0., float scale = 1., bool active = true)
		: m_location(coordinates), m_scale(scale), m_rotation(rotation), m_image(image), m_active(active)
	{}

	//Destructor
	~GameEntity()
	{}


	//Getters and Setters

	float getScale() { return m_scale; }
	void   setScale(float newScale) { m_scale = newScale; }

	float getRotation() { return m_rotation; }
	void   setRotation(float newRotation) { m_rotation = newRotation; }

	Vector2 getLocation() const { return m_location; }
	void    setLocation(const Vector2& newLocation) { m_location = newLocation; }

	Texture2D* getImage() { return m_image; }
	void      setImage(Texture2D* newImage) { m_image = newImage; }

	bool getStatus() { return m_active; }
	void setStatus(bool status) { m_active = status; }
};