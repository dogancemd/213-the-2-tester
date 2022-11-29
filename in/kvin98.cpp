#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(939,'W')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(15,'A')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(483,'J')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(901,'G')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(675,'W')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(627,'Z')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(664,'E')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(516,'F')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(969,'L')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(678,'S')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(442,'M')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(145,'Q')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(107,'Q')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(80,'U')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(657,'Z')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(84,'Y')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(150,'N')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(775,'M')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(791,'M')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(955,'G')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(244,'Q')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(946,'A')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(376,'L')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(476,'Y')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(201,'H')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(830,'B')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(229,'P')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(43,'B')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(919,'S')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(233,'F')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<(tree.pop(107)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<tree.floorEntry(476) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<(tree.pop(376)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 38 <<  " " <<tree.get(901) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 39 <<  " " <<(tree.update(385,'N')==false) << std::endl;
std::cout<<"Line no " << 40 <<  " " <<(tree.update(646,'Z')==true) << std::endl;
std::cout<<"Line no " << 41 <<  " " <<(tree.update(961,'J')==true) << std::endl;
std::cout<<"Line no " << 42 <<  " " <<(tree.update(45,'J')==true) << std::endl;
std::cout<<"Line no " << 43 <<  " " <<(tree.update(672,'B')==true) << std::endl;
try{std::cout<<"Line no " << 44 <<  " " <<tree.get(516) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 46 <<  " " <<(tree.update(293,'R')==true) << std::endl;
std::cout<<"Line no " << 47 <<  " " <<(tree.update(756,'A')==true) << std::endl;
std::cout<<"Line no " << 48 <<  " " <<(tree.update(429,'M')==true) << std::endl;
try{std::cout<<"Line no " << 49 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 50 <<  " " <<(tree.update(234,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 51 <<  " " <<tree.floorEntry(201) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 52 <<  " " <<(tree.update(995,'O')==true) << std::endl;
try{std::cout<<"Line no " << 53 <<  " " <<tree.floorEntry(229) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<(tree.pop(756)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<(tree.pop(775)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 59 <<  " " <<(tree.update(405,'X')==false) << std::endl;
try{std::cout<<"Line no " << 60 <<  " " <<tree.floorEntry(145) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 61 <<  " " <<(tree.update(810,'S')==true) << std::endl;
try{std::cout<<"Line no " << 62 <<  " " <<tree.floorEntry(646) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<(tree.pop(946)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<(tree.pop(791)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 66 << " "; print_char_vector(tree.subMap(442,476));std::cout << std::endl;
std::cout<<"Line no " << 67 <<  " " <<(tree.update(964,'B')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 69 <<  " " <<(tree.update(312,'U')==true) << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<(tree.pop(293)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<(tree.pop(810)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 72 <<  " " <<(tree.update(197,'L')==true) << std::endl;
std::cout<<"Line no " << 73 <<  " " <<(tree.update(176,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 74 <<  " " <<tree.ceilingEntry(476) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 <<  " " <<(tree.update(57,'A')==true) << std::endl;
std::cout<<"Line no " << 76 << " "; print_char_vector(tree.subMap(312,516));std::cout << std::endl;
std::cout<<"Line no " << 77 <<  " " <<(tree.update(701,'G')==true) << std::endl;
try{std::cout<<"Line no " << 78 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 79 <<  " " <<(tree.update(167,'T')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<(tree.pop(167)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 82 <<  " " <<(tree.update(38,'K')==true) << std::endl;
try{std::cout<<"Line no " << 83 <<  " " <<tree.floorEntry(233) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<(tree.pop(646)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<tree.get(150) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<(tree.pop(145)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 89 <<  " " <<(tree.update(792,'H')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<tree.floorEntry(476) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 93 <<  " " <<(tree.update(914,'M')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 95 << " "; print_char_vector(tree.subMap(516,914));std::cout << std::endl;
try{std::cout<<"Line no " << 96 <<  " " <<tree.floorEntry(792) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<tree.get(627) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 99 <<  " " <<(tree.update(336,'C')==true) << std::endl;
std::cout<<"Line no " << 100 <<  " " <<(tree.update(881,'U')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<tree.get(516) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 104 <<  " " <<(tree.update(894,'E')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<tree.floorEntry(919) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 << " "; print_char_vector(tree.subMap(84,244));std::cout << std::endl;
try{std::cout<<"Line no " << 109 <<  " " <<tree.ceilingEntry(664) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<(tree.pop(516)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<(tree.pop(150)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<tree.floorEntry(197) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 115 << " "; print_char_vector(tree.subMap(701,792));std::cout << std::endl;
try{std::cout<<"Line no " << 116 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<(tree.pop(442)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<(tree.pop(901)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 119 <<  " " <<tree.ceilingEntry(939) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<(tree.pop(919)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<(tree.pop(657)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 124 <<  " " <<(tree.pop(779)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 125 <<  " " <<(tree.pop(233)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 126 <<  " " <<(tree.update(7,'V')==true) << std::endl;
std::cout<<"Line no " << 127 <<  " " <<(tree.update(341,'J')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 129 <<  " " <<(tree.update(530,'G')==true) << std::endl;
try{std::cout<<"Line no " << 130 <<  " " <<(tree.pop(678)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 131 <<  " " <<(tree.update(528,'O')==true) << std::endl;
try{std::cout<<"Line no " << 132 <<  " " <<(tree.pop(341)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<(tree.pop(528)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<(tree.pop(201)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
