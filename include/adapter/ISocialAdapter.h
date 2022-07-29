//! @file The common interface for social apps.

#ifndef ADAPTER_I_SOCIAL_ADAPTER_H
#define ADAPTER_I_SOCIAL_ADAPTER_H

#include <string>

namespace Adapter
{
class ISocialAdapter
{
public:
    //! Posting an image.
    //! @param[in] img, The image url that you want to post.
    virtual void post_image(const std::string& img) = 0;

    //! Posting a video.
    //! @param[in] video, The video url that you want to post.
    virtual void post_video(const std::string& video) = 0;

    //! Posting a text.
    //! @param[in] text, The text string that you want to post.
    virtual void post_text(const std::string& text) = 0;

}; // ISocialAdapter
} // namespace Adapter

#endif // !ADAPTER_I_SOCIAL_ADAPTER_H
