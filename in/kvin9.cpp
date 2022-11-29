#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(551,'F')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(405,'S')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(886,'U')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(230,'C')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(754,'L')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(561,'I')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(414,'P')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(301,'Q')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(740,'G')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(673,'O')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(240,'U')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(947,'E')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(999,'T')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(975,'S')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(446,'E')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(835,'D')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(800,'L')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(709,'R')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(707,'R')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(805,'S')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(803,'P')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(419,'U')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(271,'U')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(665,'S')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(386,'S')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(872,'L')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(91,'G')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(815,'O')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(563,'Z')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(770,'I')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 36 << " "; print_char_vector(tree.subMap(230,975));std::cout << std::endl;
try{std::cout<<"Line no " << 37 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 38 <<  " " <<tree.ceilingEntry(665) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 39 <<  " " <<(tree.update(344,'J')==true) << std::endl;
try{std::cout<<"Line no " << 40 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<tree.floorEntry(405) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<tree.get(803) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<tree.floorEntry(563) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<(tree.pop(770)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<(tree.pop(561)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 <<  " " <<(tree.update(579,'P')==true) << std::endl;
std::cout<<"Line no " << 49 <<  " " <<(tree.update(462,'K')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 53 <<  " " <<(tree.update(6,'L')==true) << std::endl;
std::cout<<"Line no " << 54 <<  " " <<(tree.update(223,'M')==false) << std::endl;
std::cout<<"Line no " << 55 <<  " " <<(tree.update(922,'D')==true) << std::endl;
try{std::cout<<"Line no " << 56 <<  " " <<(tree.pop(759)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<tree.ceilingEntry(805) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 58 <<  " " <<(tree.update(451,'G')==true) << std::endl;
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(872)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<(tree.pop(419)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 62 <<  " " <<(tree.update(494,'N')==true) << std::endl;
try{std::cout<<"Line no " << 63 <<  " " <<tree.ceilingEntry(922) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<(tree.pop(947)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<(tree.pop(344)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<(tree.pop(579)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(414)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 68 <<  " " <<(tree.update(6,'W')==true) << std::endl;
std::cout<<"Line no " << 69 << " "; print_char_vector(tree.subMap(405,451));std::cout << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<tree.get(835) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<(tree.pop(494)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<(tree.pop(975)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 74 <<  " " <<(tree.update(155,'T')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 76 <<  " " <<tree.floorEntry(673) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 77 <<  " " <<(tree.update(156,'M')==true) << std::endl;
std::cout<<"Line no " << 78 <<  " " <<(tree.update(708,'B')==true) << std::endl;
try{std::cout<<"Line no " << 79 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<(tree.pop(754)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 82 <<  " " <<(tree.update(493,'U')==true) << std::endl;
try{std::cout<<"Line no " << 83 <<  " " <<tree.floorEntry(800) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<tree.get(462) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(446)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 87 <<  " " <<(tree.update(903,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 88 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 89 <<  " " <<(tree.update(761,'T')==true) << std::endl;
std::cout<<"Line no " << 90 <<  " " <<(tree.update(933,'D')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<(tree.pop(707)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<(tree.pop(803)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 94 <<  " " <<(tree.pop(493)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 95 <<  " " <<(tree.update(833,'L')==true) << std::endl;
try{std::cout<<"Line no " << 96 <<  " " <<tree.get(903) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<(tree.pop(815)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 98 <<  " " <<(tree.update(869,'T')==true) << std::endl;
std::cout<<"Line no " << 99 <<  " " <<(tree.update(600,'U')==true) << std::endl;
std::cout<<"Line no " << 100 <<  " " <<(tree.update(641,'A')==true) << std::endl;
try{std::cout<<"Line no " << 101 <<  " " <<(tree.pop(833)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<(tree.pop(708)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<(tree.pop(886)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<tree.floorEntry(805) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<(tree.pop(188)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 109 <<  " " <<(tree.update(97,'P')==true) << std::endl;
try{std::cout<<"Line no " << 110 <<  " " <<(tree.pop(869)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 111 <<  " " <<(tree.update(753,'P')==true) << std::endl;
std::cout<<"Line no " << 112 <<  " " <<(tree.update(99,'B')==true) << std::endl;
try{std::cout<<"Line no " << 113 <<  " " <<tree.floorEntry(451) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<tree.ceilingEntry(551) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 117 <<  " " <<(tree.update(960,'M')==false) << std::endl;
std::cout<<"Line no " << 118 <<  " " <<(tree.update(275,'Y')==false) << std::endl;
try{std::cout<<"Line no " << 119 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<tree.ceilingEntry(709) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(641)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<tree.ceilingEntry(805) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 125 <<  " " <<tree.get(665) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<tree.floorEntry(600) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 127 <<  " " <<(tree.update(637,'R')==true) << std::endl;
try{std::cout<<"Line no " << 128 <<  " " <<(tree.pop(99)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<(tree.pop(405)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<tree.ceilingEntry(386) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 134 <<  " " <<(tree.update(623,'L')==true) << std::endl;
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
