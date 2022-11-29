#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(638,'G')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(236,'Y')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(576,'H')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(422,'N')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(639,'G')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(582,'H')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(22,'Y')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(819,'B')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(24,'G')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(870,'K')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(960,'Z')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(562,'C')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(834,'M')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(194,'G')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(573,'S')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(528,'W')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(793,'A')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(102,'Q')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(108,'Z')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(654,'W')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(16,'P')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(749,'D')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(478,'N')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(809,'A')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(898,'L')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(620,'W')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(695,'X')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(378,'M')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(977,'I')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(944,'E')==true) << std::endl;
std::cout<<"Line no " << 35 <<  " " <<(tree.update(147,'T')==true) << std::endl;
std::cout<<"Line no " << 36 <<  " " <<(tree.update(631,'D')==true) << std::endl;
std::cout<<"Line no " << 37 <<  " " <<(tree.update(455,'U')==true) << std::endl;
try{std::cout<<"Line no " << 38 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 39 <<  " " <<tree.get(793) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 40 << " "; print_char_vector(tree.subMap(194,631));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<tree.ceilingEntry(898) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 43 <<  " " <<(tree.update(177,'I')==true) << std::endl;
std::cout<<"Line no " << 44 <<  " " <<(tree.update(744,'Z')==false) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<(tree.pop(102)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(654)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 52 <<  " " <<(tree.update(682,'A')==true) << std::endl;
std::cout<<"Line no " << 53 <<  " " <<(tree.update(979,'T')==false) << std::endl;
std::cout<<"Line no " << 54 <<  " " <<(tree.update(605,'B')==true) << std::endl;
try{std::cout<<"Line no " << 55 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<tree.ceilingEntry(793) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<(tree.pop(562)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<tree.floorEntry(870) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<(tree.pop(576)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<tree.get(819) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<(tree.pop(605)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(352)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<(tree.pop(639)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 69 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 70 <<  " " <<(tree.update(303,'T')==true) << std::endl;
std::cout<<"Line no " << 71 <<  " " <<(tree.update(549,'S')==true) << std::endl;
try{std::cout<<"Line no " << 72 <<  " " <<(tree.pop(582)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 73 <<  " " <<(tree.update(276,'U')==true) << std::endl;
try{std::cout<<"Line no " << 74 <<  " " <<(tree.pop(638)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 75 <<  " " <<(tree.pop(303)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 76 <<  " " <<(tree.update(884,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 77 <<  " " <<tree.get(749) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 80 <<  " " <<(tree.update(833,'D')==true) << std::endl;
try{std::cout<<"Line no " << 81 <<  " " <<(tree.pop(549)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(194)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 83 <<  " " <<(tree.update(764,'L')==false) << std::endl;
try{std::cout<<"Line no " << 84 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<tree.ceilingEntry(834) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 86 <<  " " <<(tree.update(149,'Q')==true) << std::endl;
std::cout<<"Line no " << 87 <<  " " <<(tree.update(791,'M')==true) << std::endl;
try{std::cout<<"Line no " << 88 <<  " " <<tree.floorEntry(819) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 90 <<  " " <<(tree.update(140,'R')==true) << std::endl;
try{std::cout<<"Line no " << 91 <<  " " <<tree.floorEntry(833) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<tree.get(236) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<(tree.pop(682)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 94 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 95 <<  " " <<(tree.update(213,'L')==true) << std::endl;
std::cout<<"Line no " << 96 <<  " " <<(tree.update(705,'F')==true) << std::endl;
std::cout<<"Line no " << 97 <<  " " <<(tree.update(160,'T')==true) << std::endl;
try{std::cout<<"Line no " << 98 <<  " " <<(tree.pop(478)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<(tree.pop(749)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<(tree.pop(884)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 101 <<  " " <<(tree.update(401,'O')==false) << std::endl;
try{std::cout<<"Line no " << 102 <<  " " <<(tree.pop(944)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<tree.get(236) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<(tree.pop(213)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<(tree.pop(236)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(695)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 109 <<  " " <<(tree.update(227,'V')==true) << std::endl;
std::cout<<"Line no " << 110 << " "; print_char_vector(tree.subMap(705,791));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<tree.get(833) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<tree.floorEntry(227) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<(tree.pop(620)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 119 <<  " " <<(tree.pop(809)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<(tree.pop(160)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 121 << " "; print_char_vector(tree.subMap(422,834));std::cout << std::endl;
try{std::cout<<"Line no " << 122 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 <<  " " <<(tree.update(863,'M')==false) << std::endl;
try{std::cout<<"Line no " << 124 <<  " " <<(tree.pop(455)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 125 <<  " " <<(tree.update(252,'A')==true) << std::endl;
std::cout<<"Line no " << 126 <<  " " <<(tree.update(460,'R')==false) << std::endl;
try{std::cout<<"Line no " << 127 <<  " " <<tree.floorEntry(276) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<(tree.pop(227)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 129 <<  " " <<(tree.update(521,'B')==true) << std::endl;
try{std::cout<<"Line no " << 130 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 131 <<  " " <<(tree.update(418,'Z')==true) << std::endl;
std::cout<<"Line no " << 132 <<  " " <<(tree.update(903,'L')==false) << std::endl;
std::cout<<"Line no " << 133 <<  " " <<(tree.update(552,'B')==true) << std::endl;
try{std::cout<<"Line no " << 134 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
