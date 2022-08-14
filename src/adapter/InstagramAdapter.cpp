#include "adapter/InstagramAdapter.h"
#include "adapter/Instagram.h"
#include <stdexcept> 

namespace DesignPattern
{
namespace Adapter
{

void InstagramAdapter::post_image(const std::string& img)
{
    Instagram::post_image(img);
}
void InstagramAdapter::post_video(const std::string& video)
{
    Instagram::post_video(video);
}
void InstagramAdapter::post_text(const std::string&)
{
    throw std::runtime_error("post text is not supported in Instagram!\n");
}
} // namespace Adapter
} // namespace DesignPattern
