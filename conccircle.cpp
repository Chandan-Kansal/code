//#include <stdio.h>
//#include <iostream>
//#include <GL/glut.h>
//using namespace std;
//
//int X, Y, r,r2;
//
//void plot(int x, int y)
//{
//	glBegin(GL_POINTS);
//	glVertex2i(x + X, y + Y);
//	glEnd();
//}
//
//
//void myInit(void)
//{
//	glClearColor(1.0, 1.0, 1.0, 0.0);
//	glColor3f(1.0f, 1.0f, 1.0f);
//	glPointSize(4.0);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
//}
//
//
//void midPointCircleAlgo()
//{
//	//int x = 0;
//	int y = r;
//
//	//plot(x, y);
//	for (int i = 0; i < 3; i++)
//	{
//		float decision = 5 / 4 - y ;
//		/*int y2 = r - 10;
//		int x2 = 0;*/
//		int x = 0;
//		plot(x, y);
//
//		while (y > x)
//		{
//			if (decision < 0)
//			{
//				x++;
//				decision += 2 * x + 1;
//			}
//			else
//			{
//				y--;
//				x++;
//				decision += 2 * (x - y) + 1;
//			}
//			plot(x, y);
//			plot(x, -y);
//			plot(-x, y);
//			plot(-x, -y);
//			plot(y, x);
//			plot(-y, x);
//			plot(y, -x);
//			plot(-y, -x);
//		}
//		y = y - r2;
//	}
//	/*while (y2 > x2)
//	{
//		if (decision < 0)
//		{
//			x2++;
//			decision += 2 * x2 + 1;
//		}
//		else
//		{
//			y2--;
//			x2++;
//			decision += 2 * (x2 - y2) + 1;
//		}
//		plot(x2, y2);
//		plot(x2, -y2);
//		plot(-x2, y2);
//		plot(-x2, -y2);
//		plot(y2, x2);
//		plot(-y2, x2);
//		plot(y2, -x2);
//		plot(-y2, -x2);
//	}*/
//}
//
//void myDisplay(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(0.0, 0.0, 0.0);
//	glPointSize(1.0);
//
//	midPointCircleAlgo();
//
//	glFlush();
//}
//
//int main(int argc, char** argv)
//{
//	for (int i = 0; i < 2; i++)
//		cout << "Enter the coordinates of the center:\n\n" << endl;
//
//	cout << "X-coordinate   : "; cin >> X;
//	cout << "\nY-coordinate : "; cin >> Y;
//	cout << "\nEnter radius : "; cin >> r;
//	cout << "\nEnter Second radius : "; cin >> r2;
//
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//	glutInitWindowSize(640, 480);
//	glutInitWindowPosition(100, 150);
//	glutCreateWindow("Midpoint circle");
//	glutDisplayFunc(myDisplay);
//	myInit();
//	glutMainLoop();
//	return 0;
//}
