
// Namespace is required to demonstrate bug.
namespace internal {
  // Template declaration is required to demonstrate bug.
     template <bool>
     struct CompileAssert {};
   }

// Unparses as: typedef struct internal::CompileAssert< true > [1]arg_count_mismatch[1];
// typedef struct internal::CompileAssert< true > arg_count_mismatch[1];

// typedef struct internal::CompileAssert< true > arg_count_mismatch[1];

struct internal::CompileAssert<true> alt_arg_count_mismatch[1];
// struct CompileAssert<true> alt_arg_count_mismatch[1];

void foo()
   {
  // This tests to make sure that alt_arg_count_mismatch was declared as an array.
     alt_arg_count_mismatch[1] = internal::CompileAssert<true>();
   }


