#include<stdio.h>
#include <stdio.h>
#include <iostream>
#include <GL/glut.h>
using namespace std;

void drawTriangle() {
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.5f, -0.5f);
    glVertex2f(0.5f, -0.5f);
    glVertex2f(0.0f, 0.5f);
    glEnd();
    glFlush();
}

void init() {}


void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    //glLoadIdentity();
    glOrtho(-1.0f, 1.0f, -1.0f, 1.0f, -1.0f, 1.0f);
    glColor3f(1.0f, 1.0f, 1.0f);
    drawTriangle();

    glColor3f(0.0f, 0.0f, 1.0f);
    glScalef(0.5f, 0.5f, 0.0f); // resize to 50%
    drawTriangle();

    glColor3f(1.0f, 0.0f, 0.0f);
    glRotatef(45.0f, 0.0f, 0.0f, 1.0f); //rotate by 45 degrees
    drawTriangle();

    glColor3f(0.0f, 1.0f, 0.0f);
    glTranslatef(0.5f, 0.5f, 0.0f); // translate
    drawTriangle();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(600, 600);
    glutCreateWindow("TriangleTransform");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}