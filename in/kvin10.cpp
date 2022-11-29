#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(845,'T')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(573,'Z')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(668,'G')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(443,'M')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(4,'H')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(621,'Z')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(712,'T')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(718,'G')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(483,'C')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(475,'Z')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(666,'W')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(197,'E')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(533,'U')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(311,'O')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(868,'G')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(350,'E')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(386,'G')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(865,'T')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(272,'G')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(34,'N')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(521,'E')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(396,'K')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(267,'Q')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(930,'F')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(373,'V')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(891,'E')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(874,'R')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(161,'M')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(157,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 34 <<  " " <<(tree.pop(666)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<tree.floorEntry(475) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.ceilingEntry(668) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 38 <<  " " <<(tree.update(10,'B')==true) << std::endl;
try{std::cout<<"Line no " << 39 <<  " " <<(tree.pop(272)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<(tree.pop(157)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 42 <<  " " <<(tree.update(965,'M')==true) << std::endl;
try{std::cout<<"Line no " << 43 <<  " " <<(tree.pop(621)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 44 <<  " " <<(tree.update(99,'A')==true) << std::endl;
try{std::cout<<"Line no " << 45 <<  " " <<(tree.pop(10)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 46 <<  " " <<(tree.update(155,'M')==true) << std::endl;
std::cout<<"Line no " << 47 <<  " " <<(tree.update(12,'G')==true) << std::endl;
std::cout<<"Line no " << 48 <<  " " <<(tree.update(250,'P')==true) << std::endl;
try{std::cout<<"Line no " << 49 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<tree.get(891) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(12)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 52 <<  " " <<(tree.update(759,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 53 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<(tree.pop(973)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<(tree.pop(443)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<(tree.pop(759)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 57 <<  " " <<(tree.update(103,'X')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 59 << " "; print_char_vector(tree.subMap(396,718));std::cout << std::endl;
try{std::cout<<"Line no " << 60 <<  " " <<tree.get(965) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<(tree.pop(483)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 64 << " "; print_char_vector(tree.subMap(718,891));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<tree.get(197) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(427)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<tree.get(350) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 69 <<  " " <<(tree.update(445,'F')==true) << std::endl;
std::cout<<"Line no " << 70 <<  " " <<(tree.update(538,'N')==true) << std::endl;
std::cout<<"Line no " << 71 <<  " " <<(tree.update(418,'R')==true) << std::endl;
try{std::cout<<"Line no " << 72 <<  " " <<(tree.pop(311)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 73 <<  " " <<(tree.update(728,'A')==true) << std::endl;
try{std::cout<<"Line no " << 74 <<  " " <<tree.get(538) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 <<  " " <<(tree.update(696,'R')==true) << std::endl;
std::cout<<"Line no " << 76 <<  " " <<(tree.update(951,'R')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 78 << " "; print_char_vector(tree.subMap(396,930));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 81 << " "; print_char_vector(tree.subMap(718,874));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 86 <<  " " <<(tree.update(311,'V')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 88 <<  " " <<(tree.update(806,'W')==true) << std::endl;
std::cout<<"Line no " << 89 <<  " " <<(tree.update(145,'X')==true) << std::endl;
std::cout<<"Line no " << 90 << " "; print_char_vector(tree.subMap(250,538));std::cout << std::endl;
try{std::cout<<"Line no " << 91 <<  " " <<(tree.pop(311)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<(tree.pop(445)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 95 <<  " " <<(tree.pop(712)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 96 <<  " " <<(tree.update(570,'Q')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<tree.floorEntry(475) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 99 <<  " " <<(tree.update(496,'F')==true) << std::endl;
try{std::cout<<"Line no " << 100 <<  " " <<(tree.pop(418)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<tree.get(806) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<(tree.pop(533)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<(tree.pop(668)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<(tree.pop(250)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<tree.floorEntry(573) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 <<  " " <<(tree.update(223,'C')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 110 <<  " " <<(tree.pop(728)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<(tree.pop(386)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 112 <<  " " <<(tree.update(329,'L')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<(tree.pop(329)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<(tree.pop(267)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 116 <<  " " <<(tree.update(543,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 117 <<  " " <<(tree.pop(543)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 118 <<  " " <<(tree.update(731,'I')==true) << std::endl;
try{std::cout<<"Line no " << 119 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<(tree.pop(817)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 124 <<  " " <<(tree.update(57,'N')==true) << std::endl;
std::cout<<"Line no " << 125 << " "; print_char_vector(tree.subMap(350,396));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 127 <<  " " <<(tree.update(16,'H')==true) << std::endl;
try{std::cout<<"Line no " << 128 <<  " " <<(tree.pop(16)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 130 << " "; print_char_vector(tree.subMap(396,396));std::cout << std::endl;
std::cout<<"Line no " << 131 <<  " " <<(tree.update(732,'K')==true) << std::endl;
try{std::cout<<"Line no " << 132 <<  " " <<(tree.pop(57)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 133 << " "; print_char_vector(tree.subMap(496,521));std::cout << std::endl;
try{std::cout<<"Line no " << 134 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
