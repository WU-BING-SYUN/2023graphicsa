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
{ ///上面是特別的 main()函式, 有很多參數
    glutInit(&argc, argv); ///把 GLUT 開起來
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    ///上面這行,把顯示的模式設定好!
	glutCreateWindow("week10"); ///要開視窗
	glutDisplayFunc(display); ///要顯示的對應函式
	glutMainLoop(); ///最後用 main迴圈,壓在最後面
}
