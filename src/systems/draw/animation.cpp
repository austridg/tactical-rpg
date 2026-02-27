#include "animation.h"

Animation::Animation(const std::vector<int>& frames, float fps, bool looping) 
	: m_vFrames(frames), m_fFps(fps), m_bIsLooping(looping) {}

const std::vector<int>& Animation::GetFrames() const { return m_vFrames; }

float Animation::GetFPS() const { return m_fFps; }

bool Animation::GetIsLooping() const { return m_bIsLooping; }