/*
  ==============================================================================

    Distortion.h
    Created: 11 Aug 2020 2:01:25pm
    Author:  Robin

  ==============================================================================
*/

#pragma once

#include "DisValue.h"
#include <stdexcept>

class Distortion {
public:
	float calc(float);
	DisValue& getDisValue(int);

private:
	DisValue positive[5] {
		{0, 0, 0, false},
		{0, 0, 0, false},
		{0, 0, 0, false},
		{0, 0, 0, false},
		{0, 0, 0, false}
	};
	DisValue negative[5] {
		{0, 0, 0, false},
		{0, 0, 0, false},
		{0, 0, 0, false},
		{0, 0, 0, false},
		{0, 0, 0, false}
	};
};