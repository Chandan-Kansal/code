//#include <stdio.h>
//#include <math.h>
//#include <GL/glut.h>
//
//// Center of the cicle = (320, 240)
//int xc = 320, yc = 240;
//
//// Plot eight points using circle's symmetrical property
//void plot_point(int x, int y)
//{
//    glBegin(GL_POINTS);
//    glVertex2i(xc + x, yc + y);
//    glVertex2i(xc + x, yc - y);
//    glVertex2i(xc + y, yc + x);
//    glVertex2i(xc + y, yc - x);
//    glVertex2i(xc - x, yc - y);
//    glVertex2i(xc - y, yc - x);
//    glVertex2i(xc - x, yc + y);
//    glVertex2i(xc - y, yc + x);
//    glEnd();
//}
//void bresenham_circle(int r)
//{
//    int x = 0, y = r;
//    int pk = 3 - 2*r;
//    plot_point(x, y);
//    int k;
// 
//    while (x < y)
//    {
//        x = x + 1;
//        if (pk < 0)
//            pk = pk + 4 * x + 6;
//        else
//        {
//            y = y - 1;
//             pk = pk + 4 * (x - y) + 10;
//        }
//        plot_point(x, y);
//    }
//    glFlush();
//}
//
//// Function to draw two concentric circles
//void concentric_circles(void)
//{
//    glClear(GL_COLOR_BUFFER_BIT);
//    int radius1 = 100, radius2 = 200;
//    bresenham_circle(radius1);
//    //bresenham_circle(radius2);
//}
//
//void Init()
//{
//    glClearColor(1.0, 1.0, 1.0, 0);
//    glColor3f(0.0, 0.0, 0.0);
//    glMatrixMode(GL_PROJECTION); 
//    gluOrtho2D(0, 640, 0, 480);
//}
//
//void main(int argc, char** argv)
//{
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//    glutInitWindowPosition(0, 0);
//    glutInitWindowSize(640, 480);
//    glutCreateWindow("bresenham_circle");
//    Init();
//    glutDisplayFunc(concentric_circles);
//    glutMainLoop();
//}
