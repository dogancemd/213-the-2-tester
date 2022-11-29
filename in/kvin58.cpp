#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(381,'W')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(70,'I')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(1,'Y')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(948,'X')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(960,'Y')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(823,'T')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(75,'Y')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(523,'K')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(574,'J')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(846,'U')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(9,'D')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(36,'W')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(985,'C')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(8,'Q')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(273,'G')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(390,'J')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(588,'V')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(492,'E')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(613,'B')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(648,'F')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(658,'B')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(687,'I')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(91,'K')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(401,'I')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(467,'L')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(911,'V')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(6,'X')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(423,'X')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(430,'U')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(884,'A')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<tree.floorEntry(75) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<(tree.pop(960)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 37 <<  " " <<(tree.update(644,'N')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 39 << " "; print_char_vector(tree.subMap(6,648));std::cout << std::endl;
try{std::cout<<"Line no " << 40 <<  " " <<tree.get(644) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 41 << " "; print_char_vector(tree.subMap(6,644));std::cout << std::endl;
std::cout<<"Line no " << 42 <<  " " <<(tree.update(529,'U')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 44 <<  " " <<(tree.update(808,'M')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<(tree.pop(124)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<(tree.pop(467)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<(tree.pop(884)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<(tree.pop(648)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<tree.get(381) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<tree.get(613) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<tree.ceilingEntry(588) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<tree.get(390) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 55 <<  " " <<(tree.update(73,'L')==true) << std::endl;
try{std::cout<<"Line no " << 56 <<  " " <<tree.ceilingEntry(91) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<tree.ceilingEntry(401) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(75)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 60 <<  " " <<(tree.update(40,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 61 <<  " " <<(tree.pop(613)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<(tree.pop(73)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 63 <<  " " <<(tree.update(967,'I')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 65 <<  " " <<(tree.update(241,'O')==true) << std::endl;
try{std::cout<<"Line no " << 66 <<  " " <<(tree.pop(430)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 67 <<  " " <<(tree.update(525,'M')==true) << std::endl;
try{std::cout<<"Line no " << 68 <<  " " <<(tree.pop(985)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 69 <<  " " <<(tree.pop(574)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 70 <<  " " <<(tree.pop(70)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 71 <<  " " <<(tree.update(402,'X')==true) << std::endl;
std::cout<<"Line no " << 72 <<  " " <<(tree.update(138,'K')==true) << std::endl;
try{std::cout<<"Line no " << 73 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 74 <<  " " <<(tree.update(653,'I')==true) << std::endl;
try{std::cout<<"Line no " << 75 <<  " " <<(tree.pop(51)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(492)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 79 <<  " " <<(tree.update(788,'C')==false) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 81 <<  " " <<(tree.update(761,'B')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<tree.get(644) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(381)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<(tree.pop(423)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(529)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<tree.get(91) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 89 <<  " " <<(tree.update(849,'A')==true) << std::endl;
try{std::cout<<"Line no " << 90 <<  " " <<tree.ceilingEntry(138) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 91 <<  " " <<(tree.update(429,'G')==true) << std::endl;
try{std::cout<<"Line no " << 92 <<  " " <<tree.get(525) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 93 <<  " " <<(tree.update(868,'I')==true) << std::endl;
std::cout<<"Line no " << 94 <<  " " <<(tree.update(180,'I')==false) << std::endl;
std::cout<<"Line no " << 95 << " "; print_char_vector(tree.subMap(91,241));std::cout << std::endl;
try{std::cout<<"Line no " << 96 <<  " " <<tree.floorEntry(429) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<tree.floorEntry(525) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<tree.floorEntry(525) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<(tree.pop(849)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<tree.ceilingEntry(588) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<tree.floorEntry(241) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 103 <<  " " <<(tree.update(97,'U')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<tree.get(401) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<(tree.pop(40)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(401)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 <<  " " <<(tree.update(435,'Y')==true) << std::endl;
std::cout<<"Line no " << 109 << " "; print_char_vector(tree.subMap(273,429));std::cout << std::endl;
std::cout<<"Line no " << 110 <<  " " <<(tree.update(831,'E')==true) << std::endl;
try{std::cout<<"Line no " << 111 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<(tree.pop(523)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<(tree.pop(658)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 114 <<  " " <<(tree.update(905,'W')==true) << std::endl;
try{std::cout<<"Line no " << 115 <<  " " <<(tree.pop(525)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<(tree.pop(273)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 119 <<  " " <<tree.get(831) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<(tree.pop(644)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 121 <<  " " <<(tree.update(981,'P')==true) << std::endl;
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(687)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<tree.get(831) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 124 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 125 <<  " " <<(tree.update(112,'L')==true) << std::endl;
try{std::cout<<"Line no " << 126 <<  " " <<(tree.pop(761)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<tree.floorEntry(808) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 128 <<  " " <<(tree.update(490,'U')==true) << std::endl;
try{std::cout<<"Line no " << 129 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<(tree.pop(402)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 131 <<  " " <<(tree.update(127,'B')==true) << std::endl;
try{std::cout<<"Line no " << 132 <<  " " <<tree.get(490) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 134 <<  " " <<(tree.update(766,'G')==true) << std::endl;
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
