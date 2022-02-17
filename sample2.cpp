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
	/*GLfloat triangleVertex[] = {
		0.0f, .75f, 0.0f,
		-0.75f, 0.0f, 0.0f,
		0.75f, 0.0f, 0.0f
	};*/
	GLfloat triangleVertex[] = { // can be 2 indices per vertex
		0.0f, .75f,
		-0.75f, 0.0f,
		0.75f, 0.0f
	};
	glEnableClientState(GL_VERTEX_ARRAY);
	glVertexPointer(2, GL_FLOAT, 0, triangleVertex); 
	glDrawArrays(GL_TRIANGLES, 0, 3);
	glDisableClientState(GL_VERTEX_ARRAY);
}

void point() {
	glPointSize(20.0); // change point size
	/*GLfloat pointVertex[] = {
		-0.75f, -0.75f, 0.0f,
		-0.75f, 0.75f, 0.0f,
		0.75f, 0.75f, 0.0f,
		0.75f, -0.75f, 0.0f
	};*/
	GLfloat pointVertex[] = { // can be 2 indices per vertex
		-0.75f, -0.75f,
		-0.75f, 0.75f,
		0.75f, 0.75f,
		0.75f, -0.75f
	};
	glEnableClientState(GL_VERTEX_ARRAY);
	glVertexPointer(2, GL_FLOAT, 0, pointVertex); 
	glDrawArrays(GL_POINTS, 0, 4);
	glDisableClientState(GL_VERTEX_ARRAY);
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor4f(.16f, .72f, .08f, 1.0f);
	point();
	triangle();
	glFlush();
}