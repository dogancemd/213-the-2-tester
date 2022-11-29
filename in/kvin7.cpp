#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(487,'K')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(61,'L')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(44,'Q')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(365,'F')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(75,'H')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(771,'H')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(322,'V')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(150,'A')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(157,'A')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(964,'K')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(682,'O')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(797,'S')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(276,'Q')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(753,'E')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(693,'L')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(114,'S')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(805,'G')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(353,'M')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(198,'M')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(742,'N')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(221,'D')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(25,'U')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(955,'V')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(968,'S')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(1,'O')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(496,'X')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(395,'A')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(686,'A')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(7,'U')==true) << std::endl;
std::cout<<"Line no " << 34 << " "; print_char_vector(tree.subMap(114,693));std::cout << std::endl;
std::cout<<"Line no " << 35 <<  " " <<(tree.update(714,'R')==true) << std::endl;
try{std::cout<<"Line no " << 36 <<  " " <<tree.floorEntry(1) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<(tree.pop(44)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 38 <<  " " <<(tree.update(781,'F')==false) << std::endl;
std::cout<<"Line no " << 39 <<  " " <<(tree.update(447,'U')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 41 << " "; print_char_vector(tree.subMap(25,955));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<(tree.pop(640)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 44 <<  " " <<(tree.update(420,'T')==true) << std::endl;
try{std::cout<<"Line no " << 45 <<  " " <<(tree.pop(114)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 46 <<  " " <<(tree.update(928,'O')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<tree.ceilingEntry(686) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<(tree.pop(276)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<(tree.pop(580)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(496)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<(tree.pop(753)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<tree.floorEntry(955) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 55 <<  " " <<(tree.update(695,'O')==true) << std::endl;
std::cout<<"Line no " << 56 <<  " " <<(tree.update(60,'F')==true) << std::endl;
try{std::cout<<"Line no " << 57 <<  " " <<(tree.pop(221)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 58 << " "; print_char_vector(tree.subMap(25,198));std::cout << std::endl;
try{std::cout<<"Line no " << 59 <<  " " <<tree.floorEntry(157) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 60 <<  " " <<(tree.update(713,'P')==true) << std::endl;
std::cout<<"Line no " << 61 <<  " " <<(tree.update(838,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 62 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 63 <<  " " <<(tree.update(79,'X')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 65 <<  " " <<(tree.update(703,'X')==true) << std::endl;
try{std::cout<<"Line no " << 66 <<  " " <<(tree.pop(487)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(693)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<tree.floorEntry(714) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 69 <<  " " <<(tree.update(870,'M')==true) << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<(tree.pop(60)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 72 <<  " " <<tree.floorEntry(805) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<tree.get(695) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<(tree.pop(797)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 <<  " " <<(tree.update(886,'N')==true) << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<tree.floorEntry(157) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<(tree.pop(75)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<(tree.pop(150)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 81 <<  " " <<(tree.update(20,'F')==true) << std::endl;
std::cout<<"Line no " << 82 <<  " " <<(tree.update(331,'P')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<tree.ceilingEntry(420) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(157)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<tree.floorEntry(713) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<tree.ceilingEntry(714) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<tree.get(420) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<(tree.pop(322)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 92 << " "; print_char_vector(tree.subMap(198,805));std::cout << std::endl;
try{std::cout<<"Line no " << 93 <<  " " <<tree.get(79) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 95 << " "; print_char_vector(tree.subMap(395,447));std::cout << std::endl;
try{std::cout<<"Line no " << 96 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<(tree.pop(420)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<(tree.pop(61)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 101 <<  " " <<(tree.update(343,'I')==true) << std::endl;
std::cout<<"Line no " << 102 << " "; print_char_vector(tree.subMap(331,771));std::cout << std::endl;
try{std::cout<<"Line no " << 103 <<  " " <<tree.floorEntry(395) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 104 <<  " " <<(tree.update(564,'T')==false) << std::endl;
std::cout<<"Line no " << 105 << " "; print_char_vector(tree.subMap(838,838));std::cout << std::endl;
try{std::cout<<"Line no " << 106 <<  " " <<tree.ceilingEntry(365) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 110 <<  " " <<tree.ceilingEntry(343) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 112 <<  " " <<(tree.update(752,'N')==true) << std::endl;
try{std::cout<<"Line no " << 113 <<  " " <<(tree.pop(395)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<(tree.pop(353)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<(tree.pop(771)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<(tree.pop(742)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 119 << " "; print_char_vector(tree.subMap(703,752));std::cout << std::endl;
try{std::cout<<"Line no " << 120 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<(tree.pop(365)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 122 <<  " " <<(tree.update(419,'N')==true) << std::endl;
std::cout<<"Line no " << 123 <<  " " <<(tree.update(611,'K')==true) << std::endl;
try{std::cout<<"Line no " << 124 <<  " " <<tree.ceilingEntry(686) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 125 <<  " " <<(tree.update(43,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 126 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 127 <<  " " <<(tree.update(618,'M')==true) << std::endl;
std::cout<<"Line no " << 128 <<  " " <<(tree.update(690,'G')==false) << std::endl;
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(713)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<tree.floorEntry(43) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<tree.ceilingEntry(611) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 133 <<  " " <<(tree.update(674,'U')==true) << std::endl;
try{std::cout<<"Line no " << 134 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
