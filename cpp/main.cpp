#include <iostream>
#include <string>
using namespace std;

class Greeter {
	private:
		string name;
	public:
		Greeter(string Iname) {
			name=Iname;
		}

		void doGreet() {
			cout<<"Hello, "<<name<<"!"<<endl;
		}
};

int main() {
	Greeter greeter("THSITC");
	greeter.doGreet();
}