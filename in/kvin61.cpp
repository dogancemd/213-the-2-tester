#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(400,'J')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(172,'Z')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(692,'O')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(45,'I')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(95,'I')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(935,'F')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(102,'X')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(943,'W')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(65,'H')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(964,'M')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(422,'T')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(534,'P')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(104,'Y')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(110,'S')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(519,'M')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(144,'G')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(408,'E')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(286,'X')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(992,'C')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(781,'T')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(108,'M')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(118,'X')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(344,'L')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(541,'W')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(796,'J')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(194,'R')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(263,'S')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(842,'B')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(386,'K')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(117,'D')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<tree.ceilingEntry(796) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<(tree.pop(65)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 37 <<  " " <<(tree.update(184,'Y')==true) << std::endl;
std::cout<<"Line no " << 38 << " "; print_char_vector(tree.subMap(108,344));std::cout << std::endl;
std::cout<<"Line no " << 39 <<  " " <<(tree.update(69,'L')==false) << std::endl;
try{std::cout<<"Line no " << 40 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 42 <<  " " <<(tree.update(410,'P')==false) << std::endl;
std::cout<<"Line no " << 43 <<  " " <<(tree.update(38,'Q')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 45 <<  " " <<(tree.update(730,'P')==true) << std::endl;
try{std::cout<<"Line no " << 46 <<  " " <<tree.floorEntry(108) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 47 <<  " " <<(tree.update(829,'S')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<(tree.pop(403)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 50 << " "; print_char_vector(tree.subMap(110,144));std::cout << std::endl;
try{std::cout<<"Line no " << 51 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<(tree.pop(263)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 53 <<  " " <<(tree.update(290,'S')==false) << std::endl;
try{std::cout<<"Line no " << 54 <<  " " <<tree.ceilingEntry(796) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<(tree.pop(117)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 56 <<  " " <<(tree.update(64,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 57 <<  " " <<(tree.pop(730)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<tree.ceilingEntry(519) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<tree.floorEntry(829) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<tree.ceilingEntry(796) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 61 <<  " " <<(tree.update(745,'H')==true) << std::endl;
try{std::cout<<"Line no " << 62 <<  " " <<tree.ceilingEntry(541) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<(tree.pop(519)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(781)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 68 <<  " " <<(tree.update(562,'M')==true) << std::endl;
std::cout<<"Line no " << 69 <<  " " <<(tree.update(766,'U')==true) << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<(tree.pop(541)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 72 <<  " " <<(tree.update(997,'G')==true) << std::endl;
try{std::cout<<"Line no " << 73 <<  " " <<tree.ceilingEntry(184) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 75 <<  " " <<(tree.pop(118)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 76 <<  " " <<(tree.update(590,'Y')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 78 <<  " " <<(tree.update(495,'N')==true) << std::endl;
std::cout<<"Line no " << 79 <<  " " <<(tree.update(248,'X')==true) << std::endl;
try{std::cout<<"Line no " << 80 <<  " " <<tree.get(104) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<(tree.pop(935)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 82 <<  " " <<(tree.update(749,'K')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(495)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<tree.floorEntry(562) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 87 <<  " " <<(tree.update(464,'Z')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 89 <<  " " <<(tree.update(175,'A')==true) << std::endl;
std::cout<<"Line no " << 90 <<  " " <<(tree.update(862,'M')==true) << std::endl;
try{std::cout<<"Line no " << 91 <<  " " <<(tree.pop(692)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 92 <<  " " <<(tree.update(950,'K')==true) << std::endl;
try{std::cout<<"Line no " << 93 <<  " " <<tree.floorEntry(172) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 95 << " "; print_char_vector(tree.subMap(184,184));std::cout << std::endl;
try{std::cout<<"Line no " << 96 <<  " " <<(tree.pop(408)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 100 <<  " " <<(tree.update(260,'W')==true) << std::endl;
std::cout<<"Line no " << 101 <<  " " <<(tree.update(779,'C')==true) << std::endl;
try{std::cout<<"Line no " << 102 <<  " " <<tree.get(144) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<tree.ceilingEntry(172) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 104 <<  " " <<(tree.update(82,'S')==true) << std::endl;
try{std::cout<<"Line no " << 105 <<  " " <<tree.floorEntry(749) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<(tree.pop(186)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 110 <<  " " <<(tree.update(582,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 111 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<(tree.pop(582)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<(tree.pop(194)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<tree.floorEntry(286) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<tree.get(829) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 117 <<  " " <<(tree.update(25,'N')==true) << std::endl;
std::cout<<"Line no " << 118 <<  " " <<(tree.update(599,'W')==true) << std::endl;
try{std::cout<<"Line no " << 119 <<  " " <<(tree.pop(422)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 120 << " "; print_char_vector(tree.subMap(260,562));std::cout << std::endl;
try{std::cout<<"Line no " << 121 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<tree.get(745) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<tree.ceilingEntry(344) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 124 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 125 <<  " " <<(tree.update(276,'H')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<(tree.pop(766)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<(tree.pop(172)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(599)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<tree.floorEntry(276) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<(tree.pop(562)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.get(344) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
