#include <GL/glut.h>
#include <cmath>

// Function to draw the scene (road, sun, land, house, cloud, hill)
void drawHouse() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Road section
    glColor3f(0.196f, 0.196f, 0.196f);  // Dark gray
    glBegin(GL_POLYGON);
    glVertex2f(10.0f, -10.0f);
    glVertex2f(-10.0f, -10.0f);
    glVertex2f(-10.0f, -5.0f);
    glVertex2f(10.0f, -5.0f);
    glEnd();

    // Land section (grass)
    glColor3f(0.3f, 1.0f, 0.2f);  // Green
    glBegin(GL_POLYGON);
    glVertex2f(10.0f, -5.0f);
    glVertex2f(-10.0f, -5.0f);
    glVertex2f(-10.0f, 1.0f);
    glVertex2f(10.0f, 1.0f);
    glEnd();

    // Sun
    glColor3f(1.0f, 0.85f, 0.0f);  // Yellow
    float sunX = -8.5f, sunY = 8.0f, sunRadius = 1.2f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(sunX, sunY);  // Center of the sun
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = sunRadius * cos(angle);
        float y = sunRadius * sin(angle);
        glVertex2f(sunX + x, sunY + y);  // Vertices of the sun
    }
    glEnd();

    // Cloud 1 (top left)
    glColor3f(1.0f, 1.0f, 1.0f);  // White cloud
    float cloudX = -6.0f, cloudY = 7.0f, cloudRadius = 0.8f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cloudX, cloudY);  // Center of the cloud
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = cloudRadius * cos(angle);
        float y = cloudRadius * sin(angle);
        glVertex2f(cloudX + x, cloudY + y);  // Cloud vertices
    }
    glEnd();

    // Cloud 2 (slightly below and right of the first)
    cloudX = -5.0f;
    cloudY = 7.0f;
    cloudRadius = 0.9f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cloudX, cloudY);  // Center of the cloud
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = cloudRadius * cos(angle);
        float y = cloudRadius * sin(angle);
        glVertex2f(cloudX + x, cloudY + y);  // Cloud vertices
    }
    glEnd();

    // Cloud 3 (slightly right)
    cloudX = -4.0f;
    cloudY = 7.0f;
    cloudRadius = 0.8f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cloudX, cloudY);  // Center of the cloud
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = cloudRadius * cos(angle);
        float y = cloudRadius * sin(angle);
        glVertex2f(cloudX + x, cloudY + y);  // Cloud vertices
    }
    glEnd();


    // Cloud 4 (top right, second cloud)
    cloudX = 4.0f;
    cloudY = 8.0f;
    cloudRadius = 0.9f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cloudX, cloudY);  // Center of the cloud
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = cloudRadius * cos(angle);
        float y = cloudRadius * sin(angle);
        glVertex2f(cloudX + x, cloudY + y);  // Cloud vertices
    }
    glEnd();

    // Cloud 5 (slightly below and right of the first)
    cloudX = 5.0f;
    cloudY = 8.0f;
    cloudRadius = 1.0f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cloudX, cloudY);  // Center of the cloud
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = cloudRadius * cos(angle);
        float y = cloudRadius * sin(angle);
        glVertex2f(cloudX + x, cloudY + y);  // Cloud vertices
    }
    glEnd();

    // Cloud 6 (slightly below and right of the second)
    cloudX = 6.0f;
    cloudY = 8.0f;
    cloudRadius = 0.9f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cloudX, cloudY);  // Center of the cloud
    for (int i = 0; i <= 100; i++) {
        float angle = i * 2.0f * 3.14159f / 100;
        float x = cloudRadius * cos(angle);
        float y = cloudRadius * sin(angle);
        glVertex2f(cloudX + x, cloudY + y);  // Cloud vertices
    }
    glEnd();





    // Tree 1 (red and green)
    glColor3f(1.0f, 0.0f, 0.0f); // red color
    glBegin(GL_POLYGON);
    glVertex2f(-8.0f, -4.0f);
    glVertex2f(-7.5f, -4.0f);
    glVertex2f(-7.5f, -1.0f);
    glVertex2f(-8.0f, -1.0f);
    glEnd();

    // Roof of tree 1 (triangle)
    glColor3f(0.0f, 0.39f, 0.0f); // dark green color for the tree
    glBegin(GL_TRIANGLES);
    glVertex2f(-9.1f, -1.2f);
    glVertex2f(-6.4f, -1.2f);
    glVertex2f(-7.7f, -0.0);
    glEnd();

    // Roof of tree 1 (triangle)
    glColor3f(0.0f, 0.39f, 0.0f); // dark green color for the tree
    glBegin(GL_TRIANGLES);
    glVertex2f(-8.9f, -0.3f);
    glVertex2f(-6.5f, -0.3f);
    glVertex2f(-7.7f, 1.5);
    glEnd();

    // Tree 2 (red and green)
    glColor3f(1.0f, 0.0f, 0.0f); // red color
    glBegin(GL_POLYGON);
    glVertex2f(-5.5f, -4.0f);
    glVertex2f(-5.0f, -4.0f);
    glVertex2f(-5.0f, -1.0f);
    glVertex2f(-5.5f, -1.0f);
    glEnd();

    // Roof of tree 2 (triangle)
    glColor3f(0.0f, 0.39f, 0.0f); // dark green color for the tree
    glBegin(GL_TRIANGLES);
    glVertex2f(-6.5f, -1.2f);
    glVertex2f(-4.0f, -1.2f);
    glVertex2f(-5.2f, 0.0);
    glEnd();

    // Roof of tree 2 (triangle)
    glColor3f(0.0f, 0.39f, 0.0f); // dark green color for the tree
    glBegin(GL_TRIANGLES);
    glVertex2f(-6.6f, -0.3f);
    glVertex2f(-3.8f, -0.3f);
    glVertex2f(-5.2f, 1.50);
    glEnd();

    // Mountains
    glColor3f(0.8f, 0.8f, 0.8f); // dark white color for mountain 
    glBegin(GL_TRIANGLES);
    glVertex2f(4.0f, 1.0f);
    glVertex2f(6.0f, 1.0f);
    glVertex2f(4.9f, 7.0);
    glEnd();

    glColor3f(0.8f, 0.8f, 0.8f); // dark white color for mountain 
    glBegin(GL_TRIANGLES);
    glVertex2f(5.0f, 1.0f);
    glVertex2f(8.0f, 1.0f);
    glVertex2f(7.0f, 6.0);
    glEnd();

    glColor3f(0.8f, 0.8f, 0.8f);  // dark white color for mountain 
    glBegin(GL_TRIANGLES);
    glVertex2f(8.0f, 1.0f);
    glVertex2f(10.0f, 1.0f);
    glVertex2f(8.9f, 6.0);
    glEnd();

    // House road
    glColor3f(0.196f, 0.196f, 0.196f);  // Dark gray
    glBegin(GL_POLYGON);
    glVertex2f(-0.5f, -8.0f);
    glVertex2f(0.5f, -8.0f);
    glVertex2f(0.5f, -1.0f);
    glVertex2f(-0.5f, -1.0f);
    glEnd();

    // Road line 1
    glColor3f(1.0f, 1.0f, 1.0f);  // White road line
    glBegin(GL_POLYGON);
    glVertex2f(-10.0f, -8.0f);
    glVertex2f(10.0f, -8.0f);
    glVertex2f(10.0f, -7.1f);
    glVertex2f(-10.0f, -7.1f);
    glEnd();


    // Road line 2
    glColor3f(0.196f, 0.196f, 0.196f);  // Dark gray
    glBegin(GL_POLYGON);
    glVertex2f(-6.0f, -8.0f);
    glVertex2f(-4.0f, -8.0f);
    glVertex2f(-4.0f, -7.1f);
    glVertex2f(-6.0f, -7.1f);
    glEnd();

    // Road line 3
    glColor3f(0.196f, 0.196f, 0.196f);  // Dark gray
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, -8.0f);
    glVertex2f(2.0f, -8.0f);
    glVertex2f(2.0f, -7.1f);
    glVertex2f(0.0f, -7.1f);
    glEnd();

    // Road line 4
    glColor3f(0.196f, 0.196f, 0.196f);  // Dark gray
    glBegin(GL_POLYGON);
    glVertex2f(6.0f, -8.0f);
    glVertex2f(8.0f, -8.0f);
    glVertex2f(8.0f, -7.1f);
    glVertex2f(6.0f, -7.1f);
    glEnd();








    // House Base (walls)
    glColor3f(0.8f, 0.0f, 0.0f);  // Red color for the walls
    glBegin(GL_POLYGON);
    glVertex2f(-3.0f, -1.0f);
    glVertex2f(3.0f, -1.0f);
    glVertex2f(3.0f, 3.0f);
    glVertex2f(-3.0f, 3.0f);
    glEnd();

    // Roof (triangle)
    glColor3f(0.6f, 0.3f, 0.0f);  // Brown color for the roof
    glBegin(GL_TRIANGLES);
    glVertex2f(-3.5f, 3.0f);
    glVertex2f(3.5f, 3.0f);
    glVertex2f(0.0f, 5.0f);
    glEnd();

    // Door
    glColor3f(0.5f, 0.25f, 0.1f);  // Brown door
    glBegin(GL_POLYGON);
    glVertex2f(-0.5f, -1.0f);
    glVertex2f(0.5f, -1.0f);
    glVertex2f(0.5f, 1.0f);
    glVertex2f(-0.5f, 1.0f);
    glEnd();

    // Windows (left window)
    glColor3f(0.9f, 0.9f, 1.0f);  // Light blue for the windows
    glBegin(GL_POLYGON);
    glVertex2f(-2.2f, 0.5f);
    glVertex2f(-1.2f, 0.5f);
    glVertex2f(-1.2f, 1.5f);
    glVertex2f(-2.2f, 1.5f);
    glEnd();

    // Windows (right window)
    glBegin(GL_POLYGON);
    glVertex2f(1.2f, 0.5f);
    glVertex2f(2.2f, 0.5f);
    glVertex2f(2.2f, 1.5f);
    glVertex2f(1.2f, 1.5f);
    glEnd();

    glFlush();
}

// Function to initialize OpenGL
void initOpenGL() {
    glClearColor(0.5f, 0.8f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10.0, 10.0, -10.0, 10.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("OpenGL House");

    initOpenGL();
    glutDisplayFunc(drawHouse);
    glutMainLoop();
    return 0;
}
