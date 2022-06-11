#pragma once
#include "ecs.h"

// component constructors
#define P(x, y) (point) {x, y}

#define CIRC_COLLIDER(root, r) (collider) {root, {.radius=r}}

#define RECT_COLLIDER(root, width, height) (collider) {root, {.wh={width, height}}}

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
  double level;
  double breastsize;
  bool femboy;
  bool dragqueen;
  bool haspussy;
} homosexuality;

typedef enum {
  nope_T = 0, // null type must be 0
  POSITION_T,
  COLLIDER_T,
  HOMOSEXUALITY_T
} component_type;