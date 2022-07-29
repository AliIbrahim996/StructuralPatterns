//! @file Adpater for the instagram code which will wrapp the logic of facbook in the common interface.

#ifndef ADAPTER_INSTAGRAM_ADAPTER
#define ADAPTER_INSTAGRAM_ADAPTER

#include "ISocialAdapter.h"
#include "Instagram.h"

namespace Adapter
{
class InstagramAdapter : public ISocialAdapter
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

}; //! InstagramAdapter
} // namespace Adapter

#endif // !ADAPTER_INSTAGRAM_ADAPTER
