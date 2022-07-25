#include "FacebookAdapter.h"


namespace Adapter
{
void FacebookAdapter::post_image(const std::string& img)
{
    post_facebook_image(img);
}


void FacebookAdapter::post_video(const std::string& video)
{
    post_facebook_video(video);
}

void FacebookAdapter::post_text(const std::string& text)
{
    post_facebook_text(text);
}

} //! Adapter