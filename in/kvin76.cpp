#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(648,'H')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(488,'E')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(951,'C')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(185,'V')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(231,'E')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(467,'E')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(149,'H')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(850,'L')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(248,'P')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(177,'I')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(370,'P')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(216,'Q')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(477,'X')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(262,'E')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(675,'A')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(181,'R')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(868,'V')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(553,'C')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(888,'B')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(767,'Y')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(88,'R')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(953,'L')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(936,'Y')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(618,'F')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(457,'W')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(117,'D')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(272,'C')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(934,'G')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(107,'T')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(83,'W')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<tree.ceilingEntry(272) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.ceilingEntry(370) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 38 <<  " " <<(tree.update(758,'G')==true) << std::endl;
try{std::cout<<"Line no " << 39 <<  " " <<(tree.pop(675)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 40 <<  " " <<(tree.update(474,'Y')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 42 <<  " " <<(tree.update(160,'Y')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 46 <<  " " <<(tree.update(602,'O')==true) << std::endl;
try{std::cout<<"Line no " << 47 <<  " " <<(tree.pop(185)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<(tree.pop(767)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<(tree.pop(850)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(553)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 52 <<  " " <<(tree.update(955,'T')==true) << std::endl;
std::cout<<"Line no " << 53 <<  " " <<(tree.update(692,'M')==true) << std::endl;
try{std::cout<<"Line no " << 54 <<  " " <<(tree.pop(868)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 55 <<  " " <<(tree.update(273,'V')==true) << std::endl;
try{std::cout<<"Line no " << 56 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 57 <<  " " <<(tree.update(894,'K')==true) << std::endl;
std::cout<<"Line no " << 58 << " "; print_char_vector(tree.subMap(181,477));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 60 << " "; print_char_vector(tree.subMap(477,894));std::cout << std::endl;
try{std::cout<<"Line no " << 61 <<  " " <<tree.get(370) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<tree.ceilingEntry(370) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<tree.floorEntry(160) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<(tree.pop(248)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<(tree.pop(602)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<tree.get(181) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(894)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<tree.get(149) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 69 <<  " " <<(tree.pop(272)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 70 <<  " " <<(tree.update(437,'P')==true) << std::endl;
std::cout<<"Line no " << 71 <<  " " <<(tree.update(788,'J')==true) << std::endl;
std::cout<<"Line no " << 72 <<  " " <<(tree.update(310,'F')==true) << std::endl;
try{std::cout<<"Line no " << 73 <<  " " <<(tree.pop(618)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<(tree.pop(474)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 75 <<  " " <<(tree.pop(758)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 76 <<  " " <<(tree.update(881,'N')==true) << std::endl;
std::cout<<"Line no " << 77 <<  " " <<(tree.update(523,'T')==true) << std::endl;
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(88)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 79 <<  " " <<(tree.update(331,'K')==true) << std::endl;
try{std::cout<<"Line no " << 80 <<  " " <<tree.get(934) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<tree.floorEntry(488) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(467)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<tree.ceilingEntry(117) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(331)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 85 <<  " " <<(tree.update(270,'D')==false) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 87 <<  " " <<(tree.update(822,'O')==true) << std::endl;
try{std::cout<<"Line no " << 88 <<  " " <<tree.ceilingEntry(117) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<tree.floorEntry(692) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<tree.ceilingEntry(216) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<(tree.pop(216)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<(tree.pop(648)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 94 <<  " " <<(tree.update(742,'Y')==true) << std::endl;
std::cout<<"Line no " << 95 <<  " " <<(tree.update(702,'I')==true) << std::endl;
try{std::cout<<"Line no " << 96 <<  " " <<tree.ceilingEntry(231) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 97 << " "; print_char_vector(tree.subMap(117,457));std::cout << std::endl;
std::cout<<"Line no " << 98 <<  " " <<(tree.update(43,'M')==true) << std::endl;
try{std::cout<<"Line no " << 99 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 100 <<  " " <<(tree.update(583,'F')==true) << std::endl;
std::cout<<"Line no " << 101 <<  " " <<(tree.update(811,'R')==false) << std::endl;
try{std::cout<<"Line no " << 102 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<(tree.pop(888)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 104 << " "; print_char_vector(tree.subMap(117,457));std::cout << std::endl;
try{std::cout<<"Line no " << 105 <<  " " <<(tree.pop(477)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<tree.get(117) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(370)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 <<  " " <<(tree.update(427,'G')==true) << std::endl;
try{std::cout<<"Line no " << 109 <<  " " <<tree.floorEntry(822) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 110 <<  " " <<tree.get(437) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 111 <<  " " <<(tree.update(897,'K')==true) << std::endl;
std::cout<<"Line no " << 112 << " "; print_char_vector(tree.subMap(742,897));std::cout << std::endl;
std::cout<<"Line no " << 113 <<  " " <<(tree.update(71,'S')==true) << std::endl;
try{std::cout<<"Line no " << 114 <<  " " <<(tree.pop(488)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 115 <<  " " <<(tree.update(510,'A')==true) << std::endl;
std::cout<<"Line no " << 116 <<  " " <<(tree.update(302,'W')==true) << std::endl;
try{std::cout<<"Line no " << 117 <<  " " <<(tree.pop(523)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<(tree.pop(43)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<(tree.pop(181)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 125 <<  " " <<(tree.update(364,'R')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<tree.floorEntry(822) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<tree.floorEntry(273) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<tree.ceilingEntry(273) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.ceilingEntry(427) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
