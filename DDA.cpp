//#include<stdio.h>
//#include <stdio.h>
//#include <iostream>
//#include <GL/glut.h>
//using namespace std;
//float a, b, c, d;
//
////void setpixel(GLint xCoordinate, GLint yCoordinate) {
////    //glBegin(GL_POINTS);//GL_POINTS -> used to specify the primitive group of points , in this group every vertex is treated independent
////    //glVertex2i(xCoordinate, yCoordinate);//2 -> specify number of argument can be 3 too , i -> specifies int if a third character is writen with it that is v it specifies input taken from a point to an array or vector 
////    //glEnd();//ending tag for glBegin
////    //glFlush();//
////}
//
//void DDA(int X1, int Y1, int X2, int Y2)
//{
//    int i;
//    float dx,dy;
//    float X, Y, Xinc, Yinc;
//    dx = abs(X2 - X1);
//    dy = abs(Y2 - Y1);
//    if (dy > dx)
//    {
//        dx = dy;
//    }
//    Xinc = (X2 - X1) / (dx);
//    Yinc = (Y2 - Y1) / (dx);
//    X = X1;
//    Y = Y1;
//    for (i = 0; i < dx; i++) {
//        glBegin(GL_POINTS);//GL_POINTS -> used to specify the primitive group of points , in this group every vertex is treated independent
//        glVertex2i(X,Y);//2 -> specify number of argument can be 3 too , i -> specifies int if a third character is writen with it that is v it specifies input taken from a point to an array or vector 
//        glEnd();//ending tag for glBegin
//        glFlush();//clear all the buffers after execution of previous commands between glBegin() and glEnd()
//        X = X + Xinc;
//        Y = Y + Yinc;
//    }
//}
//
//void drawmyline() { DDA(a, b, c, d); }
//
//void init(void) {
//
//    glClearColor(1.0, 1.0, 1.0, 0.0);//clear the color buffer and 1 1 1 0 color is for white RGB at full intensity
//    glMatrixMode(GL_PROJECTION);//apply operation to projection matrix that define the property of object in coordinate system.
//    gluOrtho2D(0.0, 300.0, 0.0, 300.0);//all the geometry which is inside volume of box is visible on the view port left,right,bottom,top define the box
//}
//
//int main(int argc, char** argv) {
//    printf("DDA\nEnter co-ordinates to draw line\n");
//    printf("X1 = ");
//    scanf_s("%f", &a);
//    printf("Y1 = ");
//    scanf_s("%f", &b);
//    printf("Xend = ");
//    scanf_s("%f", &c);
//    printf("Yend = ");
//    scanf_s("%f", &d);
//    glutInit(&argc, argv); //initialise glut library
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); //specify and initialise glut display mode//GLUT_SINGLE -> draw directly on window//GLUT_RGB -> for colored mode
//    glutInitWindowSize(500, 500);//initialise window of size x,y pixel
//    glutInitWindowPosition(0, 0);//window position on screen 0,0 pixel means the top left corner of window
//    glutCreateWindow("Digital Differential Analyzer Algorithm");//creates a window of title as string in the arguments
//    init();//calling the init function
//    glutDisplayFunc(drawmyline);//the argument passed in this function contains the content that need to be drawn on viewport/display 
//    glutMainLoop();//trigger function for glutDisplayfunc() after this windows created are shown and rendering becomes effective allowing resizing of windows and response to mouse clicks.
//    return 0;
//}