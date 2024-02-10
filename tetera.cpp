#include "tetera.h"

void tetera::dibujarTetera(float x, float y, float z) {

    glPushMatrix();
        glTranslatef(x, y, z);
        glutSolidTeapot(0.5);

    glPopMatrix();
}