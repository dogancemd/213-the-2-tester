#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(713,'V')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(831,'O')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(674,'R')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(950,'O')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(447,'O')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(847,'V')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(828,'K')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(792,'K')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(998,'X')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(965,'C')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(324,'U')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(983,'D')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(657,'D')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(165,'G')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(302,'V')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(457,'J')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(554,'N')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(211,'D')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(729,'R')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(269,'V')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(609,'D')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(733,'T')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(19,'O')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(36,'I')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(403,'G')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(148,'X')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(937,'C')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(399,'D')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(744,'B')==true) << std::endl;
try{std::cout<<"Line no " << 34 <<  " " <<tree.floorEntry(269) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 35 <<  " " <<(tree.pop(744)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 36 <<  " " <<(tree.update(274,'Y')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 38 <<  " " <<(tree.update(781,'F')==true) << std::endl;
std::cout<<"Line no " << 39 <<  " " <<(tree.update(21,'P')==true) << std::endl;
std::cout<<"Line no " << 40 << " "; print_char_vector(tree.subMap(21,36));std::cout << std::endl;
try{std::cout<<"Line no " << 41 <<  " " <<tree.ceilingEntry(792) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<tree.floorEntry(831) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 45 <<  " " <<(tree.update(230,'M')==true) << std::endl;
std::cout<<"Line no " << 46 <<  " " <<(tree.update(64,'A')==true) << std::endl;
try{std::cout<<"Line no " << 47 <<  " " <<tree.get(847) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 <<  " " <<(tree.update(42,'B')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 50 <<  " " <<(tree.update(181,'I')==true) << std::endl;
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(103)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 52 <<  " " <<(tree.update(276,'A')==false) << std::endl;
try{std::cout<<"Line no " << 53 <<  " " <<(tree.pop(792)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 55 <<  " " <<(tree.update(649,'C')==true) << std::endl;
try{std::cout<<"Line no " << 56 <<  " " <<tree.get(831) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 57 <<  " " <<(tree.update(273,'Y')==true) << std::endl;
std::cout<<"Line no " << 58 <<  " " <<(tree.update(140,'P')==true) << std::endl;
try{std::cout<<"Line no " << 59 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 60 <<  " " <<(tree.update(848,'U')==true) << std::endl;
try{std::cout<<"Line no " << 61 <<  " " <<(tree.pop(457)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<(tree.pop(965)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 63 <<  " " <<(tree.update(493,'K')==false) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 67 <<  " " <<(tree.update(615,'Y')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 69 <<  " " <<(tree.pop(554)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 70 <<  " " <<(tree.pop(713)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 71 <<  " " <<(tree.update(47,'W')==true) << std::endl;
try{std::cout<<"Line no " << 72 <<  " " <<(tree.pop(165)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<(tree.pop(781)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<(tree.pop(324)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 << " "; print_char_vector(tree.subMap(36,615));std::cout << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 77 <<  " " <<(tree.update(109,'P')==true) << std::endl;
try{std::cout<<"Line no " << 78 <<  " " <<tree.get(36) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 79 << " "; print_char_vector(tree.subMap(148,403));std::cout << std::endl;
std::cout<<"Line no " << 80 << " "; print_char_vector(tree.subMap(609,649));std::cout << std::endl;
std::cout<<"Line no " << 81 <<  " " <<(tree.update(894,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(269)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<(tree.pop(302)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(140)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 85 <<  " " <<(tree.update(971,'Q')==true) << std::endl;
std::cout<<"Line no " << 86 <<  " " <<(tree.update(67,'Z')==true) << std::endl;
std::cout<<"Line no " << 87 <<  " " <<(tree.update(898,'B')==true) << std::endl;
std::cout<<"Line no " << 88 <<  " " <<(tree.update(812,'E')==true) << std::endl;
try{std::cout<<"Line no " << 89 <<  " " <<tree.ceilingEntry(733) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 90 <<  " " <<(tree.update(294,'T')==false) << std::endl;
try{std::cout<<"Line no " << 91 <<  " " <<(tree.pop(36)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 92 <<  " " <<(tree.update(507,'L')==true) << std::endl;
try{std::cout<<"Line no " << 93 <<  " " <<(tree.pop(403)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 94 <<  " " <<(tree.pop(447)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 95 <<  " " <<(tree.pop(399)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 96 <<  " " <<tree.get(609) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 97 <<  " " <<(tree.update(233,'Y')==true) << std::endl;
std::cout<<"Line no " << 98 <<  " " <<(tree.update(668,'K')==false) << std::endl;
std::cout<<"Line no " << 99 <<  " " <<(tree.update(87,'V')==true) << std::endl;
std::cout<<"Line no " << 100 << " "; print_char_vector(tree.subMap(230,230));std::cout << std::endl;
try{std::cout<<"Line no " << 101 <<  " " <<(tree.pop(869)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 102 <<  " " <<(tree.update(770,'B')==true) << std::endl;
try{std::cout<<"Line no " << 103 <<  " " <<tree.floorEntry(230) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 105 <<  " " <<(tree.update(740,'F')==false) << std::endl;
std::cout<<"Line no " << 106 <<  " " <<(tree.update(542,'E')==true) << std::endl;
try{std::cout<<"Line no " << 107 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 110 <<  " " <<tree.floorEntry(847) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 111 <<  " " <<(tree.update(717,'V')==true) << std::endl;
try{std::cout<<"Line no " << 112 <<  " " <<tree.ceilingEntry(717) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<(tree.pop(674)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 115 <<  " " <<(tree.update(295,'I')==true) << std::endl;
std::cout<<"Line no " << 116 <<  " " <<(tree.update(567,'J')==true) << std::endl;
try{std::cout<<"Line no " << 117 <<  " " <<tree.ceilingEntry(295) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 118 << " "; print_char_vector(tree.subMap(181,828));std::cout << std::endl;
try{std::cout<<"Line no " << 119 <<  " " <<(tree.pop(67)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 120 <<  " " <<(tree.update(618,'M')==true) << std::endl;
try{std::cout<<"Line no " << 121 <<  " " <<(tree.pop(148)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 << " "; print_char_vector(tree.subMap(717,894));std::cout << std::endl;
std::cout<<"Line no " << 124 <<  " " <<(tree.update(489,'X')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<tree.ceilingEntry(894) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 127 <<  " " <<(tree.update(43,'F')==true) << std::endl;
try{std::cout<<"Line no " << 128 <<  " " <<(tree.pop(489)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<(tree.pop(274)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<(tree.pop(183)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 132 <<  " " <<(tree.update(667,'B')==true) << std::endl;
std::cout<<"Line no " << 133 <<  " " <<(tree.update(563,'K')==true) << std::endl;
try{std::cout<<"Line no " << 134 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
