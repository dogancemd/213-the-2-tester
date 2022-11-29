#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(426,'H')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(776,'Q')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(532,'L')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(305,'A')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(25,'P')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(548,'S')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(18,'G')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(956,'S')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(541,'J')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(316,'G')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(268,'P')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(753,'E')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(407,'K')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(191,'P')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(893,'X')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(771,'R')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(910,'A')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(365,'U')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(503,'Z')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(659,'E')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(827,'Y')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(744,'H')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(752,'B')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(930,'S')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(397,'T')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(784,'J')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(624,'A')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(868,'W')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(53,'E')==true) << std::endl;
try{std::cout<<"Line no " << 34 <<  " " <<(tree.pop(635)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 35 << " "; print_char_vector(tree.subMap(191,305));std::cout << std::endl;
try{std::cout<<"Line no " << 36 <<  " " <<(tree.pop(744)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 37 <<  " " <<(tree.update(73,'U')==true) << std::endl;
try{std::cout<<"Line no " << 38 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 39 <<  " " <<(tree.update(620,'F')==true) << std::endl;
std::cout<<"Line no " << 40 << " "; print_char_vector(tree.subMap(753,784));std::cout << std::endl;
try{std::cout<<"Line no " << 41 <<  " " <<(tree.pop(532)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<(tree.pop(477)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 43 << " "; print_char_vector(tree.subMap(407,426));std::cout << std::endl;
std::cout<<"Line no " << 44 <<  " " <<(tree.update(54,'N')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 46 <<  " " <<(tree.update(231,'J')==true) << std::endl;
std::cout<<"Line no " << 47 <<  " " <<(tree.update(292,'J')==true) << std::endl;
std::cout<<"Line no " << 48 <<  " " <<(tree.update(326,'E')==true) << std::endl;
try{std::cout<<"Line no " << 49 <<  " " <<tree.floorEntry(868) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 50 <<  " " <<(tree.update(855,'L')==true) << std::endl;
try{std::cout<<"Line no " << 51 <<  " " <<tree.ceilingEntry(316) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 55 <<  " " <<(tree.update(181,'G')==true) << std::endl;
std::cout<<"Line no " << 56 <<  " " <<(tree.update(298,'G')==true) << std::endl;
std::cout<<"Line no " << 57 <<  " " <<(tree.update(625,'I')==true) << std::endl;
try{std::cout<<"Line no " << 58 <<  " " <<tree.ceilingEntry(397) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 60 <<  " " <<(tree.update(983,'O')==false) << std::endl;
try{std::cout<<"Line no " << 61 <<  " " <<tree.get(930) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 62 << " "; print_char_vector(tree.subMap(407,659));std::cout << std::endl;
std::cout<<"Line no " << 63 << " "; print_char_vector(tree.subMap(305,326));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<(tree.pop(181)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 67 <<  " " <<(tree.update(993,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 68 <<  " " <<(tree.pop(620)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 69 <<  " " <<(tree.update(672,'W')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<(tree.pop(868)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 72 <<  " " <<(tree.pop(326)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 74 <<  " " <<(tree.update(279,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 75 <<  " " <<(tree.pop(407)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 76 << " "; print_char_vector(tree.subMap(298,625));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 79 << " "; print_char_vector(tree.subMap(191,231));std::cout << std::endl;
std::cout<<"Line no " << 80 << " "; print_char_vector(tree.subMap(659,753));std::cout << std::endl;
try{std::cout<<"Line no " << 81 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 82 <<  " " <<(tree.update(809,'U')==true) << std::endl;
try{std::cout<<"Line no " << 83 <<  " " <<(tree.pop(776)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<tree.ceilingEntry(231) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<tree.floorEntry(268) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 87 <<  " " <<(tree.update(667,'T')==true) << std::endl;
try{std::cout<<"Line no " << 88 <<  " " <<tree.ceilingEntry(624) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<tree.floorEntry(809) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(993)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<tree.floorEntry(771) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<tree.ceilingEntry(541) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 94 <<  " " <<(tree.pop(659)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 95 <<  " " <<tree.ceilingEntry(753) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 96 <<  " " <<(tree.pop(624)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<(tree.pop(279)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<(tree.pop(450)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<(tree.pop(397)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<tree.ceilingEntry(753) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 105 <<  " " <<(tree.update(303,'F')==true) << std::endl;
try{std::cout<<"Line no " << 106 <<  " " <<tree.get(303) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(316)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<tree.get(771) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 109 <<  " " <<(tree.update(877,'I')==true) << std::endl;
std::cout<<"Line no " << 110 <<  " " <<(tree.update(4,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 111 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<(tree.pop(426)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<(tree.pop(827)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<(tree.pop(305)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 115 <<  " " <<(tree.update(75,'D')==true) << std::endl;
try{std::cout<<"Line no " << 116 <<  " " <<tree.get(752) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<tree.floorEntry(809) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<(tree.pop(292)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 119 <<  " " <<tree.ceilingEntry(753) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<tree.ceilingEntry(877) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 121 << " "; print_char_vector(tree.subMap(4,753));std::cout << std::endl;
std::cout<<"Line no " << 122 << " "; print_char_vector(tree.subMap(191,541));std::cout << std::endl;
try{std::cout<<"Line no " << 123 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 124 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 125 <<  " " <<(tree.pop(268)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<(tree.pop(273)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 128 << " "; print_char_vector(tree.subMap(303,771));std::cout << std::endl;
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(4)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<tree.floorEntry(541) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 131 <<  " " <<(tree.update(267,'Q')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<tree.get(771) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
