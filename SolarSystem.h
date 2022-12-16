#ifndef EYE_H
#define EYE_H

#include <math.h>

#define PI 3.141592653589793238462643383279502


class SolarSystem{
	public:
		float speed = 1.0f;
		
		SolarSystem();
		~SolarSystem();

		void render();
		void draw_grid(float speed);
		void move_grid(float speed);


private:
	void draw_circle(float radius);
	void draw_rec(float size);
};

#endif