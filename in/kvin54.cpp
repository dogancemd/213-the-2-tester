#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(710,'A')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(18,'Y')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(782,'U')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(491,'G')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(747,'W')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(896,'C')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(150,'I')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(243,'D')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(536,'F')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(566,'P')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(16,'I')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(39,'I')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(350,'I')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(584,'E')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(990,'I')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(789,'Z')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(677,'H')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(328,'O')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(193,'P')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(299,'P')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(412,'A')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(823,'U')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(712,'X')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(813,'B')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(22,'N')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(371,'P')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(383,'W')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(957,'Z')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(727,'R')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(78,'J')==true) << std::endl;
std::cout<<"Line no " << 35 <<  " " <<(tree.update(244,'C')==true) << std::endl;
std::cout<<"Line no " << 36 <<  " " <<(tree.update(511,'X')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 38 <<  " " <<(tree.update(91,'T')==false) << std::endl;
try{std::cout<<"Line no " << 39 <<  " " <<(tree.pop(710)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<(tree.pop(18)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 42 << " "; print_char_vector(tree.subMap(193,712));std::cout << std::endl;
try{std::cout<<"Line no " << 43 <<  " " <<(tree.pop(536)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<tree.ceilingEntry(350) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<tree.floorEntry(383) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<tree.get(22) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<tree.get(243) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<tree.ceilingEntry(823) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<(tree.pop(412)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<tree.get(383) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<(tree.pop(371)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.floorEntry(244) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 58 <<  " " <<(tree.update(305,'Z')==true) << std::endl;
std::cout<<"Line no " << 59 << " "; print_char_vector(tree.subMap(299,727));std::cout << std::endl;
std::cout<<"Line no " << 60 <<  " " <<(tree.update(721,'H')==true) << std::endl;
std::cout<<"Line no " << 61 << " "; print_char_vector(tree.subMap(383,511));std::cout << std::endl;
try{std::cout<<"Line no " << 62 <<  " " <<tree.ceilingEntry(491) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<tree.floorEntry(727) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 66 << " "; print_char_vector(tree.subMap(150,244));std::cout << std::endl;
std::cout<<"Line no " << 67 <<  " " <<(tree.update(99,'S')==true) << std::endl;
try{std::cout<<"Line no " << 68 <<  " " <<tree.get(823) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 69 <<  " " <<(tree.update(505,'G')==true) << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<tree.ceilingEntry(243) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 72 <<  " " <<(tree.pop(813)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<(tree.pop(747)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 75 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 76 <<  " " <<tree.get(712) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 77 <<  " " <<(tree.update(542,'X')==true) << std::endl;
std::cout<<"Line no " << 78 <<  " " <<(tree.update(331,'S')==true) << std::endl;
try{std::cout<<"Line no " << 79 <<  " " <<(tree.pop(677)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 80 <<  " " <<(tree.update(233,'M')==true) << std::endl;
std::cout<<"Line no " << 81 << " "; print_char_vector(tree.subMap(150,305));std::cout << std::endl;
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(425)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(712)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<tree.ceilingEntry(505) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(99)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 87 <<  " " <<(tree.update(518,'D')==true) << std::endl;
try{std::cout<<"Line no " << 88 <<  " " <<(tree.pop(305)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 89 <<  " " <<(tree.update(224,'L')==true) << std::endl;
try{std::cout<<"Line no " << 90 <<  " " <<tree.ceilingEntry(243) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<(tree.pop(97)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 94 <<  " " <<(tree.pop(505)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 95 <<  " " <<(tree.update(548,'H')==true) << std::endl;
try{std::cout<<"Line no " << 96 <<  " " <<tree.get(727) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<(tree.pop(244)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 98 <<  " " <<(tree.update(92,'P')==true) << std::endl;
try{std::cout<<"Line no " << 99 <<  " " <<tree.floorEntry(78) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<(tree.pop(328)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 102 <<  " " <<(tree.update(2,'V')==true) << std::endl;
try{std::cout<<"Line no " << 103 <<  " " <<(tree.pop(92)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 104 <<  " " <<(tree.update(778,'K')==true) << std::endl;
std::cout<<"Line no " << 105 << " "; print_char_vector(tree.subMap(243,782));std::cout << std::endl;
std::cout<<"Line no " << 106 <<  " " <<(tree.update(360,'W')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<(tree.pop(331)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<(tree.pop(779)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 110 <<  " " <<(tree.pop(542)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 111 <<  " " <<(tree.update(484,'J')==true) << std::endl;
try{std::cout<<"Line no " << 112 <<  " " <<(tree.pop(360)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 115 <<  " " <<(tree.update(666,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 116 <<  " " <<(tree.pop(721)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 117 << " "; print_char_vector(tree.subMap(566,778));std::cout << std::endl;
std::cout<<"Line no " << 118 << " "; print_char_vector(tree.subMap(548,727));std::cout << std::endl;
try{std::cout<<"Line no " << 119 <<  " " <<(tree.pop(243)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<tree.get(78) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 121 <<  " " <<(tree.update(313,'J')==true) << std::endl;
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(233)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 << " "; print_char_vector(tree.subMap(78,511));std::cout << std::endl;
std::cout<<"Line no " << 124 <<  " " <<(tree.update(795,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 125 <<  " " <<tree.ceilingEntry(224) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<(tree.pop(795)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 128 <<  " " <<(tree.update(442,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(224)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 131 <<  " " <<(tree.update(294,'W')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.floorEntry(193) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
