#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(338,'Y')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(580,'G')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(977,'U')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(880,'R')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(239,'Z')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(841,'A')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(664,'U')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(186,'S')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(355,'P')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(659,'R')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(746,'G')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(245,'Y')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(984,'K')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(273,'N')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(521,'I')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(156,'A')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(145,'J')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(150,'E')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(901,'G')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(647,'N')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(215,'V')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(68,'C')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(493,'I')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(983,'B')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(477,'S')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(803,'R')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(136,'U')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(469,'T')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(500,'B')==true) << std::endl;
std::cout<<"Line no " << 34 << " "; print_char_vector(tree.subMap(469,500));std::cout << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<tree.get(338) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<tree.floorEntry(901) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.floorEntry(841) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 38 <<  " " <<(tree.pop(150)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 39 << " "; print_char_vector(tree.subMap(215,521));std::cout << std::endl;
std::cout<<"Line no " << 40 <<  " " <<(tree.update(21,'A')==true) << std::endl;
try{std::cout<<"Line no " << 41 <<  " " <<(tree.pop(761)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 43 <<  " " <<(tree.update(223,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 44 <<  " " <<(tree.pop(239)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 45 << " "; print_char_vector(tree.subMap(156,215));std::cout << std::endl;
try{std::cout<<"Line no " << 46 <<  " " <<(tree.pop(145)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 47 <<  " " <<(tree.update(631,'C')==false) << std::endl;
std::cout<<"Line no " << 48 <<  " " <<(tree.update(899,'O')==true) << std::endl;
std::cout<<"Line no " << 49 <<  " " <<(tree.update(290,'K')==true) << std::endl;
try{std::cout<<"Line no " << 50 <<  " " <<tree.floorEntry(136) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<(tree.pop(355)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 57 <<  " " <<(tree.update(416,'A')==true) << std::endl;
try{std::cout<<"Line no " << 58 <<  " " <<(tree.pop(803)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 59 <<  " " <<(tree.update(135,'I')==true) << std::endl;
std::cout<<"Line no " << 60 <<  " " <<(tree.update(626,'R')==true) << std::endl;
try{std::cout<<"Line no " << 61 <<  " " <<tree.ceilingEntry(841) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 64 <<  " " <<(tree.update(679,'W')==false) << std::endl;
try{std::cout<<"Line no " << 65 <<  " " <<(tree.pop(521)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(880)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 68 << " "; print_char_vector(tree.subMap(290,626));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 70 <<  " " <<(tree.pop(223)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 71 <<  " " <<(tree.update(35,'A')==true) << std::endl;
try{std::cout<<"Line no " << 72 <<  " " <<tree.floorEntry(647) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 73 << " "; print_char_vector(tree.subMap(477,626));std::cout << std::endl;
std::cout<<"Line no " << 74 <<  " " <<(tree.update(836,'V')==true) << std::endl;
try{std::cout<<"Line no " << 75 <<  " " <<tree.ceilingEntry(500) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 78 << " "; print_char_vector(tree.subMap(500,664));std::cout << std::endl;
try{std::cout<<"Line no " << 79 <<  " " <<(tree.pop(186)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<(tree.pop(500)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 81 <<  " " <<(tree.update(445,'B')==true) << std::endl;
std::cout<<"Line no " << 82 <<  " " <<(tree.update(108,'S')==true) << std::endl;
std::cout<<"Line no " << 83 <<  " " <<(tree.update(207,'H')==true) << std::endl;
try{std::cout<<"Line no " << 84 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<tree.floorEntry(626) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<tree.ceilingEntry(664) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<tree.ceilingEntry(901) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<tree.get(416) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 91 <<  " " <<(tree.update(749,'C')==true) << std::endl;
try{std::cout<<"Line no " << 92 <<  " " <<tree.floorEntry(445) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 94 <<  " " <<(tree.update(999,'B')==true) << std::endl;
std::cout<<"Line no " << 95 << " "; print_char_vector(tree.subMap(416,901));std::cout << std::endl;
std::cout<<"Line no " << 96 <<  " " <<(tree.update(136,'X')==true) << std::endl;
try{std::cout<<"Line no " << 97 <<  " " <<(tree.pop(273)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<(tree.pop(836)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<tree.get(445) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 100 <<  " " <<(tree.update(904,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 101 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<(tree.pop(749)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<(tree.pop(477)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 105 <<  " " <<(tree.update(182,'R')==false) << std::endl;
try{std::cout<<"Line no " << 106 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 107 << " "; print_char_vector(tree.subMap(416,746));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<(tree.pop(445)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 110 << " "; print_char_vector(tree.subMap(290,338));std::cout << std::endl;
try{std::cout<<"Line no " << 111 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 112 <<  " " <<(tree.update(522,'K')==true) << std::endl;
std::cout<<"Line no " << 113 <<  " " <<(tree.update(90,'N')==true) << std::endl;
std::cout<<"Line no " << 114 <<  " " <<(tree.update(431,'S')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 116 <<  " " <<(tree.update(744,'A')==true) << std::endl;
try{std::cout<<"Line no " << 117 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<(tree.pop(416)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 119 << " "; print_char_vector(tree.subMap(522,647));std::cout << std::endl;
try{std::cout<<"Line no " << 120 <<  " " <<(tree.pop(647)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<tree.floorEntry(469) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 <<  " " <<(tree.update(310,'O')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 125 <<  " " <<(tree.update(468,'Z')==true) << std::endl;
std::cout<<"Line no " << 126 <<  " " <<(tree.update(918,'N')==true) << std::endl;
std::cout<<"Line no " << 127 <<  " " <<(tree.update(696,'G')==true) << std::endl;
try{std::cout<<"Line no " << 128 <<  " " <<(tree.pop(310)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(664)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 130 <<  " " <<(tree.update(388,'V')==true) << std::endl;
std::cout<<"Line no " << 131 <<  " " <<(tree.update(237,'Y')==true) << std::endl;
std::cout<<"Line no " << 132 <<  " " <<(tree.update(483,'F')==true) << std::endl;
try{std::cout<<"Line no " << 133 <<  " " <<tree.get(290) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
