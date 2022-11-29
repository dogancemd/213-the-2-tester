#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(430,'N')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(956,'X')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(182,'H')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(830,'R')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(982,'G')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(36,'G')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(93,'E')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(404,'Y')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(259,'O')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(875,'X')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(623,'T')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(667,'U')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(47,'T')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(361,'I')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(412,'G')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(533,'F')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(312,'T')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(913,'Y')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(828,'B')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(245,'I')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(463,'B')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(718,'Q')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(673,'N')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(557,'T')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(727,'W')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(13,'E')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(418,'A')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(35,'P')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(222,'U')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(978,'L')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<(tree.pop(361)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<(tree.pop(875)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 37 <<  " " <<(tree.update(678,'B')==true) << std::endl;
std::cout<<"Line no " << 38 <<  " " <<(tree.update(824,'R')==true) << std::endl;
try{std::cout<<"Line no " << 39 <<  " " <<tree.floorEntry(913) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<(tree.pop(978)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<(tree.pop(47)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 45 <<  " " <<(tree.update(973,'U')==false) << std::endl;
try{std::cout<<"Line no " << 46 <<  " " <<(tree.pop(463)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<(tree.pop(718)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 49 <<  " " <<(tree.update(30,'I')==true) << std::endl;
try{std::cout<<"Line no " << 50 <<  " " <<(tree.pop(404)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<(tree.pop(36)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<(tree.pop(678)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<tree.ceilingEntry(182) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<(tree.pop(312)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 56 <<  " " <<(tree.update(449,'I')==true) << std::endl;
std::cout<<"Line no " << 57 <<  " " <<(tree.update(189,'Q')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(727)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<(tree.pop(913)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<tree.get(35) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<tree.floorEntry(623) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<(tree.pop(449)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<tree.floorEntry(30) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 66 <<  " " <<(tree.update(475,'N')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 69 <<  " " <<(tree.update(6,'S')==true) << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<tree.floorEntry(245) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 71 <<  " " <<(tree.update(964,'G')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<(tree.pop(673)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 <<  " " <<(tree.update(863,'O')==true) << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<(tree.pop(475)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 77 <<  " " <<(tree.update(736,'A')==true) << std::endl;
std::cout<<"Line no " << 78 << " "; print_char_vector(tree.subMap(412,557));std::cout << std::endl;
std::cout<<"Line no " << 79 <<  " " <<(tree.update(173,'N')==false) << std::endl;
try{std::cout<<"Line no " << 80 <<  " " <<(tree.pop(245)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(182)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<tree.floorEntry(222) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<tree.ceilingEntry(557) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<tree.floorEntry(430) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<(tree.pop(863)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(828)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 92 <<  " " <<(tree.update(904,'Q')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 94 <<  " " <<(tree.update(714,'M')==true) << std::endl;
std::cout<<"Line no " << 95 <<  " " <<(tree.update(256,'R')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 97 <<  " " <<(tree.update(833,'H')==true) << std::endl;
try{std::cout<<"Line no " << 98 <<  " " <<tree.ceilingEntry(904) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 99 <<  " " <<(tree.update(341,'B')==true) << std::endl;
try{std::cout<<"Line no " << 100 <<  " " <<tree.floorEntry(714) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 101 <<  " " <<(tree.update(192,'X')==false) << std::endl;
try{std::cout<<"Line no " << 102 <<  " " <<(tree.pop(714)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 103 <<  " " <<(tree.update(631,'V')==true) << std::endl;
try{std::cout<<"Line no " << 104 <<  " " <<tree.floorEntry(412) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 105 <<  " " <<(tree.update(455,'O')==true) << std::endl;
try{std::cout<<"Line no " << 106 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<tree.get(824) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 << " "; print_char_vector(tree.subMap(341,736));std::cout << std::endl;
std::cout<<"Line no " << 109 << " "; print_char_vector(tree.subMap(833,904));std::cout << std::endl;
std::cout<<"Line no " << 110 <<  " " <<(tree.update(744,'W')==true) << std::endl;
std::cout<<"Line no " << 111 <<  " " <<(tree.update(369,'K')==true) << std::endl;
try{std::cout<<"Line no " << 112 <<  " " <<tree.ceilingEntry(256) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 <<  " " <<(tree.update(717,'Y')==true) << std::endl;
std::cout<<"Line no " << 114 << " "; print_char_vector(tree.subMap(369,631));std::cout << std::endl;
std::cout<<"Line no " << 115 <<  " " <<(tree.update(928,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 116 <<  " " <<(tree.pop(904)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 118 <<  " " <<(tree.update(534,'W')==true) << std::endl;
try{std::cout<<"Line no " << 119 <<  " " <<tree.get(717) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<tree.ceilingEntry(341) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 <<  " " <<(tree.update(866,'I')==true) << std::endl;
std::cout<<"Line no " << 124 <<  " " <<(tree.update(243,'I')==false) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<tree.get(430) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<(tree.pop(341)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(418)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 130 <<  " " <<(tree.update(85,'Y')==false) << std::endl;
try{std::cout<<"Line no " << 131 <<  " " <<tree.get(667) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<tree.ceilingEntry(631) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 133 <<  " " <<(tree.update(804,'R')==false) << std::endl;
try{std::cout<<"Line no " << 134 <<  " " <<tree.floorEntry(534) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
