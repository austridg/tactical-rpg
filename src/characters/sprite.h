#pragma once
#include <unordered_map>
#include <string>

#include "raylib.h"
#include "../Systems/Draw/Animation.h"

class Sprite {
private:
	Texture2D m_tTexture;
	int m_nFrameWidth, m_nFrameHeight;
	std::unordered_map<std::string, Animation> m_Animations;
	const Animation* m_CurrentAnimation;
	int m_nCurrentFrame;
	float m_fElapsedTime;
public:
	Sprite(const std::string& sTexturePath, int nFrameWidth, int nFrameHeight);

	~Sprite();

	void AddAnimation(const std::string& sName, Animation AnimationObject);

	void Play(const std::string& sName, bool bRestart = false);

	void Update(float dt);
	void Draw(Vector2 vPosition) const;
};