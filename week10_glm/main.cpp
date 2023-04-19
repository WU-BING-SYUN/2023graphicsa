#include <GL/glut.h>
#include "glm.h"
GLMmodel * pmodel = NULL;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    if(pmodel == NULL)
    {
        pmodel = glmReadOBJ("Al.obj");
        glmUnitize(pmodel);
        glmFacetNormals(pmodel);
        glmVertexNormals(pmodel, 90);
    }
    glmDraw(pmodel, GLM_MATERIAL);
	///glutSolidTeapot( 0.3 );
	glutSwapBuffers();
}

int main(int argc, char *argv[])
{ ///�W���O�S�O�� main()�禡, ���ܦh�Ѽ�
    glutInit(&argc, argv); ///�� GLUT �}�_��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    ///�W���o��,����ܪ��Ҧ��]�w�n!
	glutCreateWindow("week10"); ///�n�}����
	glutDisplayFunc(display); ///�n��ܪ������禡
	glutMainLoop(); ///�̫�� main�j��,���b�̫᭱
}
