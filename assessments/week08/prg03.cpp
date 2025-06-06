/*#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>
#include<fstream>
#include <string>
#include <map>


using namespace std;

class Microprocessor {
public:
	int AX, BX, CX, DX;
	unordered_map<int, int> memory; // Dynamic memory handling

	Microprocessor() : AX(0), BX(0), CX(0), DX(0) {}

	void MOV(int& dest, int src) {
		dest = src;
	}

	void MOV_MEM(int addr, int value) {
		memory[addr] = value;
	}

	void MOV_REG_TO_MEM(int addr, int& src) {
		memory[addr] = src;
	}

	void MOV_MEM_TO_REG(int& dest, int addr) {
		dest = memory[addr];
	}

	void ADD(int& val1, int val2) {
		val1 += val2;
	}

	void SUB(int& val1, int val2) {
		val1 -= val2;
	}

	void MUL(int& dest, int src) {
		dest *= src;
	}

	void DIV(int& dest, int src) {
		if (src != 0) {
			dest /= src;
		}
		else {
			cout << " Division by zero!" << endl;
		}
	}


	void DisplayRegisters() {
		cout << "AX: " << AX << " BX: " << BX << " CX: " << CX << " DX: " << DX << endl;
	}


	void ExecuteInstruction(const string& instruction) {
		stringstream s(instruction);
		string log, arg1, arg2;
		s >> log >> arg1 >> arg2;

		try {
			if (log == "MOV") {
				if (arg1[0] == '[') {
					MOV_MEM(stoi(arg1.substr(1, arg1.size() - 2)), stoi(arg2));
				}
				else if (arg2[0] == '[') {
					MOV_MEM_TO_REG(GetRegister(arg1), stoi(arg2.substr(1, arg2.size() - 2)));
				}
				else {
					MOV(GetRegister(arg1), stoi(arg2));
				}
			}
			else if (log == "ADD") {
				ADD(GetRegister(arg1), GetRegister(arg2));
			}
			else if (log == "SUB") {
				SUB(GetRegister(arg1), GetRegister(arg2));
			}
			else if (log == "MUL") {
				MUL(GetRegister(arg1), GetRegister(arg2));
			}
			else if (log == "DIV") {
				DIV(GetRegister(arg1), GetRegister(arg2));
			}
			else {
				cout << "Unknown instruction: " << log << endl;
			}
		}
		catch (const exception& e) {
			cout << "Error executing instruction: " << e.what() << endl;
		}
		cout << "Arithmatic instruction";






	}




	int& GetRegister(string name) {
		if (name == "AX") return AX;
		if (name == "BX") return BX;
		if (name == "CX") return CX;
		if (name == "DX") return DX;
		throw invalid_argument("Invalid register name: " + name);
	}
	void calcArthmetic() {
		int arr[100];
		AX = AX + BX;
		AX = BX - arr[3];
		AX = BX * 20;
		AX = arr[4] / arr[3];
	}
	void LoadInstructionsFromFile(const string& filename)
	{
		ifstream file(filename);
		string line;
		if (file.is_open()) {
			while (getline(file, line)) {
				ExecuteInstruction(line);
			}
			file.close();
		}
		else
		{
			cerr << "Error opening " << filename << endl;
		}
	}



};
int main() {
	Microprocessor cpu;
	cpu.LoadInstructionsFromFile("instructions.txt");
	cpu.DisplayRegisters();
	return 0;
}
	*/