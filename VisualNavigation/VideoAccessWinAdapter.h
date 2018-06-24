#pragma once
#include "VideoAccessAdapter.h"

class VideoAccessWinAdapter : public VideoAccessAdapter {
public:
	virtual Frame* getCurrentFrame() {};
	virtual Frame** getCurrentFrames(int* size) {};
};