#include "sprite.h"
#include <stdexcept>

Sprite::Sprite(const std::string& sTexturePath, int nFrameWidth, int nFrameHeight)
    : m_nFrameWidth(nFrameWidth), m_nFrameHeight(nFrameHeight), m_fElapsedTime(0.0f), m_nCurrentFrame(0), m_CurrentAnimation(nullptr)
{
    // load texture in raylib (sends to gpu)
    m_tTexture = LoadTexture(sTexturePath.c_str());

    if (m_tTexture.id == 0) {
        throw std::runtime_error("Failed to load texture.");
    }
}

Sprite::~Sprite() {
    // unload texture from gpu
    UnloadTexture(m_tTexture);
}

void Sprite::AddAnimation(const std::string& sName, Animation AnimationObject) {
    // add new animation in animations map, convert AnimationObject to rvalue
    m_Animations.emplace(sName, std::move(AnimationObject));
}

void Sprite::Play(const std::string& sName, bool bRestart) {
    // create iterator for animations map
    auto it = m_Animations.find(sName);
    if (it == m_Animations.end()) { return; }

    // get new animation from name
    const Animation* pNewAnimation = &it->second;

    // if new animation isn't new or if restart animation is true
    if (m_CurrentAnimation != pNewAnimation || bRestart) {

        // set current animation to new animation
        m_CurrentAnimation = pNewAnimation;

        // reset frame and elapsed time
        m_nCurrentFrame = 0;
        m_fElapsedTime = 0.0f;

    }
}

void Sprite::Update(float fDeltaTime) {
    if (!m_CurrentAnimation)
        return;

    // increment elapsed time
    m_fElapsedTime += fDeltaTime;

    // get time needed to pass before next frame
    float fTimePerFrame = 1.0f / m_CurrentAnimation->GetFPS();
    
    // if enough time has passed to move on to the next frame
    if (m_fElapsedTime >= fTimePerFrame)
    {
        m_fElapsedTime -= fTimePerFrame;
        m_nCurrentFrame++;

        // check if on last frame
        int nFrameCount = static_cast<int>(m_CurrentAnimation->GetFrames().size());

        if (m_nCurrentFrame >= nFrameCount) {
            // if looping, repeat animation
            if (m_CurrentAnimation->GetIsLooping()) {
                m_nCurrentFrame = 0;
            }
            // if not looping, keep animation at last frame
            else {
                m_nCurrentFrame = nFrameCount - 1;
            }
        }
    }
}

void Sprite::Draw(Vector2 vPosition) const {
    if (!m_CurrentAnimation)
        return;

    // get current frame index
    int nFrameIndex = m_CurrentAnimation->GetFrames()[m_nCurrentFrame];

    // get sprite sheet columns
    int nColumns = m_tTexture.width / m_nFrameWidth;

    // get frame column and row
    int nFrameX = (nFrameIndex % nColumns) * m_nFrameWidth;
    int nFrameY = (nFrameIndex / nColumns) * m_nFrameHeight;

    // create rectangle
    Rectangle recSource = {
        static_cast<float>(nFrameX),
        static_cast<float>(nFrameY),
        static_cast<float>(m_nFrameWidth),
        static_cast<float>(m_nFrameHeight)
    };

    // draw the sprite
    DrawTextureRec(m_tTexture, recSource, vPosition, WHITE);
}