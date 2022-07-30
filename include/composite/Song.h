//!
//!

#ifndef COMPOSITE_SONG_H
#define COMPOSITE_SONG_H

#include "composite/IComponent.h"
#include <list>

namespace DesignPattern
{
namespace Composite
{
class Song : public IComponent
{
public:
    Song(const std::string& name);
    void displayInfo() override;
    void addComponent(std::unique_ptr<IComponent>& component) override;
};
} // namespace Composite
} // namespace DesignPattern

#endif // !COMPOSITE_SONG_H
