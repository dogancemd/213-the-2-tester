#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(630,'F')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(123,'T')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(987,'Q')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(207,'V')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(406,'N')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(890,'X')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(199,'G')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(928,'O')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(74,'K')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(606,'O')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(903,'X')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(959,'I')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(620,'T')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(848,'F')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(85,'Z')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(463,'N')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(182,'B')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(68,'L')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(358,'L')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(542,'Z')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(784,'M')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(978,'U')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(129,'F')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(112,'W')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(311,'Y')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(941,'X')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(678,'S')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(303,'H')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(7,'H')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(983,'F')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<(tree.pop(7)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<(tree.pop(848)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.floorEntry(463) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 40 << " "; print_char_vector(tree.subMap(199,207));std::cout << std::endl;
try{std::cout<<"Line no " << 41 <<  " " <<(tree.pop(463)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 44 << " "; print_char_vector(tree.subMap(207,358));std::cout << std::endl;
std::cout<<"Line no " << 45 <<  " " <<(tree.update(158,'I')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 << " "; print_char_vector(tree.subMap(123,959));std::cout << std::endl;
std::cout<<"Line no " << 49 <<  " " <<(tree.update(154,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 50 <<  " " <<tree.ceilingEntry(620) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 51 <<  " " <<(tree.update(431,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 52 <<  " " <<tree.get(941) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 53 <<  " " <<(tree.update(629,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 54 <<  " " <<tree.floorEntry(431) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<(tree.pop(199)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<tree.floorEntry(606) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<(tree.pop(606)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<(tree.pop(158)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<(tree.pop(786)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<(tree.pop(941)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<tree.floorEntry(207) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 66 <<  " " <<(tree.update(835,'Z')==true) << std::endl;
std::cout<<"Line no " << 67 <<  " " <<(tree.update(285,'L')==true) << std::endl;
std::cout<<"Line no " << 68 <<  " " <<(tree.update(430,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 69 <<  " " <<tree.ceilingEntry(430) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 70 <<  " " <<tree.ceilingEntry(207) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 71 <<  " " <<(tree.update(42,'D')==true) << std::endl;
try{std::cout<<"Line no " << 72 <<  " " <<(tree.pop(207)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<tree.get(182) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 74 <<  " " <<(tree.update(621,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 75 <<  " " <<(tree.pop(898)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 76 <<  " " <<(tree.pop(928)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 77 <<  " " <<(tree.update(876,'S')==true) << std::endl;
try{std::cout<<"Line no " << 78 <<  " " <<tree.ceilingEntry(542) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 79 <<  " " <<(tree.update(140,'P')==true) << std::endl;
try{std::cout<<"Line no " << 80 <<  " " <<(tree.pop(112)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<(tree.pop(154)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(890)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(630)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<(tree.pop(182)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 86 <<  " " <<(tree.update(26,'N')==true) << std::endl;
try{std::cout<<"Line no " << 87 <<  " " <<tree.ceilingEntry(876) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<(tree.pop(358)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<tree.ceilingEntry(430) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<tree.floorEntry(140) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 91 <<  " " <<(tree.update(437,'X')==true) << std::endl;
try{std::cout<<"Line no " << 92 <<  " " <<tree.floorEntry(26) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 93 <<  " " <<(tree.update(244,'P')==true) << std::endl;
try{std::cout<<"Line no " << 94 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 95 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 96 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 97 <<  " " <<(tree.update(581,'T')==true) << std::endl;
std::cout<<"Line no " << 98 <<  " " <<(tree.update(907,'X')==true) << std::endl;
std::cout<<"Line no " << 99 << " "; print_char_vector(tree.subMap(244,431));std::cout << std::endl;
try{std::cout<<"Line no " << 100 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 101 <<  " " <<(tree.update(589,'N')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<tree.get(903) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<(tree.pop(589)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 <<  " " <<(tree.update(577,'L')==true) << std::endl;
try{std::cout<<"Line no " << 109 <<  " " <<tree.ceilingEntry(406) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 111 << " "; print_char_vector(tree.subMap(129,621));std::cout << std::endl;
try{std::cout<<"Line no " << 112 <<  " " <<(tree.pop(199)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<(tree.pop(311)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<(tree.pop(406)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<tree.get(876) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<tree.get(784) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 117 <<  " " <<(tree.update(778,'F')==true) << std::endl;
try{std::cout<<"Line no " << 118 <<  " " <<(tree.pop(430)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 119 <<  " " <<(tree.update(385,'L')==true) << std::endl;
try{std::cout<<"Line no " << 120 <<  " " <<tree.floorEntry(303) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 121 <<  " " <<(tree.update(587,'O')==true) << std::endl;
try{std::cout<<"Line no " << 122 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 <<  " " <<(tree.update(700,'K')==true) << std::endl;
try{std::cout<<"Line no " << 124 <<  " " <<tree.floorEntry(244) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 125 <<  " " <<tree.get(678) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<tree.get(581) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<tree.get(303) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(678)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 131 <<  " " <<(tree.update(268,'B')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<(tree.pop(849)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
