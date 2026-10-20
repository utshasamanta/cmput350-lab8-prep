// maybe something here...
#include "vector_util.h"
#include <SFML/System/Vector2.hpp>

struct BasicTransform {
    // methods...
    BasicTransform(const sf::Vector2f& customScale = {1.0f, 1.0f},
                   const sf::Vector2f& customTranslation = {0.0f, 0.0f})
        : scale(customScale), translation(customTranslation) {}

    sf::Vector2f applyPoint(const sf::Vector2f& p) const { return p * scale + translation; }

    sf::Vector2f applyVector(const sf::Vector2f& p) const { return p * scale; }

    bool operator==(const BasicTransform& other) const {
        return scale == other.scale && translation == other.translation;
    }

    sf::Vector2f scale;
    sf::Vector2f translation;
};
