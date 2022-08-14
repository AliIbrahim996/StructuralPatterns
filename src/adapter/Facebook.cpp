#include "adapter/Facebook.h"
#include <iostream>

namespace DesignPattern
{
namespace Adapter
{
namespace Facebook
{

void post_facebook_image(const std::string& img)
{
    std::cout << "Facebook Image: " << img << std::endl;
}

void post_facebook_video(const std::string& video)
{
    std::cout << "Facebook Video: " << video << std::endl;
}

void post_facebook_text(const std::string& text)
{
    std::cout << "Facebook text: " << text << std::endl;
}

} // namespace Facebook
} // namespace Adapter
} // namespace DesignPattern
