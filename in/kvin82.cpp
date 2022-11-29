#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(970,'M')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(581,'J')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(447,'S')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(961,'A')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(408,'X')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(791,'L')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(973,'S')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(817,'B')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(877,'V')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(806,'D')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(466,'H')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(374,'M')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(119,'O')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(167,'T')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(194,'F')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(416,'P')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(860,'F')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(428,'E')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(780,'G')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(179,'C')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(520,'A')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(811,'Y')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(689,'B')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(66,'M')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(692,'O')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(543,'Z')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(246,'U')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(941,'O')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(65,'S')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(919,'T')==true) << std::endl;
std::cout<<"Line no " << 35 <<  " " <<(tree.update(857,'B')==true) << std::endl;
try{std::cout<<"Line no " << 36 <<  " " <<(tree.pop(961)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 38 <<  " " <<(tree.update(177,'P')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<(tree.pop(857)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 41 <<  " " <<(tree.update(926,'R')==true) << std::endl;
std::cout<<"Line no " << 42 <<  " " <<(tree.update(897,'Z')==true) << std::endl;
std::cout<<"Line no " << 43 <<  " " <<(tree.update(548,'L')==true) << std::endl;
try{std::cout<<"Line no " << 44 <<  " " <<tree.ceilingEntry(926) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<(tree.pop(548)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 46 <<  " " <<(tree.update(355,'Z')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<tree.get(692) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 50 <<  " " <<(tree.update(77,'M')==true) << std::endl;
try{std::cout<<"Line no " << 51 <<  " " <<tree.get(806) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<tree.floorEntry(689) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.floorEntry(246) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 57 << " "; print_char_vector(tree.subMap(194,374));std::cout << std::endl;
try{std::cout<<"Line no " << 58 <<  " " <<(tree.pop(194)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(355)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<tree.get(689) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 61 <<  " " <<(tree.update(304,'J')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<(tree.pop(408)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<tree.get(581) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<(tree.pop(806)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 66 <<  " " <<(tree.update(932,'J')==true) << std::endl;
try{std::cout<<"Line no " << 67 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 68 <<  " " <<(tree.update(265,'B')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 70 << " "; print_char_vector(tree.subMap(817,860));std::cout << std::endl;
std::cout<<"Line no " << 71 <<  " " <<(tree.update(343,'K')==true) << std::endl;
try{std::cout<<"Line no " << 72 <<  " " <<(tree.pop(932)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 73 <<  " " <<(tree.update(1000,'X')==true) << std::endl;
try{std::cout<<"Line no " << 74 <<  " " <<(tree.pop(246)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 75 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 76 <<  " " <<tree.floorEntry(543) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 79 <<  " " <<(tree.update(139,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 80 <<  " " <<(tree.pop(447)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<(tree.pop(599)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(791)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 83 << " "; print_char_vector(tree.subMap(581,877));std::cout << std::endl;
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(581)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 85 <<  " " <<(tree.update(997,'W')==true) << std::endl;
std::cout<<"Line no " << 86 <<  " " <<(tree.update(59,'I')==true) << std::endl;
std::cout<<"Line no " << 87 <<  " " <<(tree.update(427,'X')==true) << std::endl;
std::cout<<"Line no " << 88 <<  " " <<(tree.update(203,'N')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<(tree.pop(203)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 94 <<  " " <<(tree.update(376,'X')==true) << std::endl;
try{std::cout<<"Line no " << 95 <<  " " <<tree.ceilingEntry(376) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<(tree.pop(817)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 98 <<  " " <<(tree.update(190,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 99 <<  " " <<(tree.pop(190)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 100 <<  " " <<(tree.update(236,'U')==true) << std::endl;
std::cout<<"Line no " << 101 <<  " " <<(tree.update(522,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 102 <<  " " <<tree.ceilingEntry(416) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<(tree.pop(897)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 107 <<  " " <<(tree.update(259,'P')==true) << std::endl;
try{std::cout<<"Line no " << 108 <<  " " <<tree.ceilingEntry(343) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 109 <<  " " <<(tree.update(446,'W')==true) << std::endl;
std::cout<<"Line no " << 110 <<  " " <<(tree.update(32,'O')==true) << std::endl;
try{std::cout<<"Line no " << 111 <<  " " <<tree.get(32) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<tree.floorEntry(416) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 <<  " " <<(tree.update(238,'D')==true) << std::endl;
try{std::cout<<"Line no " << 114 <<  " " <<(tree.pop(374)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<(tree.pop(877)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 117 <<  " " <<(tree.update(265,'G')==true) << std::endl;
try{std::cout<<"Line no " << 118 <<  " " <<(tree.pop(466)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 119 << " "; print_char_vector(tree.subMap(376,543));std::cout << std::endl;
try{std::cout<<"Line no " << 120 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<tree.ceilingEntry(811) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 <<  " " <<(tree.update(434,'G')==true) << std::endl;
std::cout<<"Line no " << 124 << " "; print_char_vector(tree.subMap(416,689));std::cout << std::endl;
try{std::cout<<"Line no " << 125 <<  " " <<tree.ceilingEntry(520) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<(tree.pop(520)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 127 <<  " " <<(tree.update(124,'E')==true) << std::endl;
try{std::cout<<"Line no " << 128 <<  " " <<tree.floorEntry(860) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(416)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<tree.get(376) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 131 <<  " " <<(tree.update(806,'A')==true) << std::endl;
try{std::cout<<"Line no " << 132 <<  " " <<tree.ceilingEntry(434) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 133 << " "; print_char_vector(tree.subMap(343,780));std::cout << std::endl;
std::cout<<"Line no " << 134 <<  " " <<(tree.update(126,'K')==true) << std::endl;
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
