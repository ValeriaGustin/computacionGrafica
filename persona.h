#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"

class persona
{
public:
	persona() {};
	void dibujarPersona(int segmentos, float alpha, float x, float y, float z);

};

