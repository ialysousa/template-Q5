#include <iostream>
using std::cout, std:: cin, std::endl;

#include <string>
using std::string;

template < class C >
bool Comparar(const C &c1, const C &c2){
	if (c1 == c2){
    cout << "São iguais:";
		return true; 
	}
  	else{
      cout << "São diferentes:";
		return false;
	}
}

int main() {
  
  cout << Comparar<int>(30, 30) << endl;
  cout << Comparar<int>(30, 3) << endl;

  cout << Comparar<string>("IALY", "Ialy") << endl;
  cout << Comparar<string>("IALY", "IALY") << endl;

  cout << Comparar<double>(3.14,22.98) << endl;
  cout << Comparar<double>(3.14, 3.14) << endl;

  cout << Comparar<char>('T', 'T') << endl;
  cout << Comparar<char>('B', 'b') << endl;

  return 0;
}