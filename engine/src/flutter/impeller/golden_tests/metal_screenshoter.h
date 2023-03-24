// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#pragma once

#include "flutter/fml/macros.h"
#include "flutter/impeller/aiks/picture.h"
#include "flutter/impeller/golden_tests/metal_screenshot.h"
#include "flutter/impeller/playground/playground_impl.h"

namespace impeller {
namespace testing {

/// Converts `Picture`'s to `MetalScreenshot`'s with the playground backend.
class MetalScreenshoter {
 public:
  MetalScreenshoter();

  std::unique_ptr<MetalScreenshot> MakeScreenshot(Picture&& picture,
                                                  const ISize& size = {300,
                                                                       300});

 private:
  std::unique_ptr<PlaygroundImpl> playground_;
  std::unique_ptr<AiksContext> aiks_context_;
};

}  // namespace testing
}  // namespace impeller
