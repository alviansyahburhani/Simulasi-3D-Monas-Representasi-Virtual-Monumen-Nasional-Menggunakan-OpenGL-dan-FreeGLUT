#include <GL/freeglut.h>
#include <cmath>

float angleY = 0.0f;
float angleX = 0.0f;
float deltaX = 0.01f;


// Tangga Monas
void drawTangga() {
    int jumlah = 4;
    for (int i = 0; i < jumlah; i++) {
        float scale = 6.0f - i * 0.3f;
        glPushMatrix();
        glTranslatef(0.0f, i * 0.08f, 0.0f);
        glScalef(scale, 0.04f, scale);
        glColor3f(0.6f, 0.5f, 0.3f);
        glutSolidCube(1.0f);
        glPopMatrix();
    }
    glPushMatrix();
    glTranslatef(0.0f, jumlah * 0.08f, 0.0f);
    glScalef(3.0f, 0.08f, 3.0f);
    glColor3f(0.6f, 0.5f, 0.3f);
    glutSolidCube(1.0f);
    glPopMatrix();
}

// Trapesium Terbalik
void drawTrapesiumTerbalik() {
    int segmen = 8;
    float tinggiTotal = 0.8f;
    float baseScale = 1.5f;
    float topScale = 4.5f;
    float startY = 0.4f;

    for (int i = 0; i < segmen; i++) {
        float t = (float)i / segmen;
        float scale = baseScale * (1 - t) + topScale * t;
        float y = startY + i * (tinggiTotal / segmen);
        glPushMatrix();
        glTranslatef(0.0f, y, 0.0f);
        glScalef(scale, tinggiTotal / segmen, scale);
        glColor3f(1.0f, 0.8f, 0.6f);
        glutSolidCube(1.0f);
        glPopMatrix();
    }
}

// Badan Tugu
void drawBadanTugu() {
    int segmen = 60;
    float tinggi = 7.5f;
    float baseScale = 0.9f;
    float topScale = 0.25f;

    for (int i = 0; i < segmen; i++) {
        float t = (float)i / segmen;
        float scale = baseScale * (1 - t) + topScale * t;
        float y = 1.2f + i * (tinggi / segmen);
        glPushMatrix();
        glTranslatef(0.0f, y, 0.0f);
        glScalef(scale, tinggi / segmen, scale);
        glColor3f(0.95f, 0.95f, 0.95f);
        glutSolidCube(1.0f);
        glPopMatrix();
    }
}

// Mangkok Api
void drawMangkokApi() {
    int segmen = 12;
    float tinggi = 0.3f;
    float baseScale = 0.3f;
    float topScale = 1.3f;

    for (int i = 0; i < segmen; i++) {
        float t = (float)i / segmen;
        float scale = baseScale * (1 - t) + topScale * t;
        float y = 8.7f + i * (tinggi / segmen);
        glPushMatrix();
        glTranslatef(0.0f, y, 0.0f);
        glScalef(scale, tinggi / segmen, scale);
        glColor3f(0.95f, 0.95f, 0.95f);
        glutSolidCube(1.0f);
        glPopMatrix();
    }
}

// Api
void drawApi() {
    glPushMatrix();
    glColor3f(1.0f, 0.7f, 0.0f);
    glTranslatef(0.0f, 9.2f, 0.0f);
    float totalHeight = 0.8f;
    int numSegments = 30;
    float initialRadius = 0.3f;
    float finalRadius = 0.05f;
    float rotationPerSegment = 15.0f;

    for (int i = 0; i < numSegments; i++) {
        glPushMatrix();
        float t = (float)i / numSegments;
        float baseRadius = initialRadius * (1.0f - t) + finalRadius * t;
        float topRadius = initialRadius * (1.0f - (t + 1.0f / numSegments)) + finalRadius * (t + 1.0f / numSegments);
        float segmentHeight = totalHeight / numSegments;
        float yOffset = segmentHeight * i;
        float rotation = i * rotationPerSegment;

        glTranslatef(0.0f, yOffset, 0.0f);
        glRotatef(rotation, 0.0f, 1.0f, 0.0f);
        GLUquadric* quad = gluNewQuadric();
        gluCylinder(quad, baseRadius, topRadius, segmentHeight, 20, 5);
        gluDeleteQuadric(quad);
        glPopMatrix();
    }

    glPopMatrix();
}

