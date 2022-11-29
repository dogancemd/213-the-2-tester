#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(936,'C')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(464,'S')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(184,'Z')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(131,'R')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(61,'D')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(544,'Z')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(13,'Q')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(324,'M')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(62,'H')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(965,'Y')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(551,'L')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(751,'G')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(447,'H')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(901,'K')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(332,'I')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(135,'M')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(298,'R')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(526,'T')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(482,'K')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(66,'L')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(545,'R')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(222,'X')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(110,'L')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(620,'I')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(60,'U')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(884,'L')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(566,'Q')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(389,'B')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(610,'O')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(294,'T')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<(tree.pop(62)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<(tree.pop(184)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.floorEntry(544) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 38 <<  " " <<(tree.pop(751)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 39 <<  " " <<(tree.pop(61)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 40 <<  " " <<(tree.update(501,'E')==true) << std::endl;
try{std::cout<<"Line no " << 41 <<  " " <<tree.ceilingEntry(60) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<(tree.pop(294)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<tree.floorEntry(66) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 44 <<  " " <<(tree.update(282,'E')==true) << std::endl;
std::cout<<"Line no " << 45 <<  " " <<(tree.update(127,'E')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<tree.ceilingEntry(110) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 <<  " " <<(tree.update(591,'I')==true) << std::endl;
std::cout<<"Line no " << 49 <<  " " <<(tree.update(798,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 50 <<  " " <<tree.floorEntry(282) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 51 <<  " " <<(tree.update(133,'D')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<(tree.pop(66)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<(tree.pop(798)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 55 <<  " " <<(tree.update(105,'X')==false) << std::endl;
std::cout<<"Line no " << 56 <<  " " <<(tree.update(819,'A')==false) << std::endl;
try{std::cout<<"Line no " << 57 <<  " " <<(tree.pop(464)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<tree.floorEntry(298) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 59 <<  " " <<(tree.update(568,'W')==true) << std::endl;
std::cout<<"Line no " << 60 <<  " " <<(tree.update(187,'C')==true) << std::endl;
std::cout<<"Line no " << 61 <<  " " <<(tree.update(464,'V')==true) << std::endl;
std::cout<<"Line no " << 62 <<  " " <<(tree.update(453,'D')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<(tree.pop(975)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<(tree.pop(389)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 67 <<  " " <<(tree.update(482,'B')==false) << std::endl;
try{std::cout<<"Line no " << 68 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 69 <<  " " <<tree.floorEntry(591) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 70 <<  " " <<tree.floorEntry(133) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 71 <<  " " <<(tree.update(152,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 72 <<  " " <<(tree.pop(610)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<tree.get(131) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<(tree.pop(332)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 75 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<tree.ceilingEntry(453) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<tree.floorEntry(135) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 79 <<  " " <<(tree.update(468,'P')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 81 <<  " " <<(tree.update(579,'I')==false) << std::endl;
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(501)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 83 <<  " " <<(tree.update(355,'U')==true) << std::endl;
std::cout<<"Line no " << 84 <<  " " <<(tree.update(271,'J')==true) << std::endl;
try{std::cout<<"Line no " << 85 <<  " " <<(tree.pop(545)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 86 << " "; print_char_vector(tree.subMap(271,324));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<tree.get(131) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<(tree.pop(282)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 92 <<  " " <<(tree.update(353,'S')==true) << std::endl;
try{std::cout<<"Line no " << 93 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 94 <<  " " <<(tree.pop(674)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 95 <<  " " <<(tree.pop(620)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 96 <<  " " <<tree.get(152) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 98 <<  " " <<(tree.update(556,'W')==true) << std::endl;
try{std::cout<<"Line no " << 99 <<  " " <<tree.floorEntry(298) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<(tree.pop(152)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<(tree.pop(187)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 102 <<  " " <<(tree.update(656,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 103 <<  " " <<tree.get(135) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 105 <<  " " <<(tree.update(83,'C')==true) << std::endl;
std::cout<<"Line no " << 106 <<  " " <<(tree.update(657,'U')==true) << std::endl;
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(103)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 <<  " " <<(tree.update(35,'D')==true) << std::endl;
try{std::cout<<"Line no " << 109 <<  " " <<(tree.pop(83)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 110 <<  " " <<tree.ceilingEntry(35) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 112 <<  " " <<(tree.update(679,'J')==true) << std::endl;
try{std::cout<<"Line no " << 113 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 116 <<  " " <<(tree.update(813,'Q')==true) << std::endl;
std::cout<<"Line no " << 117 <<  " " <<(tree.update(360,'L')==false) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 119 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 120 <<  " " <<(tree.update(683,'I')==true) << std::endl;
try{std::cout<<"Line no " << 121 <<  " " <<(tree.pop(175)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<tree.get(544) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<(tree.pop(556)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 124 << " "; print_char_vector(tree.subMap(222,324));std::cout << std::endl;
try{std::cout<<"Line no " << 125 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<tree.floorEntry(324) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 128 <<  " " <<(tree.update(976,'E')==true) << std::endl;
std::cout<<"Line no " << 129 <<  " " <<(tree.update(405,'I')==false) << std::endl;
std::cout<<"Line no " << 130 <<  " " <<(tree.update(539,'O')==true) << std::endl;
std::cout<<"Line no " << 131 <<  " " <<(tree.update(216,'E')==true) << std::endl;
try{std::cout<<"Line no " << 132 <<  " " <<(tree.pop(566)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<(tree.pop(468)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
