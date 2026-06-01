#pragma once

// Keyboard default (keyboard.json) is 175; keep the longer term tuned for the
// LT() hold-or-tap keys on Space and Tab. The generated info_config.h already
// defines TAPPING_TERM, so undef before redefining (avoids -Werror redefinition).
#ifdef TAPPING_TERM
#    undef TAPPING_TERM
#endif
#define TAPPING_TERM 200
