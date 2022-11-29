#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(77,'H')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(487,'V')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(510,'E')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(160,'V')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(556,'Z')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(180,'S')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(538,'G')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(480,'B')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(317,'N')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(39,'Q')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(994,'Z')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(223,'W')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(841,'Q')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(13,'G')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(285,'O')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(666,'P')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(202,'C')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(375,'Y')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(830,'E')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(313,'Q')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(888,'B')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(449,'N')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(352,'M')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(828,'P')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(563,'O')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(453,'L')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(174,'O')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(111,'W')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(152,'G')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(358,'R')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<(tree.pop(375)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 36 << " "; print_char_vector(tree.subMap(77,994));std::cout << std::endl;
try{std::cout<<"Line no " << 37 <<  " " <<(tree.pop(510)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 38 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 39 <<  " " <<(tree.update(523,'H')==true) << std::endl;
std::cout<<"Line no " << 40 << " "; print_char_vector(tree.subMap(13,563));std::cout << std::endl;
try{std::cout<<"Line no " << 41 <<  " " <<tree.floorEntry(180) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<(tree.pop(556)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<tree.floorEntry(13) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<(tree.pop(13)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<(tree.pop(352)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 49 <<  " " <<(tree.update(834,'O')==true) << std::endl;
try{std::cout<<"Line no " << 50 <<  " " <<(tree.pop(841)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 51 <<  " " <<(tree.update(685,'L')==true) << std::endl;
try{std::cout<<"Line no " << 52 <<  " " <<tree.get(202) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 54 <<  " " <<(tree.update(756,'S')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.ceilingEntry(317) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<(tree.pop(453)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(621)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<tree.ceilingEntry(685) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 61 << " "; print_char_vector(tree.subMap(202,563));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<tree.get(160) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 64 <<  " " <<(tree.update(311,'R')==true) << std::endl;
try{std::cout<<"Line no " << 65 <<  " " <<(tree.pop(666)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<tree.floorEntry(523) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 67 <<  " " <<(tree.update(429,'J')==true) << std::endl;
try{std::cout<<"Line no " << 68 <<  " " <<(tree.pop(834)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 69 <<  " " <<tree.get(429) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 70 <<  " " <<tree.ceilingEntry(563) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<(tree.pop(358)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 72 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<(tree.pop(487)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 75 <<  " " <<(tree.pop(180)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 76 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 77 <<  " " <<(tree.update(661,'D')==true) << std::endl;
std::cout<<"Line no " << 78 <<  " " <<(tree.update(360,'U')==true) << std::endl;
try{std::cout<<"Line no " << 79 <<  " " <<tree.floorEntry(160) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(317)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<(tree.pop(313)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 87 <<  " " <<(tree.update(213,'A')==true) << std::endl;
try{std::cout<<"Line no " << 88 <<  " " <<tree.ceilingEntry(538) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<(tree.pop(202)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 90 << " "; print_char_vector(tree.subMap(160,311));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<(tree.pop(449)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 93 <<  " " <<(tree.update(679,'J')==true) << std::endl;
try{std::cout<<"Line no " << 94 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 95 <<  " " <<(tree.update(403,'L')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 98 <<  " " <<(tree.update(466,'O')==true) << std::endl;
try{std::cout<<"Line no " << 99 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<tree.floorEntry(523) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 102 <<  " " <<(tree.update(449,'G')==true) << std::endl;
try{std::cout<<"Line no " << 103 <<  " " <<tree.ceilingEntry(538) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 104 <<  " " <<(tree.update(390,'S')==true) << std::endl;
try{std::cout<<"Line no " << 105 <<  " " <<tree.get(174) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<tree.floorEntry(390) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<tree.ceilingEntry(213) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 109 <<  " " <<(tree.update(808,'O')==false) << std::endl;
try{std::cout<<"Line no " << 110 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 111 <<  " " <<(tree.update(713,'S')==true) << std::endl;
std::cout<<"Line no " << 112 <<  " " <<(tree.update(204,'H')==true) << std::endl;
try{std::cout<<"Line no " << 113 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<tree.get(390) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<(tree.pop(523)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 116 <<  " " <<(tree.update(566,'A')==true) << std::endl;
try{std::cout<<"Line no " << 117 <<  " " <<tree.floorEntry(360) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<tree.floorEntry(311) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 120 <<  " " <<(tree.update(80,'E')==true) << std::endl;
std::cout<<"Line no " << 121 <<  " " <<(tree.update(873,'K')==true) << std::endl;
std::cout<<"Line no " << 122 << " "; print_char_vector(tree.subMap(285,563));std::cout << std::endl;
std::cout<<"Line no " << 123 <<  " " <<(tree.update(350,'V')==true) << std::endl;
std::cout<<"Line no " << 124 << " "; print_char_vector(tree.subMap(360,466));std::cout << std::endl;
try{std::cout<<"Line no " << 125 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 126 <<  " " <<(tree.update(777,'I')==true) << std::endl;
try{std::cout<<"Line no " << 127 <<  " " <<(tree.pop(213)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 128 <<  " " <<(tree.update(486,'O')==false) << std::endl;
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(174)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 130 <<  " " <<(tree.update(416,'H')==true) << std::endl;
try{std::cout<<"Line no " << 131 <<  " " <<tree.floorEntry(311) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 132 <<  " " <<(tree.update(542,'Q')==true) << std::endl;
std::cout<<"Line no " << 133 << " "; print_char_vector(tree.subMap(80,350));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
