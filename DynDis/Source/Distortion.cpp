/*
  ==============================================================================

    Distortion.cpp
    Created: 11 Aug 2020 2:01:25pm
    Author:  Robin

  ==============================================================================
*/

#include "Distortion.h"

#include <JuceHeader.h>

static const DisValue FIRST {0,    0,    0, false};
static const DisValue LAST  {1, 1, 0, false};

float Distortion::calc(float x)
{
	DisValue list[6];
	if (x >= 0) {
		list[0] = positive[0];
		list[1] = positive[1];
		list[2] = positive[2];
		list[3] = positive[3];
		list[4] = positive[4];
	}
	else {
		list[0] = negative[0];
		list[1] = negative[1];
		list[2] = negative[2];
		list[3] = negative[3];
		list[4] = negative[4];
	}
	// TODO Could have problems with last
	list[5] = LAST;

	std::qsort(list, 6, sizeof(DisValue), [](const void* a, const void* b) {
		DisValue arg1 = *static_cast<const DisValue*>(a);
		DisValue arg2 = *static_cast<const DisValue*>(b);
		if (arg1.input < arg2.input) return -1;
		if (arg1.input > arg2.input) return 1;
		return 0;
	});
	
	DisValue old = FIRST;

	for (DisValue value : list)
	{
		if (value.input >= x) {
			float dx = x - old.input;
			float t = dx / (value.input - old.input);
			float y = x;
			if (!value.isSmooth) {
				y = (1 - t) * old.output +
					t * value.output;
			}
			else {
				y = (1 - t) * (1 - t) * old.output +
					2 * t * (1 - t) * value.smooth +
					t * t * value.output;
			}
			return y;
		}
		old = value;
	}

	return x;
}

DisValue& Distortion::getDisValue(int i)
{
	if (i < 0 || i > 9) {
		throw std::invalid_argument("Parameter i should be between 0 and 9!");
	}
	if (i >= 5) {
		return negative[i - 5];
	}
	return positive[i];
}
