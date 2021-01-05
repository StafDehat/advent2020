#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

int lights[1000][1000];

void toggle(int minX, int minY, int maxX, int maxY) {
  for (int x=minX, x<=maxX, x++) {
    for (int y=minY, y<=maxY, y++) {
      lights[x][y] = ! lights[x][y];
    }
  }
}

void set(int minX, int minY, int maxX, int maxY, int state) {
  for (int x=minX, x<=maxX, x++) {
    for (int y=minY, y<=maxY, y++) {
      lights[x][y] = state;
    }
  }
}

int countLit() {
  int count=0;
  for (int x=minX, x<=maxX, x++) {
    for (int y=minY, y<=maxY, y++) {
      if ( lights[x][y] )
        count++;
    }
  }
}

int meat(FILE *fp) {
  // Initialize every light to 0
  for (int i=0; i<1000; i++) {
    memset(lights[i], 0, 1000*sizeof(int));
  }

  while ( fgets(line,100,fp) ) {
    
  }

  int numLit = countLit();
  printf("Number of lights lit: %i\n", numLit);
}

int main( int argc, char *argv[] ) {
  char * filename = argv[1];
  FILE *fp;
  fp = fopen(filename, "r");

  meat(fp);
}

