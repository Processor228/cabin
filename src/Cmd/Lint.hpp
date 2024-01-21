#pragma once

#include "../Rustify.hpp"

#include <span>

// NOLINTNEXTLINE(readability-identifier-naming)
static inline constexpr StringRef lintDesc = "Lint codes using cpplint";

void lintHelp() noexcept;
int lintMain(std::span<const StringRef> args);
