#include "adapter/Instagram.h"
#include <iostream>

namespace DesignPattern
{
namespace Adapter
{
namespace Instagram
{
void post_image(const std::string& img)
{
    std::cout << "Instagram Image: " << img << std::endl;
}

void post_video(const std::string& video)
{
    std::cout << "Instagram Video: " << video << std::endl;
}

} // namespace Instagram
} // namespace Adapter
} // namespace DesignPattern
