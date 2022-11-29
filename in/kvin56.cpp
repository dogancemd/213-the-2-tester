#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(492,'Q')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(333,'H')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(721,'L')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(627,'Z')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(605,'Z')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(406,'T')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(134,'K')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(622,'G')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(639,'V')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(978,'Y')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(128,'G')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(421,'D')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(844,'I')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(717,'A')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(963,'G')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(665,'I')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(749,'N')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(764,'M')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(246,'R')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(150,'H')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(395,'J')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(628,'L')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(185,'F')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(504,'R')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(709,'J')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(597,'C')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(51,'B')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(821,'Q')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(157,'T')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(352,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<(tree.pop(597)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 36 <<  " " <<(tree.update(291,'C')==true) << std::endl;
try{std::cout<<"Line no " << 37 <<  " " <<(tree.pop(628)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 39 <<  " " <<(tree.pop(627)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<tree.ceilingEntry(333) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 42 <<  " " <<(tree.update(677,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 43 <<  " " <<tree.ceilingEntry(821) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 44 << " "; print_char_vector(tree.subMap(395,421));std::cout << std::endl;
try{std::cout<<"Line no " << 45 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<(tree.pop(406)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 47 <<  " " <<(tree.update(216,'P')==false) << std::endl;
try{std::cout<<"Line no " << 48 <<  " " <<(tree.pop(246)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<tree.get(717) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 51 <<  " " <<(tree.update(303,'D')==false) << std::endl;
std::cout<<"Line no " << 52 << " "; print_char_vector(tree.subMap(421,622));std::cout << std::endl;
std::cout<<"Line no " << 53 <<  " " <<(tree.update(360,'W')==true) << std::endl;
try{std::cout<<"Line no " << 54 <<  " " <<(tree.pop(639)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<(tree.pop(821)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<(tree.pop(333)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<(tree.pop(665)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 59 <<  " " <<(tree.update(273,'I')==true) << std::endl;
std::cout<<"Line no " << 60 << " "; print_char_vector(tree.subMap(709,749));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<tree.ceilingEntry(291) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<tree.floorEntry(128) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<(tree.pop(421)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<(tree.pop(709)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 67 <<  " " <<(tree.update(600,'V')==true) << std::endl;
std::cout<<"Line no " << 68 << " "; print_char_vector(tree.subMap(291,721));std::cout << std::endl;
std::cout<<"Line no " << 69 <<  " " <<(tree.update(135,'O')==true) << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<tree.ceilingEntry(150) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 72 <<  " " <<(tree.update(511,'R')==true) << std::endl;
std::cout<<"Line no " << 73 <<  " " <<(tree.update(361,'U')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 75 <<  " " <<(tree.pop(717)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(749)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<(tree.pop(135)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 81 <<  " " <<(tree.update(645,'G')==true) << std::endl;
try{std::cout<<"Line no " << 82 <<  " " <<tree.ceilingEntry(511) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<(tree.pop(600)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(352)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<(tree.pop(622)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(360)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(185)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<(tree.pop(273)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(395)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<(tree.pop(291)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 94 <<  " " <<(tree.update(408,'X')==true) << std::endl;
try{std::cout<<"Line no " << 95 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 96 <<  " " <<(tree.update(793,'V')==true) << std::endl;
try{std::cout<<"Line no " << 97 <<  " " <<tree.floorEntry(605) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<(tree.pop(677)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 99 <<  " " <<(tree.update(913,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 100 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 101 <<  " " <<(tree.update(910,'A')==true) << std::endl;
try{std::cout<<"Line no " << 102 <<  " " <<(tree.pop(721)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<tree.floorEntry(913) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<tree.ceilingEntry(511) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<(tree.pop(408)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(361)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 110 <<  " " <<(tree.update(949,'I')==true) << std::endl;
std::cout<<"Line no " << 111 <<  " " <<(tree.update(937,'L')==true) << std::endl;
try{std::cout<<"Line no " << 112 <<  " " <<tree.get(492) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<tree.get(511) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 115 << " "; print_char_vector(tree.subMap(793,910));std::cout << std::endl;
std::cout<<"Line no " << 116 << " "; print_char_vector(tree.subMap(511,645));std::cout << std::endl;
std::cout<<"Line no " << 117 <<  " " <<(tree.update(927,'M')==true) << std::endl;
try{std::cout<<"Line no " << 118 <<  " " <<(tree.pop(937)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 119 <<  " " <<(tree.pop(492)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 121 <<  " " <<(tree.update(908,'Q')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<tree.ceilingEntry(793) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 125 <<  " " <<(tree.pop(910)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<(tree.pop(605)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<(tree.pop(645)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<tree.get(927) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 132 <<  " " <<(tree.update(575,'A')==true) << std::endl;
try{std::cout<<"Line no " << 133 <<  " " <<tree.floorEntry(575) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
