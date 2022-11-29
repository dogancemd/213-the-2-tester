#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(43,'C')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(180,'R')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(656,'T')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(477,'G')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(117,'Y')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(366,'P')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(742,'R')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(195,'Z')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(928,'Y')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(242,'X')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(215,'T')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(892,'G')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(336,'B')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(247,'A')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(279,'W')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(506,'F')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(243,'S')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(402,'L')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(135,'D')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(849,'L')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(115,'H')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(785,'R')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(87,'W')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(102,'V')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(837,'D')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(819,'I')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(409,'K')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(334,'I')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(864,'J')==true) << std::endl;
try{std::cout<<"Line no " << 34 <<  " " <<(tree.pop(279)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 36 <<  " " <<(tree.update(685,'X')==true) << std::endl;
try{std::cout<<"Line no " << 37 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 38 <<  " " <<(tree.update(518,'W')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<(tree.pop(518)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 41 <<  " " <<(tree.update(661,'L')==true) << std::endl;
try{std::cout<<"Line no " << 42 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<tree.floorEntry(506) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<tree.ceilingEntry(785) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<tree.ceilingEntry(661) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<(tree.pop(837)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<tree.ceilingEntry(506) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<(tree.pop(135)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 51 <<  " " <<(tree.update(781,'C')==true) << std::endl;
std::cout<<"Line no " << 52 <<  " " <<(tree.update(103,'N')==true) << std::endl;
std::cout<<"Line no " << 53 <<  " " <<(tree.update(994,'H')==true) << std::endl;
std::cout<<"Line no " << 54 <<  " " <<(tree.update(329,'W')==true) << std::endl;
try{std::cout<<"Line no " << 55 <<  " " <<(tree.pop(247)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 59 <<  " " <<(tree.update(606,'C')==true) << std::endl;
try{std::cout<<"Line no " << 60 <<  " " <<tree.ceilingEntry(102) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<tree.floorEntry(117) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 64 << " "; print_char_vector(tree.subMap(115,336));std::cout << std::endl;
try{std::cout<<"Line no " << 65 <<  " " <<(tree.pop(334)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<(tree.pop(329)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 68 <<  " " <<(tree.update(119,'W')==true) << std::endl;
try{std::cout<<"Line no " << 69 <<  " " <<tree.floorEntry(242) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 70 <<  " " <<(tree.pop(742)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 71 <<  " " <<(tree.update(214,'B')==true) << std::endl;
std::cout<<"Line no " << 72 <<  " " <<(tree.update(832,'R')==true) << std::endl;
std::cout<<"Line no " << 73 <<  " " <<(tree.update(5,'C')==true) << std::endl;
try{std::cout<<"Line no " << 74 <<  " " <<tree.get(102) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 75 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 76 << " "; print_char_vector(tree.subMap(243,366));std::cout << std::endl;
std::cout<<"Line no " << 77 << " "; print_char_vector(tree.subMap(103,242));std::cout << std::endl;
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(336)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<(tree.pop(180)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<tree.floorEntry(606) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 81 << " "; print_char_vector(tree.subMap(117,243));std::cout << std::endl;
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(442)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 83 << " "; print_char_vector(tree.subMap(366,402));std::cout << std::endl;
std::cout<<"Line no " << 84 <<  " " <<(tree.update(593,'B')==true) << std::endl;
try{std::cout<<"Line no " << 85 <<  " " <<tree.get(685) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 86 <<  " " <<(tree.update(56,'L')==true) << std::endl;
try{std::cout<<"Line no " << 87 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<(tree.pop(606)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 90 <<  " " <<(tree.update(518,'P')==true) << std::endl;
try{std::cout<<"Line no " << 91 <<  " " <<tree.get(402) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 92 <<  " " <<(tree.update(746,'N')==false) << std::endl;
try{std::cout<<"Line no " << 93 <<  " " <<(tree.pop(5)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 94 <<  " " <<(tree.pop(214)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 95 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 96 <<  " " <<(tree.pop(56)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<(tree.pop(195)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<tree.floorEntry(819) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<tree.ceilingEntry(593) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 100 <<  " " <<(tree.update(988,'C')==true) << std::endl;
std::cout<<"Line no " << 101 <<  " " <<(tree.update(504,'X')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<(tree.pop(506)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 105 <<  " " <<(tree.update(226,'J')==false) << std::endl;
try{std::cout<<"Line no " << 106 <<  " " <<tree.get(477) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(656)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 <<  " " <<(tree.update(195,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 109 <<  " " <<(tree.pop(242)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 110 <<  " " <<tree.ceilingEntry(103) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<tree.floorEntry(661) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<tree.get(366) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<tree.floorEntry(832) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 114 <<  " " <<(tree.update(432,'R')==true) << std::endl;
try{std::cout<<"Line no " << 115 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<(tree.pop(366)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 117 <<  " " <<(tree.update(7,'Y')==false) << std::endl;
try{std::cout<<"Line no " << 118 <<  " " <<tree.get(504) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 119 <<  " " <<(tree.update(734,'S')==true) << std::endl;
try{std::cout<<"Line no " << 120 <<  " " <<(tree.pop(781)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<tree.get(115) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<tree.floorEntry(119) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 124 <<  " " <<(tree.update(288,'Y')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<(tree.pop(785)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<tree.ceilingEntry(195) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 128 <<  " " <<(tree.update(813,'F')==false) << std::endl;
std::cout<<"Line no " << 129 <<  " " <<(tree.update(472,'M')==true) << std::endl;
std::cout<<"Line no " << 130 <<  " " <<(tree.update(987,'C')==true) << std::endl;
std::cout<<"Line no " << 131 <<  " " <<(tree.update(194,'F')==true) << std::endl;
try{std::cout<<"Line no " << 132 <<  " " <<tree.ceilingEntry(685) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
