//!
//!
//!

#include "adapter/Instagram.h"
#include <iostream>

namespace Adapter {
void Instagram::post_image(const std::string &img) {
  std::cout << "Instagram Image: " << img << std::endl;
}

void Instagram::post_video(const std::string &video) {
  std::cout << "Instagram Video: " << video << std::endl;
}
} // namespace Adapter