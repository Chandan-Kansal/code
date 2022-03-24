//#include <GL/glut.h>
//#include<iostream>
//#include<stdio.h>
//using namespace std;
//int a, b, c, d;
//void myInit()
//{
//    glClear(GL_COLOR_BUFFER_BIT);
//    glClearColor(1.0, 0.0, 0.0, 1.0);
//    glMatrixMode(GL_PROJECTION);
//    gluOrtho2D(0, 500, 0, 500);
//}
//void draw_pixel(int x, int y)
//{
//    glBegin(GL_POINTS);
//    glVertex2i(x, y);
//    glEnd();
//}
//void draw_line(int x1, int x2, int y1, int y2)
//{
//    int dx, dy, i, e;
//    int incx, incy, inc1, inc2;
//    int x, y;
//    dx = x2 - x1;
//    dy = y2 - y1;
//    if (dx < 0) dx = -dx;
//    if (dy < 0) dy = -dy;
//    incx = 1;
//    if (x2 < x1) incx = -1;
//    incy = 1;
//    if (y2 < y1)
//        incy = -1;
//    x = x1; y = y1;
//    if (dx > dy)
//    {
//        draw_pixel(x, y);
//        e = 2 * dy - dx;
//        inc1 = 2 * (dy - dx);
//        inc2 = 2 * dy;
//        for (i = 0; i < dx; i++)
//        {
//            if (e >= 0)
//            {
//                y += incy;
//                e += inc1;
//            }
//            else
//                e += inc2;
//            x += incx;
//            draw_pixel(x, y);
//        }
//    }
//    else
//    {
//        draw_pixel(x, y);
//        e = 2 * dx - dy;
//        inc1 = 2 * (dx - dy);
//        inc2 = 2 * dx;
//        for (i = 0; i < dy; i++)
//        {
//            if (e >= 0)
//            {
//                x += incx;
//                e += inc1;
//            }
//            else
//                e += inc2;
//            y += incy;
//            draw_pixel(x, y);
//        }
//    }
//}
//void myDisplay()
//{
//    draw_line(a, c, b, d);
//    draw_line(a, c - 180, b + d / 2 - 50, b + d / 2 - 50);
//    draw_line(c - 180, c - 120, b + d / 2 - 50, (b + d / 2) - 100);
//    // draw_line(x2-160, x2-120, (y1+y2/2)-100, y1+y2/2-50);  
//    draw_line(c - 120, c - 120, (b + d / 2) - 100, d);
//    draw_line(a- 180, c + 50, d, d);
//    glFlush();
//}
//int main(int argc, char** argv)
//{
//    printf("Enter (x1, y1, x2, y2)\n");
//    scanf_s("%d %d %d %d", &a, &b, &c, &d);
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//    glutInitWindowSize(500, 500);
//    glutInitWindowPosition(0, 0);
//    glutCreateWindow("Bresenham's Line Drawing");
//    myInit();
//    glutDisplayFunc(myDisplay);
//    glutMainLoop();
//
//    return 0;
//}
