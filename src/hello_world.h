#pragma once

#include "pebble.h"
  
static const GPathInfo HOUR_HAND_POINTS = {
  4,
  (GPoint []){
      {-3, -3 },
      { 3, -3 },
      { 3, -25 },
      {-3, -25 }    
  }
};

