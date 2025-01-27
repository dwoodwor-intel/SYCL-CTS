/*******************************************************************************
//
//  SYCL 2020 Conformance Test Suite
//
//  Provides tests for several reductions in one kernel.
//
*******************************************************************************/

#include "reduction_with_several_reductions_in_kernel.h"

#define TEST_NAME reduction_with_several_reductions_in_kernel

namespace TEST_NAMESPACE {
using namespace sycl_cts;

/** Test instance
 */
class TEST_NAME : public sycl_cts::util::test_base {
 public:
  /** return information about this test
   */
  void get_info(test_base::info& out) const override {
    set_test_info(out, TOSTRING(TEST_NAME), TEST_FILE);
  }

  /** execute the test
   */
  void run(util::logger& log) override {
    {
      auto queue = util::get_cts_object::queue();
      reduction_with_several_reductions_in_kernel_h::run_all_tests(queue, log);
    }
  }
};

// construction of this proxy will register the above test
util::test_proxy<TEST_NAME> proxy;
}  // namespace TEST_NAMESPACE
