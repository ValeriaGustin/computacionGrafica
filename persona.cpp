#include "persona.h"

void persona::dibujarPersona(int segmentos, float alpha, float x, float y, float z) {
	glPushMatrix();
		glTranslatef(-0.5, 0.0, 0.0); //rotar centro a la esquina
		glRotatef((GLfloat)alpha, 0.0, 0.0, 1.0); //rotar en eje z
		glTranslatef(0.5, 0.0, 0.0);
		glPushMatrix();
			glScalef(1.0, 1.0, 1.0);
			glutSolidCube(1.0);
		glPopMatrix();

		for (int i = 0; i < segmentos; i++) {
			x = 0.6 - (i * 0.05);
			float al2 = alpha + (i * 2.0);
			glTranslatef(0.5, 0.0, 0.0);
			glRotatef((GLfloat)al2, 0.0, 0.0, 1.0); //rotar en eje z
			glRotatef((GLfloat)al2, 1.0, 0.0, 0.0); //rotar en eje z
			glTranslatef(0.5, 0.0, 0.0);
			glPushMatrix();
				glScalef(1.0, x, x);
				glutSolidCube(1.0);
			glPopMatrix();
			//glTranslatef(0.5, 0.0, 0.0);
		}

	glPopMatrix();
};