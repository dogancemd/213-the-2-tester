#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(441,'S')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(191,'D')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(998,'Q')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(121,'Q')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(792,'S')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(356,'U')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(682,'D')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(358,'M')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(371,'N')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(975,'J')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(276,'N')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(126,'H')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(681,'H')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(750,'L')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(430,'T')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(319,'V')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(285,'Y')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(723,'Y')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(991,'S')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(242,'A')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(322,'D')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(83,'Y')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(809,'U')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(493,'M')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(788,'E')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(116,'D')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(923,'D')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(317,'W')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(504,'D')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(643,'G')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<(tree.pop(998)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.floorEntry(682) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 38 <<  " " <<(tree.update(103,'X')==true) << std::endl;
try{std::cout<<"Line no " << 39 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<(tree.pop(493)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 42 <<  " " <<(tree.update(880,'Q')==false) << std::endl;
std::cout<<"Line no " << 43 <<  " " <<(tree.update(808,'K')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<(tree.pop(168)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<tree.ceilingEntry(319) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<tree.ceilingEntry(788) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 <<  " " <<(tree.update(592,'Q')==true) << std::endl;
std::cout<<"Line no " << 49 <<  " " <<(tree.update(915,'A')==true) << std::endl;
try{std::cout<<"Line no " << 50 <<  " " <<(tree.pop(358)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(643)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<(tree.pop(191)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 53 <<  " " <<(tree.update(898,'M')==true) << std::endl;
try{std::cout<<"Line no " << 54 <<  " " <<(tree.pop(723)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 55 <<  " " <<(tree.update(391,'J')==true) << std::endl;
std::cout<<"Line no " << 56 <<  " " <<(tree.update(502,'H')==true) << std::endl;
try{std::cout<<"Line no " << 57 <<  " " <<tree.floorEntry(915) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<(tree.pop(504)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(898)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<(tree.pop(430)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<tree.ceilingEntry(242) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<(tree.pop(322)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<(tree.pop(788)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<tree.ceilingEntry(276) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 67 <<  " " <<(tree.update(211,'H')==true) << std::endl;
try{std::cout<<"Line no " << 68 <<  " " <<tree.ceilingEntry(975) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 69 <<  " " <<(tree.update(964,'Q')==true) << std::endl;
std::cout<<"Line no " << 70 <<  " " <<(tree.update(151,'I')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 72 <<  " " <<(tree.update(198,'U')==true) << std::endl;
try{std::cout<<"Line no " << 73 <<  " " <<tree.get(682) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<tree.ceilingEntry(151) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 <<  " " <<(tree.update(510,'T')==true) << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<(tree.pop(681)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 77 <<  " " <<(tree.update(887,'Q')==true) << std::endl;
std::cout<<"Line no " << 78 <<  " " <<(tree.update(164,'E')==true) << std::endl;
try{std::cout<<"Line no " << 79 <<  " " <<(tree.pop(792)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 80 <<  " " <<(tree.update(621,'E')==false) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<(tree.pop(463)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(809)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<tree.ceilingEntry(126) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(502)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<tree.get(750) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 89 <<  " " <<(tree.update(362,'A')==true) << std::endl;
try{std::cout<<"Line no " << 90 <<  " " <<tree.floorEntry(211) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 91 <<  " " <<(tree.update(634,'M')==true) << std::endl;
std::cout<<"Line no " << 92 <<  " " <<(tree.update(702,'O')==true) << std::endl;
try{std::cout<<"Line no " << 93 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 94 <<  " " <<(tree.update(890,'I')==true) << std::endl;
std::cout<<"Line no " << 95 << " "; print_char_vector(tree.subMap(441,750));std::cout << std::endl;
try{std::cout<<"Line no " << 96 <<  " " <<(tree.pop(702)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 99 <<  " " <<(tree.update(551,'E')==true) << std::endl;
try{std::cout<<"Line no " << 100 <<  " " <<tree.floorEntry(441) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 101 << " "; print_char_vector(tree.subMap(510,592));std::cout << std::endl;
try{std::cout<<"Line no " << 102 <<  " " <<tree.get(362) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<(tree.pop(242)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<tree.ceilingEntry(391) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<(tree.pop(362)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(923)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 <<  " " <<(tree.update(882,'R')==true) << std::endl;
try{std::cout<<"Line no " << 109 <<  " " <<(tree.pop(319)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 110 <<  " " <<(tree.pop(441)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<(tree.pop(808)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 112 << " "; print_char_vector(tree.subMap(198,391));std::cout << std::endl;
std::cout<<"Line no " << 113 <<  " " <<(tree.update(471,'L')==true) << std::endl;
try{std::cout<<"Line no " << 114 <<  " " <<(tree.pop(371)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<(tree.pop(391)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 117 <<  " " <<(tree.update(463,'A')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 119 << " "; print_char_vector(tree.subMap(211,317));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 121 <<  " " <<(tree.update(279,'I')==true) << std::endl;
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(471)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 <<  " " <<(tree.update(977,'D')==true) << std::endl;
std::cout<<"Line no " << 124 <<  " " <<(tree.update(12,'A')==true) << std::endl;
std::cout<<"Line no " << 125 <<  " " <<(tree.update(290,'N')==true) << std::endl;
try{std::cout<<"Line no " << 126 <<  " " <<tree.ceilingEntry(750) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<tree.floorEntry(592) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<(tree.pop(807)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 129 <<  " " <<(tree.update(336,'H')==true) << std::endl;
try{std::cout<<"Line no " << 130 <<  " " <<(tree.pop(634)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<(tree.pop(882)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 132 <<  " " <<(tree.update(2,'D')==true) << std::endl;
try{std::cout<<"Line no " << 133 <<  " " <<(tree.pop(510)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 134 << " "; print_char_vector(tree.subMap(276,887));std::cout << std::endl;
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
