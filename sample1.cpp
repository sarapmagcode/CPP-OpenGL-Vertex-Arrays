#include<GL/glut.h>
#include <GL/freeglut_ext.h>
#include<iostream>

using namespace std;

void display();
void triangle();
void point();

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(600, 600);
	glutCreateWindow("OpenGL Setup Test");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

void triangle() {
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0f, .75f);
	glVertex2f(-0.75f, 0.0f);
	glVertex2f(0.75f, 0.0f);
	glEnd();
}

void point() {
	glPointSize(20.0);
	glBegin(GL_POINTS);
	glVertex2f(-0.75f, -0.75f);
	glVertex2f(-0.75f, 0.75f);
	glVertex2f(0.75f, 0.75f);
	glVertex2f(0.75f, -0.75f);
	glEnd();
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor4f(.16f, .72f, .08f, 1.0f);
	point();
	triangle();
	glFlush();
}