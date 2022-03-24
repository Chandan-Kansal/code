//#include <GL/glut.h>
//#include<iostream>
//#include<stdio.h>
//using namespace std;
//int a, b, c, d;
//void draw_line(int x1, int x2, int y1, int y2)
//{
//    glBegin(GL_POINTS);
//    int dx, dy, i, p;
//    int xinc, yinc, inc1, inc2;
//    int x, y;
//
//    dx = abs(x2 - x1);
//    dy = abs(y2 - y1);
//    
//    
//    xinc = 1;
//    
//    if (x2 < x1) { xinc = -1; }
//
//    yinc = 1;
//    
//    if (y2 < y1) { yinc = -1; }
//    
//    x = x1;
//    y = y1;
//    
//    if (dx > dy)
//    {
//        glVertex2i(x, y);
//        p = 2 * dy - dx;
//        inc1 = 2 * (dy - dx);
//        inc2 = 2 * dy;
//        for (i = 0; i < dx; i++)
//        {
//            if (p >= 0)
//            {
//                y += yinc;
//                p += inc1;
//            }
//            else
//            {
//                p += inc2;
//            }
//            x += xinc;
//            glVertex2i(x, y);
//        }
//    }
//    else
//    {
//        glVertex2i(x, y);
//        p = 2 * dx - dy;
//        inc1 = 2 * (dx - dy);
//        inc2 = 2 * dx;
//        for (i = 0; i < dy; i++)
//        {
//            if (p >= 0)
//            {
//                x += xinc;
//                p += inc1;
//            }
//            else
//            {
//                p += inc2;
//            }
//            y += yinc;
//            glVertex2i(x, y);
//        }
//    }
//    glEnd();
//    glFlush();
//}
//void myDisplay()
//{
//    draw_line(a, c, b, d);
//    draw_line(a, c - 200, b + d / 2, b + d / 2);
//    draw_line(c - 200, c - 160, b+ d / 2, (b + d / 2) - 50);
//    draw_line(c - 160, c - 120, (b + d / 2) - 50, b + d / 2);
//    draw_line(a + 50, c - 150, d, d);
//    glFlush();
//}
//int main(int argc, char** argv)
//{
//    printf("Enter (x1, y1, x2, y2)\n");
//    scanf_s("%d %d %d %d", &a, &b, &c, &d);
//
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//    glutInitWindowSize(500, 500);
//    glutInitWindowPosition(0, 0);
//    glutCreateWindow("Bresenham's Line Drawing");
//    glClear(GL_COLOR_BUFFER_BIT);//
//    glClearColor(0.0, 0.0, 0.0, 1.0);
//    glMatrixMode(GL_PROJECTION);
//    gluOrtho2D(0, 500, 0, 500);
//    glutDisplayFunc(myDisplay);
//    glutMainLoop();
//    
//    return 0;
//}