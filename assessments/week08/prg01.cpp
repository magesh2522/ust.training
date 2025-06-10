/*#include<iostream>
#include <vector>
#include<string>

using namespace std;

MOVE INSTRUCTIONS
MOV AX,500
MOV AX,[4]
MOV[4],AX
MOV[4],500
MOV[4][3]


ARITHMETIC INSTRUCTIONS 

ADD AX,BX
SUB BX,[3]
MUL [4],[3]V
HALT INSTRUCTION

HLT //HALTS THE EXECUTION OF THE PROGRAM

/// <summary>
/// Emulating a simple 16-Bit Microprocessor
/// Architecture -16-bit,register:AX,BX,CX,DX
/// 64KB ,byte addressable memor 
/// assembly Language ,MOV,ADD,SUB,MUL,DIV,HLT-instruction end 
/// Move Instruction MOV AX,500 MOV AX,[4] MOV[4],AX MOVE [4]500 MOV [4],[3]
/// ARITHMETIC ADD AX,BX
/// SUB BX ,[3]
/// MUL [4],20
/// DIV [4],[3]
/// HALT HLT //HALTS THE EXECUTION OFVTHE PROGGRAM
/// 
//
/// </summary>
/// 
//    // Emulating a simple 16-bit Microprocessor Architecture
        class Microprocessor {
        public:
            int AX, BX, CX, DX;
            int memory[65536]; // 64KB memory

            Microprocessor() : AX(0), BX(0), CX(0), DX(0) 
            {
                fill(begin(memory), end(memory), 0);
            }

            void MOV(int& dest, int src)
            {
                dest = src;
            }

            void ADD(int& dest, int src) {
                dest += src;
            }

            void SUB(int& dest, int src) {
                dest -= src;
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
        };


        int main() {


        }




        

        ifstream file("instructions.txt"); // Open the file
        string instruction;

        if (!file) {
            cout << "Error opening file!" << endl;
            return 1;
        }

        Microprocessor cpu; // Create an instance of your processor

        while (getline(file, instruction)) { // Read line by line
            cpu.ExecuteInstruction(instruction); // Execute each instruction
        }

        file.close(); // Close the file
        cpu.DisplayRegisters(); // Show final register values

        return 0;
    }
};*/
	

/*#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>
#include <fstream>
#include <string>

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
    void MUL(int& val1, int val2) {
        val1 *= val2;
    }
    void DIV(int& val1, int val2) {
        if (val2 != 0) val1 /= val2;
        else cout << "Division Not allowed!" << endl;
    }

    void DisplayRegisters() {
        cout << "AX: " << AX << " BX: " << BX << " CX: " << CX << " DX: " << DX << endl;
    }

    void ExecuteInstruction(const string& instruction) {
        stringstream s(instruction);
        string log, arg1, arg2;
        s >> log >> arg1 >> arg2;

        if (log == "MOV") {
            if (arg1[0] == '[') MOV_MEM(stoi(arg1.substr(1, arg1.size() - 2)), stoi(arg2));
            else if (arg2[0] == '[') MOV_MEM_TO_REG(GetRegister(arg1), stoi(arg2.substr(1, arg2.size() - 2)));
            else MOV(GetRegister(arg1), stoi(arg2));
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
        else if (log == "HLT") {
            cout << "Exit" << endl;
        }
    }

    int& GetRegister(string name) {
        if (name == "AX") return AX;
        if (name == "BX") return BX;
        if (name == "CX") return CX;
        if (name == "DX") return DX;
        throw invalid_argument("Invalid Register Name");
    }

    void LoadInstructionsFromFile(const string& filename) {
        ifstream file(filename);
        string line;
        if (file.is_open()) {
            while (getline(file, line)) {
                ExecuteInstruction(line);
            }
            file.close();
        }
        else {
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
#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

class Microprocessor {
public:
    int AX, BX, CX, DX;
    unordered_map<int, int> memory; // Dynamic memory handling

    Microprocessor() : AX(0), BX(0), CX(0), DX(0) {}

    void MOV(int& dest, int src) { dest = src; }//register value
    void MOV_MEM(int addr, int value) { memory[addr] = value; }//memory address
    void MOV_REG_TO_MEM(int addr, int& src) { memory[addr] = src; }//register to memory
    void MOV_MEM_TO_REG(int& dest, int addr) { dest = memory[addr]; }

    //operator 
    void ADD(int& val1, int val2) {
        val1 += val2;
    }
    void SUB(int& val1, int val2) {
        val1 -= val2; 
    }
    void MUL(int& val1, int val2) {
        val1 *= val2; 
    }
    void DIV(int& val1, int val2) {
        if (val2 != 0) val1 /= val2;
        else cout << "Error: Division by zero!" << endl;
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
                cout << stoi(arg1.substr(1, arg1.size() - 2)) << endl;
                cout << (GetRegister(arg1), stoi(arg2.substr(1, arg2.size() - 2))) << endl;

                if (arg1[0] == '[') MOV_MEM(stoi(arg1.substr(1, arg1.size() - 2)), stoi(arg2));
                else if (arg2[0] == '[') MOV_MEM_TO_REG(GetRegister(arg1), stoi(arg2.substr(1, arg2.size() - 2)));
                else MOV(GetRegister(arg1), stoi(arg2));
            }
            else if (log == "ADD") {
                ADD(GetRegister(arg1), GetRegister(arg2));
            }
            else if (log == "SUB") {
                SUB(GetRegister(arg1), GetRegister(arg2));
            }
            else if (log == "MUL") 
            {
                MUL(GetRegister(arg1), GetRegister(arg2));
            }
            else if (log == "DIV")
            {
                DIV(GetRegister(arg1), GetRegister(arg2));
            }
            else if (log == "HLT")
            {
                cout << "Halting Execution!" << endl;
            }
            else 
            
            {
                cout << "Error: Invalid instruction - " << instruction << endl;
            }
        }
        catch (exception& e) {
            cout << "Error processing instruction: " << instruction << " - " << e.what() << endl;
        }
    }

    int& GetRegister(string name) {
        if (name == "AX")
        {
            return AX;
        }
        if (name == "BX")
        {
            return BX;
        }
        if (name == "CX") {
            return CX;
        }
        if (name == "DX") {
            return DX;
        }
        else {

            throw invalid_argument("Invalid Register Name");
        }
    }

    void LoadInstructionsFromFile(const string& filename) {
        ifstream file("instructions.txt");
        string line;
        if (file.is_open()) {
            while (getline(file, line)) {
                ExecuteInstruction(line);
            }
            file.close();
        }
        else {
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