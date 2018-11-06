#include <iostream>

using namespace std;


int main () {
	class Robot 
	{

	public:
		
		string name;
		string color;
		int weight;
		string mode;


		Robot (string n, string c, int w, string m){
			this->name = n;
			this->color = c;
			this->weight = w;
			this->mode = m;
		}

		void introduceSelf(){

			std :: cout << "My name is" << this->name << endl;

		}

		Robot r1 -> new Robot ( "Tom", "Red", 30, "happy");
		Robot r2 -> new Robot ("Jerry", "Blue", 40, "sad");

		r1->introduceSelf();
		r2->introduceSelf();
		
	};
	class person
	{
	public:

		string name;
		string personality;
		bool isSitting;
		Robot robotOwned;

		person(string n, string p, bool i){
			this->name = n;
			this->personality = p;
			this->isSitting = i;
		}

		Robot->introduceSelf()
		person();
		~person();
		
	};
}