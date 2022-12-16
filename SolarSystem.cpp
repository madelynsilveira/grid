#include <FL/gl.h>
#include <FL/glut.h>
#include "SolarSystem.h"
#include "iostream"

#define SEGMENTS 20

SolarSystem::SolarSystem(){

}

SolarSystem::~SolarSystem(){

}

// Render this with push and pop operations
// or alternatively implement helper functions
// for each of the planets with parameters.
void SolarSystem::render(){
	
	draw_grid(speed);

	if (speed >= 3.0f) speed = 1.0f;
	speed *= 1.005;
	// std::cout << "speed: " << speed << " \n" ;


	// reset speed it just keeps getting bigger
	// replace the squares that go away with how many
}


void SolarSystem::draw_rec(float size) {
	// glDisable(GL_LIGHTING);
	glPushMatrix();
	// if (size >= 2.0f) size = 1.0f;


		glBegin(GL_LINES);
		glColor4f(0.33f, 0.95f, 0.98f, 0.8f);

		float fix = 0.2;
		float x = 0.7f * fix;
		float y = 0.4f * fix;
		float z = 0.2f * fix; 
		float distance = 2.0f;
		float xd, yd, zd;

		// fixed
		if (size != 1) {
			glVertex3f(-x, y, z); 
			glVertex3f(x, y, z); 

			glVertex3f(x, y, z); 
			glVertex3f(x, -y, -z); 

			glVertex3f(x, -y, -z); 
			glVertex3f(-x, -y, -z); 

			glVertex3f(-x, -y, -z); 
			glVertex3f(-x, y, z); 

			// lines
			// glVertex3f(-x, y, z); 
			// glVertex3f(-xd, yd, zd); 

			// glVertex3f(x, y, z); 
			// glVertex3f(xd, yd, zd); 

			// glVertex3f(x, -y, -z); 
			// glVertex3f(xd, -yd, -zd); 

			// glVertex3f(-x, -y, -z); 
			// glVertex3f(-xd, -yd, -zd); 
		}


		// moving
		 x = 0.7f * size;
		 y = 0.4f * size;
		 z = 0.2f * size;

		// rectangles
		glVertex3f(-x, y, z); 
		glVertex3f(x, y, z); 

		glVertex3f(x, y, z); 
		glVertex3f(x, -y, -z); 

		glVertex3f(x, -y, -z); 
		glVertex3f(-x, -y, -z); 

		glVertex3f(-x, -y, -z); 
		glVertex3f(-x, y, z); 

		// lines
		xd = x * distance; 
		yd = y * distance; 
		zd = z * distance;
		
		glVertex3f(-x, y, z); 
		glVertex3f(-xd, yd, zd); 

		glVertex3f(x, y, z); 
		glVertex3f(xd, yd, zd); 

		glVertex3f(x, -y, -z); 
		glVertex3f(xd, -yd, -zd); 

		glVertex3f(-x, -y, -z); 
		glVertex3f(-xd, -yd, -zd); 

		glEnd();

	glPopMatrix();
	// glEnable(GL_LIGHTING);
}

void SolarSystem::draw_grid(float speed) { 
	
	// float size = 0.2f;
	// for (int i = 1; i < 6; i ++) {
	// 		draw_rec((size + i) * speed);
	// }
	// draw_rec(0.1f * speed);
	draw_rec(0.2f * speed);
	draw_rec(0.4f * speed);
	// draw_rec(0.6f * speed);
	draw_rec(0.8f * speed);
	// draw_rec(1.0f * speed);
	// draw_rec(1.2f * speed);
	// draw_rec(1.4f * speed);
	draw_rec(1.6f * speed);
	// draw_rec(1.8f * speed);
	// draw_rec(2.0f * speed);

	//know the spots that they generate so you know when to replace them
}

void SolarSystem::move_grid(float speed) { 

}