#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(579,'C')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(727,'A')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(726,'N')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(430,'P')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(488,'M')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(918,'Z')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(431,'P')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(829,'Y')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(439,'K')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(205,'G')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(642,'I')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(880,'U')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(445,'V')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(541,'M')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(599,'P')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(956,'A')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(854,'J')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(290,'H')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(549,'L')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(591,'R')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(355,'V')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(398,'Z')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(614,'J')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(655,'A')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(605,'U')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(278,'H')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(783,'C')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(643,'W')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(955,'Q')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(755,'F')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<tree.get(727) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 36 << " "; print_char_vector(tree.subMap(591,599));std::cout << std::endl;
try{std::cout<<"Line no " << 37 <<  " " <<(tree.pop(148)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 38 <<  " " <<(tree.update(437,'D')==false) << std::endl;
try{std::cout<<"Line no " << 39 <<  " " <<tree.floorEntry(290) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<tree.floorEntry(439) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 41 <<  " " <<(tree.update(562,'M')==true) << std::endl;
std::cout<<"Line no " << 42 <<  " " <<(tree.update(428,'J')==true) << std::endl;
try{std::cout<<"Line no " << 43 <<  " " <<(tree.pop(290)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<tree.floorEntry(430) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<tree.ceilingEntry(655) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<(tree.pop(430)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 47 <<  " " <<(tree.update(780,'M')==true) << std::endl;
try{std::cout<<"Line no " << 48 <<  " " <<(tree.pop(783)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 49 <<  " " <<(tree.update(984,'T')==true) << std::endl;
std::cout<<"Line no " << 50 <<  " " <<(tree.update(986,'G')==true) << std::endl;
try{std::cout<<"Line no " << 51 <<  " " <<tree.floorEntry(642) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 52 <<  " " <<(tree.update(493,'D')==true) << std::endl;
try{std::cout<<"Line no " << 53 <<  " " <<(tree.pop(642)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<tree.get(488) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<(tree.pop(829)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<(tree.pop(727)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<tree.floorEntry(445) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 60 <<  " " <<(tree.update(989,'X')==true) << std::endl;
try{std::cout<<"Line no " << 61 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 62 <<  " " <<(tree.update(916,'A')==true) << std::endl;
std::cout<<"Line no " << 63 <<  " " <<(tree.update(705,'P')==true) << std::endl;
try{std::cout<<"Line no " << 64 <<  " " <<tree.floorEntry(493) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<(tree.pop(955)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 66 <<  " " <<(tree.update(663,'V')==true) << std::endl;
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(439)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<(tree.pop(562)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 70 <<  " " <<(tree.pop(445)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 71 <<  " " <<(tree.update(651,'I')==true) << std::endl;
std::cout<<"Line no " << 72 <<  " " <<(tree.update(351,'N')==true) << std::endl;
try{std::cout<<"Line no " << 73 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 74 <<  " " <<(tree.update(707,'Y')==true) << std::endl;
std::cout<<"Line no " << 75 <<  " " <<(tree.update(429,'V')==true) << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<(tree.pop(984)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<(tree.pop(488)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<(tree.pop(549)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<(tree.pop(605)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<(tree.pop(755)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 84 << " "; print_char_vector(tree.subMap(398,643));std::cout << std::endl;
std::cout<<"Line no " << 85 <<  " " <<(tree.update(438,'O')==true) << std::endl;
try{std::cout<<"Line no " << 86 <<  " " <<tree.floorEntry(916) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<(tree.pop(916)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 89 <<  " " <<(tree.update(213,'B')==true) << std::endl;
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(541)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 91 <<  " " <<(tree.update(855,'S')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 93 <<  " " <<(tree.update(282,'O')==true) << std::endl;
std::cout<<"Line no " << 94 <<  " " <<(tree.update(152,'N')==true) << std::endl;
try{std::cout<<"Line no " << 95 <<  " " <<(tree.pop(918)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 96 <<  " " <<(tree.update(305,'B')==true) << std::endl;
try{std::cout<<"Line no " << 97 <<  " " <<tree.floorEntry(152) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 98 <<  " " <<(tree.update(55,'L')==false) << std::endl;
try{std::cout<<"Line no " << 99 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 101 <<  " " <<(tree.update(254,'F')==true) << std::endl;
try{std::cout<<"Line no " << 102 <<  " " <<(tree.pop(431)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 105 <<  " " <<(tree.update(89,'C')==true) << std::endl;
try{std::cout<<"Line no " << 106 <<  " " <<tree.ceilingEntry(599) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 107 <<  " " <<(tree.update(970,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 108 <<  " " <<(tree.pop(438)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 110 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 111 <<  " " <<(tree.update(978,'U')==true) << std::endl;
std::cout<<"Line no " << 112 << " "; print_char_vector(tree.subMap(493,726));std::cout << std::endl;
try{std::cout<<"Line no " << 113 <<  " " <<tree.ceilingEntry(89) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<(tree.pop(429)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<tree.ceilingEntry(705) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<(tree.pop(282)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<(tree.pop(666)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 119 <<  " " <<(tree.pop(428)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<tree.floorEntry(614) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<tree.get(614) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 124 <<  " " <<(tree.update(156,'I')==true) << std::endl;
try{std::cout<<"Line no " << 125 <<  " " <<tree.get(854) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 126 <<  " " <<(tree.update(714,'S')==true) << std::endl;
std::cout<<"Line no " << 127 << " "; print_char_vector(tree.subMap(156,854));std::cout << std::endl;
std::cout<<"Line no " << 128 <<  " " <<(tree.update(873,'C')==true) << std::endl;
std::cout<<"Line no " << 129 <<  " " <<(tree.update(516,'W')==true) << std::endl;
try{std::cout<<"Line no " << 130 <<  " " <<(tree.pop(855)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<(tree.pop(780)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 132 <<  " " <<(tree.update(503,'L')==true) << std::endl;
try{std::cout<<"Line no " << 133 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 134 << " "; print_char_vector(tree.subMap(599,854));std::cout << std::endl;
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
