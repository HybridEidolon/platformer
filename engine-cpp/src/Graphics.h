#pragma once

#include "Color.h"

class AABB;

class Graphics {
public:
	Graphics();
	void setColor(const Color& c);
	void drawRect(float x, float y, float w, float h);
	void drawRect(const AABB& r);
	void fillRect(float x, float y, float w, float h);
	void fillRect(const AABB& r);

private:
	void _setGlColor();
	Color color;
};