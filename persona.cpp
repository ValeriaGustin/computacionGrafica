#include "persona.h"

void persona::dibujarPersona(float x, float y, float z) {

    glPushMatrix();
        glPushMatrix();
            glTranslatef(x, y, z);
            glutSolidSphere(0.5, 20, 20);

        glPopMatrix();

        glPushMatrix();
            glTranslatef(0.0, 1.5, 0.0);
            glBegin(GL_TRIANGLES);
            glVertex3f(1, 0, 0);
            glVertex3f(0, 1, 0);
            glVertex3f(-1, 0, 0);
            glEnd();

        glPopMatrix();
    glPopMatrix();
}