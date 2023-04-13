#include <iostream>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>


void cde(){
    glBegin(GL_TRIANGLES);
    glColor3f(0.1, 1.1, 1.0);
    glVertex2i(37, 40);
    glVertex2i(33, 40);
    glVertex2i(32, 39);
    glEnd();
    glFlush();
}
void defh() {
    glBegin(GL_TRIANGLES);
    glColor3f(0.1, 0.0, 1.1);
    glVertex2i(33, 40);
    glVertex2i(32, 39);
    glVertex2i(28, 41);
    glVertex2i(30, 37);
    glEnd();
    glFlush();
}
void fhg() {
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 1.0, 1.1);
    glVertex2i(28, 41);
    glVertex2i(26, 39);
    glVertex2i(30, 37);
    glEnd();
    glFlush();
}
void ghi() {
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 1.1, 1.1);
    glVertex2i(26, 39);
    glVertex2i(30, 37);
    glVertex2i(24, 37);
    glEnd();
    glFlush();
}
void hik() {
    glBegin(GL_TRIANGLES);
    glColor3f(0.1, 1.0, 1.1);
    glVertex2i(30, 37);
    glVertex2i(24, 33);
    glVertex2i(32, 30);
    glEnd();
    glFlush();
}
void ikq() {
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 1.0, 0.0);
    glVertex2i(24, 33);
    glVertex2i(32, 30);
    glVertex2i(21, 18);
    glEnd();
    glFlush();
}
void iqm() {
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 1.1, 1.0);
    glVertex2i(24, 33);
    glVertex2i(21, 27);
    glVertex2i(12, 24);
    glEnd();
    glFlush();
}
void qkz() {
    glBegin(GL_TRIANGLES);
    glColor3f(1.1, 1.0, 0.0);
    glVertex2i(21, 27);
    glVertex2i(32, 30);
    glVertex2i(26, 22);
    glEnd();
    glFlush();
}
void qzr() {
    glBegin(GL_TRIANGLES);
    glColor3f(0.1, 0.0, 1.1);
    glVertex2i(21, 27);
    glVertex2i(26, 22);
    glVertex2i(20, 18);
    glEnd();
    glFlush();
}
void zkp() {
    glBegin(GL_TRIANGLES);
    glColor3f(0.1, 0.1, 1.0);
    glVertex2i(26, 22);
    glVertex2i(32, 30);
    glVertex2i(31, 23);
    glEnd();
    glFlush();
}
void zps() {
    glBegin(GL_TRIANGLES);
    glColor3f(0.1, 0.0, 1.0);
    glVertex2i(26, 22);
    glVertex2i(31, 23);
    glVertex2i(28, 17);
    glEnd();
    glFlush();
}
void zrs() {
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 1.1, 1.1);
    glVertex2i(26, 22);
    glVertex2i(20, 18);
    glVertex2i(28, 17);
    glEnd();
    glFlush();
}
void rso() {
    glBegin(GL_TRIANGLES);
    glColor3f(1.1, 1.1, 1.0);
    glVertex2i(20, 18);
    glVertex2i(28, 17);
    glVertex2i(25, 12);
    glEnd();
    glFlush();
}
void rot() {
    glBegin(GL_TRIANGLES);
    glColor3f(1.1, 0.1, 1.1);
    glVertex2i(20, 18);
    glVertex2i(25, 12);
    glVertex2i(19, 13);
    glEnd();
    glFlush();
}
void tov() {
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2i(19, 13);
    glVertex2i(25, 12);
    glVertex2i(22, 9);
    glEnd();
    glFlush();
}
void tuv() {
    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 1.0, 1.1);
    glVertex2i(19, 13);
    glVertex2i(18, 9);
    glVertex2i(22, 9);
    glEnd();
    glFlush();
}
void ovw() {
    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.1, 1.0);
    glVertex2i(25, 12);
    glVertex2i(22, 9);
    glVertex2i(30, 9);
    glEnd();
    glFlush();
}
void DibujarTriangulo()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    cde();
    defh();
    fhg();
    ghi();
    hik();
    ikq();
    iqm();
    qkz();
    qzr();
    zkp();
    zps();
    zrs();
    rso();
    rot();
    tov();
    tuv();
    ovw();
    glPopMatrix();
    glFlush();
}
void IniciarConfiguracion() {
    glClearColor(0, 0, 0, 0);
    glColor3f(0.1, 0.0, 1.0); //Azul
    glLineWidth(3.0);
    glOrtho(0, 100, 0, 100, 1, -50);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(300, 300);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Pingüino");
    IniciarConfiguracion();
    glutDisplayFunc(DibujarTriangulo);
    glutMainLoop();
    return 0;
}