// ========================================================================= //
// Author: Roman Getto, Matthias Bein                                        //
// mailto:roman.getto@gris.informatik.tu-darmstadt.de				         //
// GRIS - Graphisch Interaktive Systeme                                      //
// Technische Universitšt Darmstadt                                          //
// Fraunhoferstrasse 5                                                       //
// D-64283 Darmstadt, Germany                                                //
// ========================================================================= //

#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <iostream>
#include <vector>
#include <GL/glut.h>
#include <algorithm>
#include "VolumeVisualization.h"
#include "config.h"

// Basics

int main(int argc, char **argv);

void initialize();

void changeSize(int w, int h);

// Rendering

void renderScene(void);

// Callbacks

void keyPressed(unsigned char key, int x, int y);

void mousePressed(int button, int state, int x, int y);

void mouseMoved(int x, int y);

// Volume Vis

VolumeVisualization volumevis;

void drawPoints(float isovalue);

void drawMesh(float isovalue);
