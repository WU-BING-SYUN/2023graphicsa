#include <GL/glut.h>
float X = 0, Y = 0; ///global變數，在函式之間傳值(大寫的)
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); ///清背景
    glPopMatrix(); ///備份矩陣
        glTranslatef(X,Y,0);
        glutSolidTeapot(0.3);
    glPopMatrix(); ///還原矩陣
    glutSwapBuffers();
}
///#include <stdio.h>
void mouse(int button, int state, int x, int y) ///小寫的
{
    X = (x - 150) / 150.0;
    Y = -(y - 150) / 150.0; ///y記得要負號
}
int main(int argc, char* argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week03");

    glutDisplayFunc(display);
    glutMouseFunc(mouse); ///請mouse函式幫忙

    glutMainLoop();
}
