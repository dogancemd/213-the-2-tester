#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(705,'I')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(80,'I')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(512,'S')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(254,'U')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(500,'Q')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(308,'H')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(207,'Z')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(617,'B')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(359,'F')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(737,'E')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(119,'G')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(47,'A')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(588,'Q')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(283,'O')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(682,'D')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(773,'Y')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(659,'Q')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(241,'G')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(992,'W')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(808,'Y')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(649,'H')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(274,'J')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(542,'F')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(549,'Q')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(61,'E')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(515,'T')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(545,'X')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(954,'J')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(510,'G')==true) << std::endl;
try{std::cout<<"Line no " << 34 <<  " " <<(tree.pop(500)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 35 <<  " " <<tree.ceilingEntry(773) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 38 <<  " " <<tree.get(274) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 39 <<  " " <<(tree.update(923,'T')==true) << std::endl;
try{std::cout<<"Line no " << 40 <<  " " <<(tree.pop(283)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 41 <<  " " <<(tree.update(738,'G')==true) << std::endl;
std::cout<<"Line no " << 42 <<  " " <<(tree.update(215,'T')==true) << std::endl;
std::cout<<"Line no " << 43 <<  " " <<(tree.update(218,'L')==true) << std::endl;
std::cout<<"Line no " << 44 <<  " " <<(tree.update(666,'U')==true) << std::endl;
try{std::cout<<"Line no " << 45 <<  " " <<(tree.pop(545)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 46 <<  " " <<(tree.update(792,'G')==true) << std::endl;
std::cout<<"Line no " << 47 <<  " " <<(tree.update(236,'P')==true) << std::endl;
try{std::cout<<"Line no " << 48 <<  " " <<(tree.pop(758)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 50 << " "; print_char_vector(tree.subMap(218,682));std::cout << std::endl;
try{std::cout<<"Line no " << 51 <<  " " <<tree.floorEntry(254) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 52 <<  " " <<(tree.update(566,'O')==true) << std::endl;
std::cout<<"Line no " << 53 <<  " " <<(tree.update(638,'Z')==true) << std::endl;
std::cout<<"Line no " << 54 <<  " " <<(tree.update(974,'I')==false) << std::endl;
try{std::cout<<"Line no " << 55 <<  " " <<(tree.pop(705)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<(tree.pop(515)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 57 <<  " " <<(tree.update(434,'I')==true) << std::endl;
try{std::cout<<"Line no " << 58 <<  " " <<(tree.pop(61)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<tree.ceilingEntry(566) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 61 <<  " " <<(tree.update(943,'R')==true) << std::endl;
std::cout<<"Line no " << 62 << " "; print_char_vector(tree.subMap(80,923));std::cout << std::endl;
try{std::cout<<"Line no " << 63 <<  " " <<(tree.pop(649)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<(tree.pop(923)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<tree.floorEntry(215) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<(tree.pop(792)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 69 <<  " " <<(tree.pop(359)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 70 <<  " " <<(tree.pop(943)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<(tree.pop(808)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 72 <<  " " <<(tree.update(402,'B')==true) << std::endl;
try{std::cout<<"Line no " << 73 <<  " " <<(tree.pop(659)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<(tree.pop(549)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 75 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 76 <<  " " <<(tree.update(576,'E')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<(tree.pop(218)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 80 <<  " " <<(tree.update(981,'O')==true) << std::endl;
try{std::cout<<"Line no " << 81 <<  " " <<(tree.pop(517)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(236)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 83 <<  " " <<(tree.update(633,'T')==true) << std::endl;
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(738)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(241)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<tree.get(638) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<tree.get(434) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<(tree.pop(512)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 90 <<  " " <<(tree.update(494,'R')==false) << std::endl;
try{std::cout<<"Line no " << 91 <<  " " <<(tree.pop(274)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 92 << " "; print_char_vector(tree.subMap(510,666));std::cout << std::endl;
try{std::cout<<"Line no " << 93 <<  " " <<(tree.pop(542)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 94 << " "; print_char_vector(tree.subMap(566,576));std::cout << std::endl;
std::cout<<"Line no " << 95 <<  " " <<(tree.update(410,'P')==true) << std::endl;
try{std::cout<<"Line no " << 96 <<  " " <<tree.ceilingEntry(119) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 97 <<  " " <<(tree.update(941,'N')==true) << std::endl;
try{std::cout<<"Line no " << 98 <<  " " <<(tree.pop(682)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<(tree.pop(588)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 100 <<  " " <<(tree.update(791,'U')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<(tree.pop(410)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 103 <<  " " <<(tree.update(673,'I')==true) << std::endl;
try{std::cout<<"Line no " << 104 <<  " " <<tree.ceilingEntry(576) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<tree.ceilingEntry(215) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 106 <<  " " <<(tree.update(589,'L')==true) << std::endl;
std::cout<<"Line no " << 107 << " "; print_char_vector(tree.subMap(638,773));std::cout << std::endl;
try{std::cout<<"Line no " << 108 <<  " " <<(tree.pop(207)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 109 <<  " " <<(tree.update(472,'T')==true) << std::endl;
std::cout<<"Line no " << 110 <<  " " <<(tree.update(991,'F')==true) << std::endl;
std::cout<<"Line no " << 111 <<  " " <<(tree.update(350,'X')==true) << std::endl;
std::cout<<"Line no " << 112 << " "; print_char_vector(tree.subMap(617,773));std::cout << std::endl;
try{std::cout<<"Line no " << 113 <<  " " <<(tree.pop(638)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 114 <<  " " <<(tree.update(581,'D')==true) << std::endl;
try{std::cout<<"Line no " << 115 <<  " " <<(tree.pop(673)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<tree.ceilingEntry(941) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 117 <<  " " <<(tree.update(476,'C')==true) << std::endl;
std::cout<<"Line no " << 118 <<  " " <<(tree.update(499,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 119 <<  " " <<tree.ceilingEntry(350) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 120 <<  " " <<(tree.update(331,'N')==true) << std::endl;
try{std::cout<<"Line no " << 121 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 124 <<  " " <<(tree.pop(254)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 125 <<  " " <<tree.ceilingEntry(350) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 126 << " "; print_char_vector(tree.subMap(472,791));std::cout << std::endl;
try{std::cout<<"Line no " << 127 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<(tree.pop(773)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(617)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 131 <<  " " <<(tree.update(26,'L')==true) << std::endl;
try{std::cout<<"Line no " << 132 <<  " " <<(tree.pop(350)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
