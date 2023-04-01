#include "Experimentator.h"

double GetAverageExecutionTime(const std::function<void()>& function) {
	using namespace std::chrono;

	double totalExecutionTime = 0;

	for (int32_t experiment = 1; experiment <= EXPERIMENT_COUNT; ++experiment) {
		auto begin = high_resolution_clock().now();
		function();
		auto end = high_resolution_clock().now();
		totalExecutionTime += duration_cast<nanoseconds>(end - begin).count();
	}

	return totalExecutionTime / EXPERIMENT_COUNT;
}
