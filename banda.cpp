#include <GL/glut.h>
#include<iostream>
#include<stdio.h>
using namespace std;
int rx, ry;//semi-Major axis & semi Minor Axis
int xCenter, yCenter;//center of ellipse
int a, b, c, d;
void myinit(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
void plot(GLint x, GLint y)
{
	glBegin(GL_POINTS);
	glVertex2i(xCenter + x, yCenter + y);
	glVertex2i(xCenter - x, yCenter + y);
	glVertex2i(xCenter + x, yCenter - y);
	glVertex2i(xCenter - x, yCenter - y);
	/*glVertex2i(x, y);*/
	glEnd();
}
void draw_pixel(int x, int y)
{
	glBegin(GL_POINTS);
	glVertex2i(xCenter+x,yCenter+ y);
	glEnd();
}
void ellipseMidPoint()
{
	//plotting for 1st region of 1st quardant and the slope will be < -1
	 //----------------------Region-1------------------------//
	float x = 0;
	float y = ry;//(0,ry) ---
	float p1 = ry * ry - (rx * rx) * ry + (rx * rx) * (0.25);//ry2 - rx2ry + rx2/4
	//slope
	float dx = 2 * (ry * ry) * x;
	float dy = 2 * (rx * rx) * y;
	while (dx < dy)
	{
		plot(x, y);
		if (p1 < 0)
		{
			x = x + 1;
			dx = 2 * (ry * ry) * x;
			p1 = p1 + dx + (ry * ry);
		}
		else
		{
			x = x + 1;
			y = y - 1;
			dx = 2 * (ry * ry) * x;
			dy = 2 * (rx * rx) * y;
			p1 = p1 + dx - dy + (ry * ry);
		}
	}
	//ploting for 2nd region of 1st quardant and the slope will be > -1
	 //----------------------Region-2------------------------//
	float p2 = (ry * ry) * (x + 0.5) * (x + 0.5) + (rx * rx) * (y - 1) * (y - 1) - (rx * rx) * (ry * ry);
	while (y > 0)
	{
		plot(x, y);
		if (p2 > 0)
		{
			x = x;
			y = y - 1;
			dy = 2 * (rx * rx) * y;
			//dy = 2 * rx * rx *y;
			p2 = p2 - dy + (rx * rx);
		}
		else
		{
			x = x + 1;
			y = y - 1;
			dy = y * 2 * (rx * rx);
			dx = x * 2 * (ry * ry);
			p2 = p2 + dx -
				dy + (rx * rx);
		}
	}
}
void draw_line(int x1, int x2, int y1, int y2)
{
	int dx, dy, i, e;
	int incx, incy, inc1, inc2;
	int x, y;
	dx = x2 - x1;
	dy = y2 - y1;
	if (dx < 0) dx = -dx;
	if (dy < 0) dy = -dy;
	incx = 1;
	if (x2 < x1) incx = -1;
	incy = 1;
	if (y2 < y1)
		incy = -1;
	x = x1; y = y1;
	if (dx > dy)
	{
		draw_pixel(x, y);
		e = 2 * dy - dx;
		inc1 = 2 * (dy - dx);
		inc2 = 2 * dy;
		for (i = 0; i < dx; i++)
		{
			if (e >= 0)
			{
				y += incy;
				e += inc1;
			}
			else
				e += inc2;
			x += incx;
			draw_pixel(x, y);
		}
	}
	else
	{
		draw_pixel(x, y);
		e = 2 * dx - dy;
		inc1 = 2 * (dx - dy);
		inc2 = 2 * dx;
		for (i = 0; i < dy; i++)
		{
			if (e >= 0)
			{
				x += incx;
				e += inc1;
			}
			else
				e += inc2;
			y += incy;
			draw_pixel(x, y);
		}
	}
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);     // clear the screen
	glColor3f(1.0, 0.0, 0.0);          // red foreground
	glPointSize(2.0);               // size of points to be drawin (in pixel)
	//establish a coordinate system for the image
	ellipseMidPoint();
	draw_line(a,c,b,d);
	draw_line(a, c+80, (b+d)/2.5, (b+d)/4);
	draw_line(a, c - 80, (b + d) / 2.5, (b + d) / 4);
	draw_line(a, c + 40, d, d-60);
	draw_line(a, c - 40, d, d - 60);
	glFlush(); // send all output to the display
}


int main(int argc, char** argv)
{
	/*cout << "\n\nEnter Center Of Ellipse  \n\n";
	cout << "\n x = ";
	cin >> xCenter;


	cout << "\n y = ";
	cin >> yCenter;*/
	xCenter = 300;
	yCenter = 300;

	/*cout << " Enter a Semi Major Axix : ";
	cin >> rx;
	cout << " \nEnter a Semi Minor Axis: ";
	cin >> ry;
	*/
	rx = 50 ;
	ry = 80;
	a = 0, b = -ry, c = 0, d = -ry - 120;
	glutInit(&argc, argv);
	glutInitWindowSize(500, 500); // set the size of the window
	glutInitWindowPosition(10, 10); // the position of the top-left of window
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow("Midpoint Ellipse Drawing Algorithm");
	myinit();
	glutDisplayFunc(display); // set the gl display callback function
	glutMainLoop(); // enter the GL event loop


}
