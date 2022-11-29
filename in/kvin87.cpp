#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(972,'F')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(302,'E')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(336,'M')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(558,'V')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(597,'R')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(981,'Q')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(249,'X')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(458,'L')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(240,'U')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(703,'T')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(949,'X')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(842,'D')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(878,'A')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(766,'C')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(961,'I')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(822,'V')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(254,'R')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(509,'W')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(104,'K')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(348,'S')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(574,'Z')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(97,'W')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(681,'C')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(654,'V')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(504,'N')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(818,'I')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(64,'O')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(176,'I')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(579,'P')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(455,'G')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<(tree.pop(336)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.floorEntry(254) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 38 <<  " " <<tree.get(176) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 39 <<  " " <<(tree.update(959,'X')==true) << std::endl;
try{std::cout<<"Line no " << 40 <<  " " <<tree.floorEntry(348) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 41 << " "; print_char_vector(tree.subMap(176,504));std::cout << std::endl;
try{std::cout<<"Line no " << 42 <<  " " <<(tree.pop(558)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 43 <<  " " <<(tree.update(662,'P')==true) << std::endl;
try{std::cout<<"Line no " << 44 <<  " " <<(tree.pop(842)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 45 <<  " " <<(tree.update(910,'G')==true) << std::endl;
try{std::cout<<"Line no " << 46 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 47 <<  " " <<(tree.update(416,'E')==true) << std::endl;
std::cout<<"Line no " << 48 <<  " " <<(tree.update(51,'G')==false) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<tree.get(654) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<tree.get(254) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 53 <<  " " <<(tree.update(794,'V')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<(tree.pop(654)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 56 << " "; print_char_vector(tree.subMap(662,818));std::cout << std::endl;
std::cout<<"Line no " << 57 <<  " " <<(tree.update(701,'R')==true) << std::endl;
try{std::cout<<"Line no " << 58 <<  " " <<(tree.pop(579)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(597)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<tree.get(822) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 61 <<  " " <<(tree.update(711,'G')==true) << std::endl;
try{std::cout<<"Line no " << 62 <<  " " <<(tree.pop(649)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<tree.get(818) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<(tree.pop(959)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(878)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 69 <<  " " <<(tree.pop(509)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 70 <<  " " <<(tree.update(231,'N')==true) << std::endl;
std::cout<<"Line no " << 71 <<  " " <<(tree.update(189,'U')==true) << std::endl;
try{std::cout<<"Line no " << 72 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 73 <<  " " <<(tree.update(296,'R')==true) << std::endl;
try{std::cout<<"Line no " << 74 <<  " " <<tree.ceilingEntry(662) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 75 <<  " " <<(tree.pop(296)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 76 <<  " " <<(tree.update(579,'B')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(492)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<tree.ceilingEntry(249) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<(tree.pop(176)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(328)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 83 <<  " " <<(tree.update(227,'M')==false) << std::endl;
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(455)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 88 <<  " " <<(tree.update(701,'A')==false) << std::endl;
try{std::cout<<"Line no " << 89 <<  " " <<(tree.pop(443)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 90 <<  " " <<(tree.update(480,'R')==true) << std::endl;
try{std::cout<<"Line no " << 91 <<  " " <<tree.get(681) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<tree.floorEntry(681) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 95 <<  " " <<(tree.update(867,'H')==true) << std::endl;
try{std::cout<<"Line no " << 96 <<  " " <<(tree.pop(818)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<(tree.pop(822)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<(tree.pop(574)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 99 << " "; print_char_vector(tree.subMap(302,711));std::cout << std::endl;
try{std::cout<<"Line no " << 100 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<(tree.pop(711)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 102 <<  " " <<(tree.update(117,'A')==true) << std::endl;
std::cout<<"Line no " << 103 << " "; print_char_vector(tree.subMap(254,254));std::cout << std::endl;
try{std::cout<<"Line no " << 104 <<  " " <<tree.ceilingEntry(416) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<(tree.pop(348)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<tree.ceilingEntry(254) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<tree.floorEntry(189) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 <<  " " <<(tree.update(658,'C')==true) << std::endl;
std::cout<<"Line no " << 109 <<  " " <<(tree.update(326,'C')==true) << std::endl;
try{std::cout<<"Line no " << 110 <<  " " <<(tree.pop(766)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<(tree.pop(189)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 112 <<  " " <<(tree.update(116,'Z')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<(tree.pop(894)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<tree.get(867) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<(tree.pop(701)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<(tree.pop(254)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 119 << " "; print_char_vector(tree.subMap(658,662));std::cout << std::endl;
try{std::cout<<"Line no " << 120 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 121 << " "; print_char_vector(tree.subMap(302,867));std::cout << std::endl;
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(703)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<tree.floorEntry(480) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 124 <<  " " <<(tree.pop(374)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<tree.floorEntry(867) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<tree.floorEntry(867) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 128 << " "; print_char_vector(tree.subMap(240,579));std::cout << std::endl;
std::cout<<"Line no " << 129 <<  " " <<(tree.update(508,'N')==true) << std::endl;
try{std::cout<<"Line no " << 130 <<  " " <<(tree.pop(326)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<tree.ceilingEntry(240) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<tree.floorEntry(240) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
