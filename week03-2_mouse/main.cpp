#include <GL/glut.h>
float X = 0, Y = 0; ///global變數，在函式之間傳值(大寫的)
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); ///清背景

    glBegin(GL_POLYGON);
    glVertex2f(-0.047, 0.233);
    glVertex2f(-0.047, 0.180);
    glVertex2f(-0.087, 0.160);
    glVertex2f(-0.133, 0.153);
    glVertex2f(-0.213, 0.147);
    glVertex2f(-0.253, 0.080);
    glVertex2f(-0.287, -0.007);
    glVertex2f(-0.293, -0.107);
    glVertex2f(-0.247, -0.200);
    glVertex2f(-0.220, -0.220);
    glVertex2f(0.180, -0.240);
    glVertex2f(0.280, -0.140);
    glVertex2f(0.373, -0.087);
    glVertex2f(0.400, -0.020);
    glVertex2f(0.413, 0.047);
    glVertex2f(0.480, 0.127);
    glVertex2f(0.393, 0.147);
    glVertex2f(0.373, 0.107);
    glVertex2f(0.347, 0.080);
    glVertex2f(0.353, 0.020);
    glVertex2f(0.293, 0.000);
    glVertex2f(0.267, 0.040);
    glVertex2f(0.233, 0.113);
    glVertex2f(0.200, 0.153);
    glVertex2f(0.127, 0.153);
    glVertex2f(0.067, 0.153);
    glVertex2f(-0.260, 0.100);
    glVertex2f(-0.340, 0.113);
    glVertex2f(-0.380, 0.113);
    glVertex2f(-0.433, 0.100);
    glVertex2f(-0.453, -0.007);
    glVertex2f(-0.380, -0.087);
    glVertex2f(-0.320, -0.120);
    glVertex2f(-0.307, -0.080);
    glVertex2f(-0.260, 0.053);
    glEnd();

    glutSwapBuffers(); ///傳出去
}
#include <stdio.h>
void mouse(int button, int state, int x, int y) ///小寫的
{
    float X = (x - 250) / 250.0;
    float Y = -(y - 250) / 250.0; ///y記得要負號
    if(state == GLUT_DOWN) ///只有按下mouse時，才印出程式
    {
        printf("    glVertex2f(%.3f, %.3f);\n", X, Y);
    }
}
int main(int argc, char* argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutInitWindowSize(500,500); ///改顯示視窗的大小
    glutCreateWindow("week03");

    glutDisplayFunc(display);
    glutMouseFunc(mouse); ///請mouse函式幫忙

    glutMainLoop();
}
