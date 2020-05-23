#include <iostream>
#include <GL/freeglut.h>

void Rumah() {
	glColor3f(128, 128, 128);
	// bentuk rumah
	glBegin(GL_POLYGON);
	glVertex2i(96, 13);
	glVertex2i(283, 13);
	glVertex2i(327, 87);
	glVertex2i(327, 180);
	glVertex2i(51, 180);
	glVertex2i(51, 88);
	glVertex2i(96, 13);

	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(96, 13);
	glVertex2i(283, 13);
	glVertex2i(327, 87);
	glVertex2i(140, 87);
	glVertex2i(96, 13);

	glEnd();
	// tembok samping 
	glColor3ub(255, 235, 205);
	glBegin(GL_POLYGON);
	glVertex2i(140, 87);
	glVertex2i(327, 87);
	glVertex2i(327, 180);
	glVertex2i(140, 180);
	glVertex2i(140, 87);

	glEnd();
	// atap
	glColor3ub(165, 42, 42);
	glBegin(GL_POLYGON);
	glVertex2i(96, 13);
	glVertex2i(283, 13);
	glVertex2i(327, 87);
	glVertex2i(140, 87);
	glVertex2i(96, 13);

	glEnd();
	// tembok depan
	glColor3ub(255, 235, 205);
	glBegin(GL_POLYGON);
	glVertex2i(51, 88);
	glVertex2i(140, 87);
	glVertex2i(140, 180);
	glVertex2i(51, 180);
	glVertex2i(51, 88);

	glEnd();
	// jendela 1 
	glColor3ub(255, 255, 0);
	glBegin(GL_POLYGON);
	glVertex2i(171, 110);
	glVertex2i(214, 110);
	glVertex2i(214, 144);
	glVertex2i(171, 144);
	glVertex2i(171, 110);

	glEnd();
	// garis jendela 1
	glColor3f(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(171, 110);
	glVertex2i(214, 110);
	glVertex2i(214, 144);
	glVertex2i(171, 144);
	glVertex2i(171, 110);

	glEnd();
	// jendela 2 
	glColor3ub(255, 255, 0);
	glBegin(GL_POLYGON);
	glVertex2i(239, 110);
	glVertex2i(278, 110);
	glVertex2i(278, 144);
	glVertex2i(239, 144);
	glVertex2i(239, 110);

	glEnd();
	// garis jendela 2
	glColor3f(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(239, 110);
	glVertex2i(278, 110);
	glVertex2i(278, 144);
	glVertex2i(239, 144);
	glVertex2i(239, 110);

	glEnd();
	// jendela 2 
	glColor3ub(255, 255, 0);
	glBegin(GL_POLYGON);
	glVertex2i(82, 135);
	glVertex2i(105, 135);
	glVertex2i(105, 178);
	glVertex2i(82, 178);
	glVertex2i(82, 135);

	glEnd();
	// garis jendela 2
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(82, 135);
	glVertex2i(105, 135);
	glVertex2i(105, 178);
	glVertex2i(82, 178);
	glVertex2i(82, 135);

	glEnd();

	glPointSize(5.0);
	glBegin(GL_POINTS);
	glColor3ub(0, 0, 0);
	glVertex2i(100, 160);

	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(96, 13);
	glVertex2i(140, 87);
	glVertex2i(51, 87);
	glVertex2i(96, 13);

	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(140, 87);
	glVertex2i(140, 180);

	glEnd();
	glFlush();
}

void Lemari() {
	glColor3f(128, 128, 128);
	// bentuk lemari
	glBegin(GL_LINE_LOOP);
	glVertex2i(387, 28);
	glVertex2i(436, 14);
	glVertex2i(560, 14);
	glVertex2i(560, 181);
	glVertex2i(534, 196);
	glVertex2i(387, 196);
	glVertex2i(387, 28);

	glEnd();
	//lemari depan 
	glColor3ub(218, 165, 32);
	glBegin(GL_POLYGON);
	glVertex2i(387, 28);
	glVertex2i(534, 28);
	glVertex2i(534, 196);
	glVertex2i(387, 196);
	glVertex2i(387, 28);

	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(387, 28);
	glVertex2i(534, 28);
	glVertex2i(534, 196);
	glVertex2i(387, 196);
	glVertex2i(387, 28);

	glEnd();
	// lemari atas
	glColor3ub(218, 165, 32);
	glBegin(GL_POLYGON);
	glVertex2i(387, 28);
	glVertex2i(436, 14);
	glVertex2i(559, 14);
	glVertex2i(534, 28);
	glVertex2i(387, 28);

	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(387, 28);
	glVertex2i(436, 14);
	glVertex2i(559, 14);
	glVertex2i(534, 28);
	glVertex2i(387, 28);

	glEnd();
	// lemari samping
	glColor3ub(218, 165, 32);
	glBegin(GL_POLYGON);
	glVertex2i(534, 28);
	glVertex2i(560, 14);
	glVertex2i(560, 181);
	glVertex2i(534, 196);
	glVertex2i(534, 28);

	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(534, 28);
	glVertex2i(560, 14);
	glVertex2i(560, 181);
	glVertex2i(534, 196);
	glVertex2i(534, 28);

	glEnd();
	// pintu lemari
	glColor3ub(218, 165, 32);
	glBegin(GL_POLYGON);
	glVertex2i(393, 34);
	glVertex2i(534, 34);
	glVertex2i(534, 189);
	glVertex2i(393, 189);
	glVertex2i(393, 34);

	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(393, 34);
	glVertex2i(534, 34);
	glVertex2i(534, 189);
	glVertex2i(393, 189);
	glVertex2i(393, 34);

	glEnd();

	glPointSize(7.0);
	glBegin(GL_POINTS);
	glColor3ub(0, 0, 0);
	glVertex2i(410, 113);

	glEnd();
	glFlush();
}

void Hp() {
	glColor3f(0, 0, 0);
	//hp
	glBegin(GL_POLYGON);
	glVertex2i(58, 245);
	glVertex2i(133, 245);
	glVertex2i(133, 357);
	glVertex2i(58, 358);
	glVertex2i(58, 245);

	glEnd();
	// layar hp
	glColor3f(128, 128, 128);
	glBegin(GL_POLYGON);
	glVertex2i(65, 251);
	glVertex2i(126, 251);
	glVertex2i(126, 345);
	glVertex2i(65, 345);
	glVertex2i(65, 251);

	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(65, 251);
	glVertex2i(126, 251);
	glVertex2i(126, 345);
	glVertex2i(65, 345);
	glVertex2i(65, 251);

	glEnd();
	// tombol hp
	glColor3f(128, 128, 128);
	glBegin(GL_POLYGON);
	glVertex2i(95, 348);
	glVertex2i(98, 354);
	glVertex2i(92, 354);
	glVertex2i(95, 348);

	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(95, 348);
	glVertex2i(98, 354);
	glVertex2i(92, 354);
	glVertex2i(95, 348);

	glEnd();
	glFlush();
}

void Monitor() {
	glColor3f(0, 0, 0);
	//monitor 
	glBegin(GL_POLYGON);
	glVertex2i(618, 11);
	glVertex2i(921, 11);
	glVertex2i(921, 173);
	glVertex2i(618, 173);
	glVertex2i(618, 11);

	glEnd();

	glColor3f(128, 128, 128);
	//layar monitor 
	glBegin(GL_POLYGON);
	glVertex2i(624, 16);
	glVertex2i(916, 16);
	glVertex2i(916, 166);
	glVertex2i(624, 166);
	glVertex2i(624, 16);

	glEnd();

	glColor3f(0, 0, 0);
	//jagak monitor 
	glBegin(GL_POLYGON);
	glVertex2i(754, 173);
	glVertex2i(779, 173);
	glVertex2i(779, 179);
	glVertex2i(754, 179);
	glVertex2i(754, 173);

	glEnd();

	glColor3f(0, 0, 0);
	//jagak monitor 
	glBegin(GL_POLYGON);
	glVertex2i(635, 179);
	glVertex2i(908, 179);
	glVertex2i(908, 185);
	glVertex2i(635, 185);
	glVertex2i(635, 179);


	glEnd();
	glFlush();
}

void Koper() {
	glColor3f(255, 215, 0);
	//koper 
	glBegin(GL_POLYGON);
	glVertex2i(227, 279);
	glVertex2i(351, 279);
	glVertex2i(351, 438);
	glVertex2i(227, 438);
	glVertex2i(227, 279);

	glEnd();

	glColor3f(128, 128, 128);
	//motif koper 
	glBegin(GL_POLYGON);
	glVertex2i(227, 279);
	glVertex2i(351, 279);
	glVertex2i(351, 287);
	glVertex2i(227, 287);
	glVertex2i(227, 279);

	glEnd();

	glColor3f(0, 0, 0);
	//pegangan koper 
	glBegin(GL_POLYGON);
	glVertex2i(257, 279);
	glVertex2i(257, 204);
	glVertex2i(319, 204);
	glVertex2i(319, 279);
	glVertex2i(257, 279);

	glEnd();

	glColor3f(0, 255, 0);
	//pegangan koper 
	glBegin(GL_POLYGON);
	glVertex2i(264, 278);
	glVertex2i(264, 212);
	glVertex2i(313, 212);
	glVertex2i(313, 278);
	glVertex2i(264, 278);

	glEnd();

	glColor3f(0, 0, 0);
	//roda koper 
	glBegin(GL_POLYGON);
	glVertex2i(241, 437);
	glVertex2i(251, 437);
	glVertex2i(251, 446);
	glVertex2i(241, 446);
	glVertex2i(241, 437);

	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(330, 437);
	glVertex2i(340, 437);
	glVertex2i(340, 446);
	glVertex2i(330, 446);
	glVertex2i(330, 437);

	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2i(257, 287);
	glVertex2i(257, 437);

	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2i(270, 287);
	glVertex2i(270, 437);

	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2i(279, 287);
	glVertex2i(279, 437);

	glEnd();
	glFlush();
}

void Kampak() {
	glColor3f(0, 0, 0);
	//kampak 
	glBegin(GL_POLYGON);
	glVertex2i(436, 229);
	glVertex2i(476, 247);
	glVertex2i(512, 247);
	glVertex2i(512, 288);
	glVertex2i(476, 288);
	glVertex2i(436, 296);
	glVertex2i(436, 229);

	glEnd();

	glColor3f(128, 128, 128);
	//kampak 
	glBegin(GL_POLYGON);
	glVertex2i(436, 229);
	glVertex2i(447, 234);
	glVertex2i(447, 294);
	glVertex2i(436, 296);
	glVertex2i(436, 229);

	glEnd();

	glColor3f(139, 0, 0);
	//pegangan kampak 
	glBegin(GL_POLYGON);
	glVertex2i(512, 288);
	glVertex2i(512, 457);
	glVertex2i(489, 457);
	glVertex2i(489, 288);
	glVertex2i(512, 288);

	glEnd();
	glFlush();
}

void Tampil() {
	glClearColor(0, 1, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	Lemari();
	Rumah();
	Hp();
	Monitor();
	Koper();
	Kampak();
}

int main(int argc, char** argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1366, 720);
	glutCreateWindow("Imanuel Noval Amanda Prahara 672018145");
	glutDisplayFunc(Tampil);
	gluOrtho2D(0, 1300, 900, 0);
	glutMainLoop();

	return 0;
}