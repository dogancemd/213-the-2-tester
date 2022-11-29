#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(747,'K')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(307,'V')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(911,'S')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(298,'W')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(283,'E')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(195,'F')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(904,'C')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(547,'B')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(602,'O')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(206,'R')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(21,'V')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(358,'O')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(751,'K')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(80,'V')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(864,'Z')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(288,'C')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(901,'G')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(761,'E')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(545,'S')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(721,'W')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(605,'X')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(523,'L')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(213,'Q')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(808,'P')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(556,'O')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(543,'R')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(405,'F')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(302,'A')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(502,'T')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(441,'X')==true) << std::endl;
std::cout<<"Line no " << 35 <<  " " <<(tree.update(900,'X')==true) << std::endl;
try{std::cout<<"Line no " << 36 <<  " " <<(tree.pop(502)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 38 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 39 <<  " " <<tree.get(195) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<(tree.pop(288)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 41 <<  " " <<(tree.update(799,'V')==true) << std::endl;
std::cout<<"Line no " << 42 <<  " " <<(tree.update(270,'D')==false) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 44 <<  " " <<(tree.update(510,'J')==true) << std::endl;
try{std::cout<<"Line no " << 45 <<  " " <<tree.get(523) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 46 <<  " " <<(tree.update(943,'T')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 49 << " "; print_char_vector(tree.subMap(808,900));std::cout << std::endl;
std::cout<<"Line no " << 50 <<  " " <<(tree.update(940,'C')==true) << std::endl;
try{std::cout<<"Line no " << 51 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 53 <<  " " <<(tree.update(947,'D')==true) << std::endl;
std::cout<<"Line no " << 54 <<  " " <<(tree.update(955,'A')==true) << std::endl;
try{std::cout<<"Line no " << 55 <<  " " <<(tree.pop(864)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<tree.get(307) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 59 <<  " " <<(tree.update(754,'P')==false) << std::endl;
std::cout<<"Line no " << 60 <<  " " <<(tree.update(207,'L')==true) << std::endl;
try{std::cout<<"Line no " << 61 <<  " " <<(tree.pop(80)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 62 <<  " " <<(tree.update(367,'E')==true) << std::endl;
try{std::cout<<"Line no " << 63 <<  " " <<tree.floorEntry(523) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<(tree.pop(207)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 65 << " "; print_char_vector(tree.subMap(298,955));std::cout << std::endl;
std::cout<<"Line no " << 66 <<  " " <<(tree.update(456,'E')==true) << std::endl;
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(302)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 68 <<  " " <<(tree.update(826,'L')==true) << std::endl;
std::cout<<"Line no " << 69 << " "; print_char_vector(tree.subMap(510,900));std::cout << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<(tree.pop(751)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 71 <<  " " <<(tree.update(4,'W')==true) << std::endl;
std::cout<<"Line no " << 72 <<  " " <<(tree.update(987,'E')==true) << std::endl;
std::cout<<"Line no " << 73 << " "; print_char_vector(tree.subMap(213,826));std::cout << std::endl;
try{std::cout<<"Line no " << 74 <<  " " <<tree.floorEntry(721) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 <<  " " <<(tree.update(542,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<(tree.pop(904)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<tree.ceilingEntry(307) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(456)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<tree.floorEntry(4) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<(tree.pop(799)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<tree.get(206) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 83 <<  " " <<(tree.update(613,'S')==true) << std::endl;
try{std::cout<<"Line no " << 84 <<  " " <<tree.floorEntry(283) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<(tree.pop(826)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(602)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<tree.get(441) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<(tree.pop(523)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<(tree.pop(441)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<(tree.pop(545)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 93 <<  " " <<(tree.update(132,'A')==true) << std::endl;
std::cout<<"Line no " << 94 <<  " " <<(tree.update(342,'U')==true) << std::endl;
std::cout<<"Line no " << 95 << " "; print_char_vector(tree.subMap(510,542));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<tree.ceilingEntry(901) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 100 <<  " " <<(tree.update(496,'G')==true) << std::endl;
try{std::cout<<"Line no " << 101 <<  " " <<(tree.pop(307)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<(tree.pop(274)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<(tree.pop(940)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 105 <<  " " <<(tree.update(836,'U')==true) << std::endl;
try{std::cout<<"Line no " << 106 <<  " " <<(tree.pop(556)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 107 <<  " " <<(tree.update(347,'H')==true) << std::endl;
try{std::cout<<"Line no " << 108 <<  " " <<tree.get(342) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<tree.ceilingEntry(298) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 110 <<  " " <<tree.floorEntry(342) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 111 <<  " " <<(tree.update(585,'P')==true) << std::endl;
try{std::cout<<"Line no " << 112 <<  " " <<(tree.pop(496)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 <<  " " <<(tree.update(326,'P')==true) << std::endl;
try{std::cout<<"Line no " << 114 <<  " " <<(tree.pop(836)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 115 << " "; print_char_vector(tree.subMap(347,808));std::cout << std::endl;
std::cout<<"Line no " << 116 <<  " " <<(tree.update(813,'V')==true) << std::endl;
try{std::cout<<"Line no " << 117 <<  " " <<(tree.pop(510)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 118 <<  " " <<(tree.update(80,'P')==false) << std::endl;
try{std::cout<<"Line no " << 119 <<  " " <<(tree.pop(808)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<(tree.pop(213)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 121 <<  " " <<(tree.update(590,'U')==true) << std::endl;
std::cout<<"Line no " << 122 <<  " " <<(tree.update(678,'J')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 124 <<  " " <<(tree.pop(298)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 125 <<  " " <<(tree.update(283,'C')==false) << std::endl;
try{std::cout<<"Line no " << 126 <<  " " <<(tree.pop(543)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 127 <<  " " <<(tree.update(926,'V')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 129 <<  " " <<(tree.update(173,'U')==true) << std::endl;
try{std::cout<<"Line no " << 130 <<  " " <<tree.get(926) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 132 << " "; print_char_vector(tree.subMap(547,900));std::cout << std::endl;
std::cout<<"Line no " << 133 <<  " " <<(tree.update(839,'F')==true) << std::endl;
try{std::cout<<"Line no " << 134 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
