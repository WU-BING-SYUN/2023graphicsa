#include <GL/glut.h>
float angle = 0; ///global�����ܼ�
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glColor3f(0,1,0);
    glPushMatrix(); ///�ƥ��x�}
        glTranslatef(0.8,0,0); ///最後是綠色的移動
        glRotatef(angle, 0 ,0, 1); ///改對z軸轉
        glutSolidTeapot(0.3);
    glPopMatrix(); ///�٭�x�}

    glColor3f(1,0,0);///紅色的
    glPushMatrix(); ///�ƥ��x�}
        glRotatef(angle, 0 ,0, 1); ///改對z軸轉 ///最後是紅色的轉動
        glTranslatef(0.8,0,0);
        glutSolidTeapot(0.3);
    glPopMatrix(); ///�٭�x�}

    glutSwapBuffers();
    angle++; ///�⨤��++
}

int main(int argc, char* argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week04");

    glutDisplayFunc(display);
    glutIdleFunc(display); ///����idle�ɡA�N���e�e��

    glutMainLoop();
}
