#pragma once
#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>
#include <vector>
#include <stack>
//---------------Nastoiki---------------//
 auto VIVOD_PEREMENNIH = 0;//0-vivod tok peremennih,1-vivod peremennih i slov//ne dodelano
//
//--------------------------------------//
using namespace std;


enum TypeOfBlock
{
	Nachalo,
	Konez,
	Deistvie ,
	Uslovie ,
	Zikl ,
	While,
	Vvod ,
	Vivod = Vvod,
	Function,
	Perenos1,
	Perenos2
};

 struct Block
{
	TypeOfBlock block;
	Block *next = nullptr;
	string text;
	System::Drawing::Point point;
	Block* next2 = nullptr;
	Block(TypeOfBlock block) {
		this->block = block;
	}
};

 class Shema {
 private:
	 string buffer;
	 int kolichestvo = 0;
	 int pos;
	 stack<Block*> uslovie;//pridumat norm nazvanie
 public:
	 vector<string> stroki;
	 vector<Block*> functions;
	 Block* current = nullptr;
 private:
 public:
	 Shema(string path) {
		 OpenReadFile(path);
	 }
	 ~Shema(){}
	 Shema(){}
	 Shema(System::String^ text) {
		 int i = 0;
	 }
	 void rozbit() {
		 Block* buffer = nullptr;
		 int braces = 0;
		 bool changed = false, els = false, skip = false, endblock = false, EndZikl = false,odin=false;
		 int i = 0;
		 for (i = 0; i < kolichestvo; i++) {
			 if (stroki[i].find("{") != string::npos) {
				 endblock = false;
				 if (braces == 0) {
					 changed = false;
					 if ((stroki[i].find("int main") != string::npos) || (stroki[i - 1].find("main") != string::npos)) {
						 buffer = new Block(Nachalo);
						 buffer->text = "Початок";
						 functions.push_back(buffer);
						 current = functions[functions.size()-1];
					 }
					 else {

						 buffer = new Block(Function);
						 functions.push_back(buffer);
						 current = buffer;
						 if (stroki[i].size() > 4) {
							 buffer->text = stroki[i].substr(0, stroki[i].find("{"));
						 }
						 else {
							 buffer->text = stroki[i - 1];
						 }
					 }
				 }
				 braces++;
			 }
			 else if (stroki[i].find("}") != string::npos) {
				 els = false;
				 if (!uslovie.empty()) {
					 endblock = true;
					 odin = false;
					 //uslovie.pop();
				 }
				 braces--;
				 if (braces == 0) {
					 if (current->block != Konez) {
						 changed = true;
						 buffer = new Block(Konez);
						 buffer->text = "return 0";
						 skip = true;
					 }
				 }
				 if (!uslovie.empty() &&(uslovie.top()->block == Zikl || uslovie.top()->block == While)) {
					 buffer = uslovie.top();
					 changed = true; skip = true;
				 }
			 }
			 if (stroki[i].find("printf") != string::npos) {
				 buffer = new Block(Vivod);
				 changed = true;
				 if (stroki[i].find_last_of('"') + 3 == stroki[i].size()) {
					 buffer->text = stroki[i].substr(stroki[i].find("\""), stroki[i].find_last_of("\"") - stroki[i].find("\"")).c_str();
				 }
				 else if (VIVOD_PEREMENNIH == 0) {
					 pos = stroki[i].find_last_of('"');

					 do {
						 if (stroki[i].find(",") == string::npos) {
							 buffer->text += stroki[i].substr(pos + 2, pos - stroki[i].find(","));
							 buffer->text += ", ";
						 }
						 else
						 {
							 cout << stroki[i].find(')') - 3 - pos << endl;
							 buffer->text += stroki[i].substr(pos + 3, stroki[i].find(')') - 3 - pos);
							 buffer->text += ", ";
						 }
						 pos = stroki[i].find(", ", pos + 1);
					 } while (pos != string::npos);
					 buffer->text.pop_back();
					 buffer->text.pop_back();
				 }
				 else {};
				 //current->text=stroki[i].substr(9, stroki[i].find_last_of(")") - stroki[i].find("\"") -1);
				 //cout << stroki[i].find_last_of("\"")- stroki[i].find("\"") <<endl;
				 //cout << test<<endl;
				 //cout << "vivod" << i << endl;
			 }
			 else if (stroki[i].find("cout") != string::npos) {
				 changed = true;
				 buffer = new Block(Vivod);
				 int pos2;
				 pos = stroki[i].find("<<");
					 while (pos != string::npos) {
						 if (stroki[i].find("<<", pos + 2) != string::npos) {
							 pos2 = stroki[i].find("<<", pos + 1);
						 }
						 else {
							 pos2=stroki[i].find(";", pos);
						 }
						 if (VIVOD_PEREMENNIH == 1) {
							 if (stroki[i].find('"', pos) < pos2) {//net kavichek mezdu pos i pos2
								 buffer->text = buffer->text.substr(0, buffer->text.size() - 2);
								 buffer->text += stroki[i].substr(pos + 3, pos2 - pos - 4) + " ";
							 }
							 else {
								 buffer->text += stroki[i].substr(pos + 2, pos2 - pos - 2) + ", ";
							 }
						 }
						 else {
							 if (stroki[i].find('"', pos)>pos2) {//net kavichek mezdu pos i pos2
								 buffer->text += stroki[i].substr(pos+2, pos2 - pos-2)+", ";
							 }
						 }
						 pos=stroki[i].find("<<", pos+1);
					 } 
					 buffer->text = buffer->text.substr(0, buffer->text.size() - 2);
			 }
			 else if (stroki[i].find("cin") != string::npos) {
				 changed = true;
				 buffer = new Block(Vivod);
				 int pos2;
				 pos = stroki[i].find(">>");
				 while (pos != string::npos) {
					 if (stroki[i].find(">>", pos + 2) != string::npos) {
						 pos2 = stroki[i].find(">>", pos + 1);
					 }
					 else {
						 pos2 = stroki[i].find(";", pos);
					 }
					 buffer->text += stroki[i].substr(pos + 2, pos2 - pos - 2) + ", ";
					 pos = stroki[i].find(">>", pos + 1);
				 }
				 buffer->text = buffer->text.substr(0, buffer->text.size() - 2);
			 }
			 else if (stroki[i].find("return") != string::npos) {
				 changed = true;
				 buffer = new Block(Konez);
				 buffer->text = stroki[i].substr(stroki[i].find("return"), stroki[i].find(";") - 1);
			 }
			 else if (stroki[i].find("for") != string::npos) {
				 changed = true; skip = true;
				 buffer = new Block(Zikl);
				 buffer->text = stroki[i].substr(stroki[i].find("(") + 1, stroki[i].find_last_of(")") - stroki[i].find("(") - 1);
				 uslovie.push(buffer);
			 }
			 else if (stroki[i].find("while") != string::npos) {
				 changed = true; skip = true;
				 buffer = new Block(While);
				 buffer->text = stroki[i].substr(stroki[i].find("(") + 1, stroki[i].find_last_of(")") - stroki[i].find("(") - 1);
				 uslovie.push(buffer);
			 }
			 else if (stroki[i].find("if") != string::npos) {
				 changed = true; skip = true;
				 buffer = new Block(Uslovie);
				 buffer->text = stroki[i].substr(stroki[i].find("(") + 1, stroki[i].find_last_of(")") - stroki[i].find("(") - 1);
				 uslovie.push(buffer);
			 }
			 else if (stroki[i].find("else") != string::npos) {
				 els = true; 
			 }
			 else if (stroki[i].find("=") != string::npos) {
				 changed = true;
				 buffer = new Block(Deistvie);
				 buffer->text = stroki[i].substr(stroki[i].find(" ") + 1, stroki[i].size() - stroki[i].find(" ") - 2);
				 if (buffer->text[0] == '\t') {
					 buffer->text = buffer->text.substr(1, buffer->text.size());
				 }
			 }
			 else if (stroki[i].find("(") != string::npos && stroki[i].find(")") != string::npos) {
				 if (current != nullptr && stroki[i].find("{") == string::npos) {
					 changed = true;
					 buffer = new Block(Deistvie);
					 buffer->text = stroki[i].substr(0, stroki[i].size() - 1);
					 if (buffer->text[0] == '\t') {
						 buffer->text = buffer->text.substr(1, buffer->text.size());
					 }
				 }
			 }
			 if (buffer != nullptr && changed) {
				 changed = !changed;
				 if ((endblock || els) && (!skip)) {
					 endblock = false;
					 if (!odin) {
						 uslovie.top()->next2 = buffer;
					 }
					 else {
						 uslovie.top()->next = buffer;
					 }
					 //	 EndZikl = false;
					 if (!els) { 
						// uslovie.pop();
						 goto YaEbalDumat; }
					 else {
						 if (!odin) {
							 uslovie.top() = uslovie.top()->next2;
							 odin = true;
						 }
						 else {
							 uslovie.top() = uslovie.top()->next;
						 }
					 }
				 }
				 else {
				 YaEbalDumat:
					 skip = false;
					 if (EndZikl == false) {
						 current->next = buffer;
						 current = current->next;
					 }
					 else {
						 current->next2 = buffer;
						 current = current->next2;
						 EndZikl = false;
					 }
					 if (stroki[i].find("}") != string::npos) {
						 //
						 if (!uslovie.empty() && (uslovie.top()->block == Zikl || uslovie.top()->block == While)) {
							 EndZikl = true;
						 }
					 }

				 }
			 }
			 if(i>=1 && !uslovie.empty()&&(stroki[i].find("else") == string::npos|| stroki[i-1].find("else") == string::npos) &&( stroki[i-1].find("}") != string::npos)){
				 uslovie.pop();
			 }
		 }

		 //potom udalit
		 stack<Block*> stolb;
		 for (int i = 0; i < functions.size(); i++) {
			 stolb.push(functions[i]);
			 while (!stolb.empty()) {
				 current = stolb.top();
				 stolb.pop();
				 while (current != nullptr) {
					 if (current->next == nullptr && current->next2 != nullptr) {
						 current->next = current->next2;
						 current->next2 = nullptr;
					 }
					 if (!stolb.empty() && current->next2 == stolb.top()) {
						current = current->next2;
					 }
					 else {
						 if (current->next2) {
							 stolb.push(current->next2);
						 }
						 if (!stolb.empty() && current->next != stolb.top()) {
							 current = current->next;
						 }
						 else {
							 current = current->next2;
						 }
					 }
				 }
			 }
		 }
	 }
	 void print() {
		 //ne rabotaet
		 /*current = functions[0];
		 while (current != nullptr) {
			 cout << current->block << " " << current->text << endl;
			 current = current->next;
		 }*/
	 }
	 void OpenReadFile(string path) {
		 fstream file;
		 file.open(path);
		 if (!file.is_open()) {
			 cout << "ne otkrito";
			 throw new exception("Oshibla pri otkritii");
		 }
		 while (getline(file, buffer))
		 {
			 if (buffer!="") {
				 stroki.push_back(buffer);
				 kolichestvo++;
			 }
		 }
	 }
	 class Iterator {
		 Block* cur;
	 public:
		 Iterator(Block* b):cur(b){}
		 Block& operator++() {

		 }

	 };
	 Iterator begin() {
		 return Shema::functions[0];
	 }
	 Iterator end() {
		 Block* cur=functions[functions.size() - 1];
		 while (cur->next != nullptr && cur->next2 != nullptr) {
			 if (cur->next != nullptr) {
				 cur = cur->next;
			 }
			 else {
				 cur = cur->next2;
			 }
		 }
		 return cur;
	}
 };