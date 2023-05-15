#include <gl/glut.h>

void desenha(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(-0.8, 0.8);
	glVertex2f(0.8, 0.8);
	glVertex2f(0.8, -0.8);
	glVertex2f(-0.8, -0.8);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-0.5, -0.4);
	glVertex2f(0.5, -0.5);
	glVertex2f(0.0, 0.6);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(0.0, -0.2); // TOPO PIRAMIDE
	glVertex2f(0.6, -0.3); // TOPO DIREITA
	glVertex2f(0.6, -0.5); // BASE DIREITA
	glVertex2f(-0.6, -0.5); // BASE ESQUERDA
	glVertex2f(-0.6, -0.3); // TOPO ESQUERDA
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 1.0);
	glLineWidth(10);
	glVertex2f(-1.0, 1.0);
	glVertex2f(1.0, -1.0);
	glEnd();
	glFlush();
}

void inicializa(void)
{
	glClearColor(0, 0, 0, 1);
}

int main(void)
{
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(400, 400);
	glutCreateWindow("Exercicio 1 - Pedro");
	inicializa();
	glutDisplayFunc(desenha);
	glutMainLoop();
}