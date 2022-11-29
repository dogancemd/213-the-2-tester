#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(524,'P')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(227,'B')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(768,'Q')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(628,'G')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(605,'T')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(128,'V')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(200,'I')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(482,'C')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(26,'R')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(130,'G')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(775,'Q')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(620,'V')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(357,'J')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(215,'M')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(565,'W')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(349,'W')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(516,'H')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(341,'F')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(968,'W')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(490,'N')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(713,'G')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(290,'Z')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(307,'N')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(502,'I')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(506,'B')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(496,'B')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(374,'I')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(886,'W')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(299,'B')==true) << std::endl;
try{std::cout<<"Line no " << 34 <<  " " <<tree.get(490) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<(tree.pop(502)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 37 <<  " " <<(tree.update(265,'U')==true) << std::endl;
try{std::cout<<"Line no " << 38 <<  " " <<tree.ceilingEntry(357) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 40 << " "; print_char_vector(tree.subMap(128,341));std::cout << std::endl;
try{std::cout<<"Line no " << 41 <<  " " <<tree.ceilingEntry(374) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<(tree.pop(200)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 45 <<  " " <<(tree.update(450,'V')==true) << std::endl;
try{std::cout<<"Line no " << 46 <<  " " <<tree.get(299) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<(tree.pop(128)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<(tree.pop(482)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<tree.ceilingEntry(620) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 50 <<  " " <<(tree.update(784,'A')==true) << std::endl;
try{std::cout<<"Line no " << 51 <<  " " <<tree.ceilingEntry(357) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<tree.floorEntry(341) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<tree.ceilingEntry(450) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<tree.floorEntry(516) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<(tree.pop(520)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.floorEntry(565) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<(tree.pop(299)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<tree.ceilingEntry(524) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(768)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<tree.get(490) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<tree.ceilingEntry(227) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 64 <<  " " <<(tree.update(344,'B')==true) << std::endl;
std::cout<<"Line no " << 65 <<  " " <<(tree.update(990,'Y')==true) << std::endl;
std::cout<<"Line no " << 66 <<  " " <<(tree.update(624,'Y')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 69 <<  " " <<(tree.pop(203)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 70 <<  " " <<(tree.update(449,'K')==true) << std::endl;
std::cout<<"Line no " << 71 <<  " " <<(tree.update(685,'J')==true) << std::endl;
try{std::cout<<"Line no " << 72 <<  " " <<(tree.pop(265)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 73 <<  " " <<(tree.update(852,'I')==true) << std::endl;
try{std::cout<<"Line no " << 74 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 75 <<  " " <<tree.floorEntry(524) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 76 <<  " " <<(tree.update(961,'O')==true) << std::endl;
try{std::cout<<"Line no " << 77 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<(tree.pop(344)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<(tree.pop(449)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(450)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 84 <<  " " <<(tree.update(438,'U')==true) << std::endl;
try{std::cout<<"Line no " << 85 <<  " " <<(tree.pop(490)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(524)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(685)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 89 <<  " " <<(tree.update(107,'U')==true) << std::endl;
std::cout<<"Line no " << 90 <<  " " <<(tree.update(315,'V')==true) << std::endl;
try{std::cout<<"Line no " << 91 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<(tree.pop(107)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 94 <<  " " <<(tree.pop(624)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 95 <<  " " <<(tree.update(718,'K')==true) << std::endl;
std::cout<<"Line no " << 96 <<  " " <<(tree.update(979,'E')==true) << std::endl;
try{std::cout<<"Line no " << 97 <<  " " <<tree.floorEntry(315) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<(tree.pop(341)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<(tree.pop(971)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 101 <<  " " <<(tree.update(691,'D')==false) << std::endl;
std::cout<<"Line no " << 102 <<  " " <<(tree.update(802,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 103 <<  " " <<tree.ceilingEntry(605) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 104 <<  " " <<(tree.update(222,'D')==true) << std::endl;
try{std::cout<<"Line no " << 105 <<  " " <<tree.floorEntry(227) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<(tree.pop(438)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(628)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 <<  " " <<(tree.update(974,'U')==true) << std::endl;
try{std::cout<<"Line no " << 109 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<(tree.pop(718)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 <<  " " <<(tree.update(687,'C')==true) << std::endl;
try{std::cout<<"Line no " << 114 <<  " " <<tree.floorEntry(620) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<(tree.pop(315)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 116 <<  " " <<(tree.update(780,'N')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 119 <<  " " <<(tree.pop(852)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<(tree.pop(802)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 122 <<  " " <<(tree.update(926,'E')==true) << std::endl;
try{std::cout<<"Line no " << 123 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 124 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 125 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 126 <<  " " <<(tree.update(108,'W')==true) << std::endl;
std::cout<<"Line no " << 127 <<  " " <<(tree.update(954,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 128 <<  " " <<(tree.pop(62)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<(tree.pop(349)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<tree.ceilingEntry(926) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<tree.ceilingEntry(357) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
