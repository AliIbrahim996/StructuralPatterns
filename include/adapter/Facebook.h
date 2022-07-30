//! @file Dummy facebook app

#ifndef ADAPTER_FACBOOK_H
#define ADAPTER_FACBOOK_H

#include <string>

namespace DesignPattern
{
namespace Adapter
{
namespace Facebook
{
//! Posting an image.
//! @param[in] img, The image url that you want to post.
void post_facebook_image(const std::string& img);

//! Posting a video.
//! @param[in] video, The video url that you want to post.
void post_facebook_video(const std::string& video);

//! Posting a text.
//! @param[in] text, The text string that you want to post.
void post_facebook_text(const std::string& text);

}; // namespace Facebook
} // namespace Adapter
} // namespace DesignPattern
#endif // !ADAPTER_FACBOOK_H
