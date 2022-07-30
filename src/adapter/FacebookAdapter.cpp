#include "adapter/FacebookAdapter.h"

namespace DesignPattern
{
namespace Adapter
{

void FacebookAdapter::post_image(const std::string& img)
{
    Facebook::post_facebook_image(img);
}

void FacebookAdapter::post_video(const std::string& video)
{
    Facebook::post_facebook_video(video);
}

void FacebookAdapter::post_text(const std::string& text)
{
    Facebook::post_facebook_text(text);
}

} // namespace Adapter
} // namespace DesignPattern
