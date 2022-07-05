#include <iostream>

using namespace std;

int main()
{
	private:
		int elements[SIZE];
		int size;

	public:
		StackOfIntegers(){
			size = 1;
		}

		bool isEmpty(){
			return size == 0;
		}

		void push(int value) const {
			elements[size] = value;
		}

		int pop(){
			return elements[size];
		}

		int getSize(){
			return size;
		}
};

int main(void){
	for(size_t i=0; i<SIZE; i++){
		stack.push(i);
	}

	while(stack.isEmpty()){
		std::cout << stack.pop() << " ";
	}
	std::cout << std::endl;

	return 0;
}
