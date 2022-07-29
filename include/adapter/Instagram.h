//! @file Dummy instagram app

#ifndef ADAPTER_INSTAGRAM_H
#define ADAPTER_INSTAGRAM_H

#include <string>

namespace Adapter
{
namespace Instagram
{

//! Posting an image.
//! @param[in] img, The image url that you want to post.
void post_image(const std::string& img);

//! Posting a video.
//! @param[in] video, The video url that you want to post.
void post_video(const std::string& video);

}; // namespace Instagram
} // namespace Adapter

#endif //! ADAPTER_INSTAGRAM_H