// Lapangan Hijau
void drawLapangan() {
    glPushMatrix();
    glTranslatef(0.0f, -0.01f, 0.0f);
    glScalef(25.0f, 0.02f, 25.0f);
    glColor3f(0.0f, 1.0f, 0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();
}
void drawJalanBesarMengelilingi() {
    float panjangArea = 20.0f;
    float lebarJalan = 3.0f;
    float offsetLuar = panjangArea / 2.0f;

    glColor3f(0.0f, 0.0f, 0.0f);

    glPushMatrix();
    glTranslatef(0.0f, 0.01f, -offsetLuar);
    glScalef(panjangArea, 0.02f, lebarJalan);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, 0.01f, offsetLuar);
    glScalef(panjangArea, 0.02f, lebarJalan);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(offsetLuar, 0.01f, 0.0f);
    glScalef(lebarJalan, 0.02f, panjangArea);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-offsetLuar, 0.01f, 0.0f);
    glScalef(lebarJalan, 0.02f, panjangArea);
    glutSolidCube(1.0f);
    glPopMatrix();
}
void drawJalanPenghubung() {
    float panjangJalan = 6.0f;
    float lebarJalan = 0.9f;
    float offsetTaman = 1.0f;
    float posisiDalam = 3.5f;

    glColor3f(0.0f, 0.0f, 0.0f);

    glPushMatrix();
    glTranslatef(-offsetTaman, 0.01f, -posisiDalam - panjangJalan / 2.0f);
    glScalef(lebarJalan, 0.02f, panjangJalan);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(offsetTaman, 0.01f, -posisiDalam - panjangJalan / 2.0f);
    glScalef(lebarJalan, 0.02f, panjangJalan);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-offsetTaman, 0.01f, posisiDalam + panjangJalan / 2.0f);
    glScalef(lebarJalan, 0.02f, panjangJalan);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(offsetTaman, 0.01f, posisiDalam + panjangJalan / 2.0f);
    glScalef(lebarJalan, 0.02f, panjangJalan);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posisiDalam + panjangJalan / 2.0f, 0.01f, -offsetTaman);
    glScalef(panjangJalan, 0.02f, lebarJalan);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posisiDalam + panjangJalan / 2.0f, 0.01f, offsetTaman);
    glScalef(panjangJalan, 0.02f, lebarJalan);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-posisiDalam - panjangJalan / 2.0f, 0.01f, -offsetTaman);
    glScalef(panjangJalan, 0.02f, lebarJalan);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-posisiDalam - panjangJalan / 2.0f, 0.01f, offsetTaman);
    glScalef(panjangJalan, 0.02f, lebarJalan);
    glutSolidCube(1.0f);
    glPopMatrix();
}
void drawTamanMonas() {
    float panjang = 7.0f;
    float lebarJalan = 3.5f;
    float tamanUkuran = 0.9f;
    float tamanOffset = 1.0f;

    glColor3f(0.0f, 0.0f, 0.0f);

    // Jalan sisi Utara
    glPushMatrix();
    glTranslatef(0.0f, 0.01f, -panjang / 2.0f);
    glScalef(panjang, 0.02f, lebarJalan);
    glutSolidCube(1.0f);
    glPopMatrix();

    // Jalan sisi Selatan
    glPushMatrix();
    glTranslatef(0.0f, 0.01f, panjang / 2.0f);
    glScalef(panjang, 0.02f, lebarJalan);
    glutSolidCube(1.0f);
    glPopMatrix();

    // Jalan sisi Timur
    glPushMatrix();
    glTranslatef(panjang / 2.0f, 0.01f, 0.0f);
    glScalef(lebarJalan, 0.02f, panjang);
    glutSolidCube(1.0f);
    glPopMatrix();

    // Jalan sisi Barat
    glPushMatrix();
    glTranslatef(-panjang / 2.0f, 0.01f, 0.0f);
    glScalef(lebarJalan, 0.02f, panjang);
    glutSolidCube(1.0f);
    glPopMatrix();

    glColor3f(0.0f, 0.6f, 0.0f);

    // Taman sisi Utara
    glPushMatrix();
    glTranslatef(-tamanOffset, 0.02f, -panjang / 2.0f);
    glScalef(tamanUkuran, 0.02f, tamanUkuran);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(tamanOffset, 0.02f, -panjang / 2.0f);
    glScalef(tamanUkuran, 0.02f, tamanUkuran);
    glutSolidCube(1.0f);
    glPopMatrix();

    // Taman sisi Selatan
    glPushMatrix();
    glTranslatef(-tamanOffset, 0.02f, panjang / 2.0f);
    glScalef(tamanUkuran, 0.02f, tamanUkuran);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(tamanOffset, 0.02f, panjang / 2.0f);
    glScalef(tamanUkuran, 0.02f, tamanUkuran);
    glutSolidCube(1.0f);
    glPopMatrix();

    // Taman sisi Timur
    glPushMatrix();
    glTranslatef(panjang / 2.0f, 0.02f, -tamanOffset);
    glScalef(tamanUkuran, 0.02f, tamanUkuran);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(panjang / 2.0f, 0.02f, tamanOffset);
    glScalef(tamanUkuran, 0.02f, tamanUkuran);
    glutSolidCube(1.0f);
    glPopMatrix();

    // Taman sisi Barat
    glPushMatrix();
    glTranslatef(-panjang / 2.0f, 0.02f, -tamanOffset);
    glScalef(tamanUkuran, 0.02f, tamanUkuran);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-panjang / 2.0f, 0.02f, tamanOffset);
    glScalef(tamanUkuran, 0.02f, tamanUkuran);
    glutSolidCube(1.0f);
    glPopMatrix();
}
void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    glTranslatef(0, -3.5f, -18.0f);
    glRotatef(angleX, 1.0f, 0.0f, 0.0f);
    glRotatef(angleY, 0.0f, 1.0f, 0.0f);


    drawLapangan();
    drawTamanMonas();
    drawJalanPenghubung();
    drawJalanBesarMengelilingi();

    drawTangga();
    drawTrapesiumTerbalik();
    drawBadanTugu();
    drawMangkokApi();
    drawApi();

    glutSwapBuffers();
}

