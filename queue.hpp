#include <vector>
#include <stdint.h>

template <typename T> class Queue {
	public:
		Queue(std::vector<T> data) : data_(data) {
		}

		~Queue() {
		}

	T ReturnValue (bool mode) {
	if (mode) {
		return data_.back();
	} else {
		T tmp_val = data_.front();
		data_.clear();
		return tmp_val;
	}
}

	private:
		std::vector<T> data_;
	
};