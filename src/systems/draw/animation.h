#pragma once
#include <vector>

class Animation {
private:
	std::vector<int> m_vFrames;
	float m_fFps;
	bool m_bIsLooping;
public:

	Animation(const std::vector<int>& frames, float fps, bool loop);

	const std::vector<int>& GetFrames() const;
	float GetFPS() const;
	bool GetIsLooping() const;
};