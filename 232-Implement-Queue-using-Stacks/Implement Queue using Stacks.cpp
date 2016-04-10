class Queue {
public:
	stack<int> s1;
	stack<int> s2;
	// Push element x to the back of queue.
	void push(int x) {
		s1.push(x);
		//cout << "push: " << x << " successfully" << endl;
	}

	// Removes the element from in front of queue.
	void pop(void) {
		if (!(s1.empty())) {

			while (!(s1.empty())) {
				int tmp = s1.top();
				s1.pop();
				s2.push(tmp);
			}
			//int ret = s2.top();
			s2.pop();
			while (!(s2.empty())) {
				int tmp = s2.top();
				s2.pop();
				s1.push(tmp);
			}
		}
		//cout << "pop successfully" << endl;
	}

	// Get the front element.
	int peek(void) {
		if (!(s1.empty())) {

			while ((!s1.empty())) {
				int tmp = s1.top();
				s1.pop();
				s2.push(tmp);
			}
			int ret = s2.top();
			
			while (!(s2.empty())) {
				int tmp = s2.top();
				s2.pop();
				s1.push(tmp);
			}
			return ret;
		}
	}

	// Return whether the queue is empty.
	bool empty(void) {
		return s1.empty();
	}
};
