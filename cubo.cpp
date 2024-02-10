#include "cubo.h"

void cubo::dibujarCubo(float x, float y, float z, float xcentro, float xcubo) {
    glPushMatrix();

    glRotatef(xcentro, 0, 0, 1); //Rotar desde el centro
    glTranslatef(x, y, z);
    glRotatef(xcubo, 0, 0, 1);  //Rotar desde el eje

    glutSolidCube(1);

    glPopMatrix();

}