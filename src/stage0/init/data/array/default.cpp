// Lean compiler output
// Module: init.data.array.default
// Imports: init.data.array.basic
#include "runtime/object.h"
#include "runtime/apply.h"
typedef lean::object obj;    typedef lean::usize  usize;
typedef lean::uint8  uint8;  typedef lean::uint16 uint16;
typedef lean::uint32 uint32; typedef lean::uint64 uint64;
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
obj* initialize_init_data_array_basic(obj*);
static bool _G_initialized = false;
obj* initialize_init_data_array_default(obj* w) {
 if (_G_initialized) return w;
 _G_initialized = true;
w = initialize_init_data_array_basic(w);
return w;
}
