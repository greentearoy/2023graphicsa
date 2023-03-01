#include<GL/glut.h>
#include<stdio.h>
float X=0,Y=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glVertex2f(-0.216,  0.152);
    glVertex2f(-0.256,  0.064);
    glVertex2f(-0.300,  -0.048);
    glVertex2f(-0.300,  -0.096);
    glVertex2f(-0.296,  -0.156);
    glVertex2f(-0.240,  -0.200);
    glVertex2f(-0.228,  -0.220);
    glVertex2f(-0.048,  -0.240);
    glVertex2f(0.060,  -0.248);
    glVertex2f(0.160,  -0.236);
    glVertex2f(0.224,  -0.236);
    glVertex2f(0.272,  -0.176);
    glVertex2f(0.296,  -0.140);
    glVertex2f(0.288,  0.016);
    glVertex2f(0.272,  0.068);
    glVertex2f(0.240,  0.132);
    glVertex2f(0.200,  0.160);
    glVertex2f(0.120,  0.144);
    glVertex2f(0.056,  0.156);
    glVertex2f(0.008,  0.184);
    glVertex2f(-0.048,  0.184);
    glVertex2f(-0.116,  0.160);
    glEnd();
	glutSwapBuffers();
}
void mouse(int button,int state,int x,int y)
{
    float X=(x-250)/250.0;
    float Y=-(y-250)/250.0;
    if(state==GLUT_DOWN){
        printf("    glVertex2f(%.3f,  %.3f)\n",X,Y);
    }
}
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowSize(500,500);
	glutCreateWindow("week03");
	glutDisplayFunc(display);
	glutMouseFunc(mouse);
	glutMainLoop();
}