void specialKeys(int key, int x, int y) {
    if (key == GLUT_KEY_RIGHT) angleY += 5.0f;
    else if (key == GLUT_KEY_LEFT) angleY -= 5.0f;
    glutPostRedisplay();
}
void idle() {
    angleY += 0.01f;
    if (angleY > 360.0f) angleY -= 360.0f;

    
    angleX += deltaX;
    if (angleX > 50.0f || angleX < -5.0f) {
        deltaX = -deltaX;
    }

    glutPostRedisplay();
}
void init() {
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);

    GLfloat lightPos[] = {0.0f, 10.0f, 10.0f, 1.0f};
    GLfloat lightAmbient[] = {0.2f, 0.2f, 0.2f, 1.0f};
    GLfloat lightDiffuse[] = {0.8f, 0.8f, 0.8f, 1.0f};

    glLightfv(GL_LIGHT0, GL_POSITION, lightPos);
    glLightfv(GL_LIGHT0, GL_AMBIENT, lightAmbient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, lightDiffuse);

    glEnable(GL_COLOR_MATERIAL);
    glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);

    glClearColor(0.5f, 0.8f, 1.0f, 1.0f); // Background langit
}
bool rotateEnabled = true;

void update(int value) {
    if (rotateEnabled) {
        angleY += 0.5f;
        if (angleY >= 360.0f) {
            angleY = 360.0f;
            rotateEnabled = false;
        }
        glutPostRedisplay();
        glutTimerFunc(60, update, 0);
    }
}
void reshape(int w, int h) {
    if (h == 0) h = 1;
    float aspect = (float)w / (float)h;

    glViewport(0, 0, w, h);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0f, aspect, 1.0f, 100.0f);

    glMatrixMode(GL_MODELVIEW);
}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Simulasi 3D Monas");

    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutSpecialFunc(specialKeys);
    glutIdleFunc(idle);


    glutMainLoop();
    return 0;
}

