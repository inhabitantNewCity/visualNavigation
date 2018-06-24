#pragma once
#include "Frame.h"

class VideoAccessAdapter
{
public:
	virtual Frame* getCurrentFrame() = 0;
	virtual Frame** getCurrentFrames(int* size) = 0;
};