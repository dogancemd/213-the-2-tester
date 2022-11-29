#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(322,'E')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(192,'A')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(431,'U')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(52,'X')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(142,'H')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(60,'T')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(783,'Z')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(631,'B')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(331,'O')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(638,'X')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(197,'Q')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(259,'Y')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(605,'U')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(410,'T')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(790,'Q')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(745,'T')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(128,'V')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(302,'B')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(628,'M')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(704,'P')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(400,'T')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(270,'L')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(597,'M')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(585,'S')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(124,'R')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(650,'W')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(709,'G')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(46,'Z')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(29,'Z')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(604,'J')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<tree.ceilingEntry(400) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.ceilingEntry(790) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 38 <<  " " <<(tree.update(636,'Y')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<tree.ceilingEntry(52) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<(tree.pop(709)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<(tree.pop(604)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<tree.ceilingEntry(322) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<tree.floorEntry(745) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<(tree.pop(631)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 51 << " "; print_char_vector(tree.subMap(197,597));std::cout << std::endl;
try{std::cout<<"Line no " << 52 <<  " " <<(tree.pop(322)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 54 << " "; print_char_vector(tree.subMap(302,636));std::cout << std::endl;
std::cout<<"Line no " << 55 <<  " " <<(tree.update(6,'V')==true) << std::endl;
std::cout<<"Line no " << 56 <<  " " <<(tree.update(97,'Q')==false) << std::endl;
try{std::cout<<"Line no " << 57 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(192)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<(tree.pop(704)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 62 << " "; print_char_vector(tree.subMap(628,636));std::cout << std::endl;
try{std::cout<<"Line no " << 63 <<  " " <<(tree.pop(628)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 64 <<  " " <<(tree.update(567,'M')==true) << std::endl;
std::cout<<"Line no " << 65 <<  " " <<(tree.update(492,'F')==true) << std::endl;
try{std::cout<<"Line no " << 66 <<  " " <<tree.floorEntry(585) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(636)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 68 <<  " " <<(tree.update(982,'G')==true) << std::endl;
std::cout<<"Line no " << 69 <<  " " <<(tree.update(655,'W')==true) << std::endl;
std::cout<<"Line no " << 70 <<  " " <<(tree.update(972,'M')==true) << std::endl;
std::cout<<"Line no " << 71 <<  " " <<(tree.update(836,'M')==true) << std::endl;
try{std::cout<<"Line no " << 72 <<  " " <<(tree.pop(86)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<tree.floorEntry(982) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 74 <<  " " <<(tree.update(893,'Z')==true) << std::endl;
std::cout<<"Line no " << 75 <<  " " <<(tree.update(299,'H')==true) << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<(tree.pop(60)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<(tree.pop(46)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 78 <<  " " <<(tree.update(839,'J')==true) << std::endl;
try{std::cout<<"Line no " << 79 <<  " " <<(tree.pop(758)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<(tree.pop(416)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<(tree.pop(128)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 83 <<  " " <<(tree.update(128,'M')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<(tree.pop(567)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 87 <<  " " <<(tree.update(513,'D')==true) << std::endl;
try{std::cout<<"Line no " << 88 <<  " " <<(tree.pop(431)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 89 <<  " " <<(tree.update(691,'F')==true) << std::endl;
std::cout<<"Line no " << 90 <<  " " <<(tree.update(619,'T')==true) << std::endl;
std::cout<<"Line no " << 91 << " "; print_char_vector(tree.subMap(270,836));std::cout << std::endl;
try{std::cout<<"Line no " << 92 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 95 <<  " " <<(tree.pop(142)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 96 <<  " " <<(tree.pop(259)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<tree.get(270) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<(tree.pop(597)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<tree.ceilingEntry(331) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 103 <<  " " <<(tree.update(169,'Y')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<tree.floorEntry(619) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 106 <<  " " <<(tree.update(838,'T')==true) << std::endl;
try{std::cout<<"Line no " << 107 <<  " " <<tree.get(838) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<tree.floorEntry(650) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<(tree.pop(655)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 110 <<  " " <<(tree.update(223,'G')==true) << std::endl;
try{std::cout<<"Line no " << 111 <<  " " <<(tree.pop(492)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<(tree.pop(836)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<tree.get(331) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 116 << " "; print_char_vector(tree.subMap(197,410));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<tree.get(691) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 119 <<  " " <<tree.get(410) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 120 <<  " " <<(tree.update(341,'F')==true) << std::endl;
try{std::cout<<"Line no " << 121 <<  " " <<tree.get(513) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(513)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 124 <<  " " <<(tree.update(631,'D')==true) << std::endl;
try{std::cout<<"Line no " << 125 <<  " " <<tree.get(197) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 126 <<  " " <<(tree.update(54,'H')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<tree.floorEntry(650) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<(tree.pop(605)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<(tree.pop(400)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.get(299) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
