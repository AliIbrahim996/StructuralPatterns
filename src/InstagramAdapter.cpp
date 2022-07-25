//!
//!
//!

#include "adapter/InstagramAdapter.h"

namespace Adapter {
InstagramAdapter::InstagramAdapter(std::unique_ptr<Instagram> &inst)
    : instagram_{std::move(inst)} {}
void InstagramAdapter::post_image(const std::string &img) {
  instagram_->post_image(img);
}
void InstagramAdapter::post_video(const std::string &video) {
  instagram_->post_video(video);
}
void InstagramAdapter::post_text(const std::string &text) {
  throw std::runtime_error("post text is not supported in Instagram!\n");
}
} // namespace Adapter
