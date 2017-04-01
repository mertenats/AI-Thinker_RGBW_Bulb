#pragma once
#ifndef _AI-THINKER_RGBW_BULB_
#define _AI-THINKER_RGBW_BULB_

#include <my9291.h>         // https://github.com/xoseperez/my9291
#include "config.h"

#define MY9291_DI_PIN       13
#define MY9291_DCKI_PIN     15

typedef struct Color {
  uint8_t red;
  uint8_t green;
  uint8_t blue;
  uint8_t white;
};

class AIRGBWBulb {
  public:
    AIRGBWBulb(void);
    
    void      init(void);
    void      loop(void);
    
    bool      getState(void);
    bool      setState(bool p_state);
    
    uint8_t   getBrightness(void);
    bool      setBrightness(uint8_t p_brightness);
    
    Color     getColor(void);
    bool      setColor(uint8_t p_red, uint8_t p_green, uint8_t p_blue);
    
    bool      setWhite(uint8_t p_white);
    
    uint16_t  getColorTemperature(void);
    bool      setColorTemperature(uint16_t p_colorTemperature);

  private:
    my9291*   m_my9291;
    
    uint8_t   m_brightness;
    Color     m_color;
    uint16_t  m_colorTemperature;
    
    bool      setColor();
};

#endif
