//! @file Adpater for the facebook code which will wrapp the logic of facbook in the common interface.

#ifndef ADAPTER_FACBOOK_ADAPTER_H
#define ADAPTER_FACBOOK_ADAPTER_H

#include "Facebook.h"
#include "ISocialAdapter.h"

namespace Adapter
{

class FacebookAdapter : public ISocialAdapter
{
public:
    //! Posting an image.
    //! @param[in] img, The image url that you want to post.
    void post_image(const std::string& img) override;

    //! Posting a video.
    //! @param[in] video, The video url that you want to post.
    void post_video(const std::string& video) override;

    //! Posting a text.
    //! @param[in] text, The text string that you want to post.
    void post_text(const std::string& text) override;

}; //! FacebookAdapter
} // namespace Adapter

#endif // !ADAPTER_FACBOOK_ADAPTER_H
