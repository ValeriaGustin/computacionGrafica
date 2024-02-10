#include "triangulo.h"

void triangulo::dibujarTriangulo(float x, float y, float z) {

    glPushMatrix();


    glPushMatrix();
        glTranslatef(x, y, z);
        glBegin(GL_TRIANGLES);
            glVertex3f(1.5, 0.0, 0.0);
            glVertex3f(0.0, 2.598076, 0.0);
            glVertex3f(-1.5, 0.0, 0.0);
        glEnd();

    glPopMatrix();
    glPopMatrix();
}