#pragma once

// component constructors
#define P(x, y) (point) {x, y}

#define CIRC_COLLIDER(root, r) (collider) {root, {.radius=r}}

#define RECT_COLLIDER(root, width, height) (collider) {root, {.wh={width, height}}}

typedef struct { double x, y; } point;

// Declare components
typedef point position;

typedef struct {
  position root;
  union {
    position wh;
    double radius;
  } size; 
} collider;

typedef struct {
  double level; // 0.0 <-> 1.0
  unsigned char isfemboy;
  unsigned char isdragqueen;
} homosexuality;

typedef enum {
  POSITION_T,
  COLLIDER_T,
  HOMOSEXUALITY_T
} component_type;
