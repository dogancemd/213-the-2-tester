#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(961,'R')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(624,'W')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(818,'L')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(126,'G')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(283,'C')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(457,'Z')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(252,'R')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(663,'T')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(334,'C')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(530,'M')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(867,'L')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(681,'E')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(325,'P')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(196,'N')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(429,'J')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(308,'A')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(72,'R')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(647,'U')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(580,'Y')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(674,'Y')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(732,'N')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(842,'R')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(553,'R')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(311,'I')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(678,'I')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(800,'F')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(820,'J')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(147,'L')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(649,'M')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(529,'E')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<(tree.pop(647)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<tree.floorEntry(457) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.floorEntry(334) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 38 <<  " " <<(tree.update(326,'P')==true) << std::endl;
std::cout<<"Line no " << 39 <<  " " <<(tree.update(482,'F')==true) << std::endl;
try{std::cout<<"Line no " << 40 <<  " " <<(tree.pop(126)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<(tree.pop(308)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 44 << " "; print_char_vector(tree.subMap(196,429));std::cout << std::endl;
std::cout<<"Line no " << 45 <<  " " <<(tree.update(985,'O')==true) << std::endl;
std::cout<<"Line no " << 46 << " "; print_char_vector(tree.subMap(553,800));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<(tree.pop(649)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<(tree.pop(326)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<tree.ceilingEntry(681) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(624)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 52 <<  " " <<(tree.update(863,'C')==true) << std::endl;
try{std::cout<<"Line no " << 53 <<  " " <<(tree.pop(472)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 54 <<  " " <<(tree.update(46,'N')==true) << std::endl;
try{std::cout<<"Line no " << 55 <<  " " <<(tree.pop(283)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<(tree.pop(144)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<tree.get(867) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 60 <<  " " <<(tree.update(781,'N')==true) << std::endl;
try{std::cout<<"Line no " << 61 <<  " " <<(tree.pop(368)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<tree.floorEntry(457) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<(tree.pop(867)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<(tree.pop(553)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<tree.ceilingEntry(529) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 67 <<  " " <<(tree.update(164,'V')==true) << std::endl;
try{std::cout<<"Line no " << 68 <<  " " <<tree.floorEntry(674) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 69 << " "; print_char_vector(tree.subMap(678,732));std::cout << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<tree.ceilingEntry(732) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<tree.ceilingEntry(457) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 72 <<  " " <<(tree.pop(530)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 73 <<  " " <<(tree.update(891,'T')==true) << std::endl;
try{std::cout<<"Line no " << 74 <<  " " <<tree.get(663) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 <<  " " <<(tree.update(153,'Z')==true) << std::endl;
std::cout<<"Line no " << 76 <<  " " <<(tree.update(51,'E')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(580)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 79 <<  " " <<(tree.update(821,'C')==true) << std::endl;
try{std::cout<<"Line no " << 80 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<(tree.pop(674)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<tree.ceilingEntry(325) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 84 <<  " " <<(tree.update(898,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 85 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(457)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(663)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 88 <<  " " <<(tree.update(772,'B')==true) << std::endl;
try{std::cout<<"Line no " << 89 <<  " " <<(tree.pop(482)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(334)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 91 <<  " " <<(tree.update(444,'P')==true) << std::endl;
std::cout<<"Line no " << 92 <<  " " <<(tree.update(366,'A')==true) << std::endl;
try{std::cout<<"Line no " << 93 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 94 <<  " " <<(tree.pop(818)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 95 <<  " " <<(tree.update(261,'U')==true) << std::endl;
std::cout<<"Line no " << 96 <<  " " <<(tree.update(505,'C')==true) << std::endl;
try{std::cout<<"Line no " << 97 <<  " " <<(tree.pop(164)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<tree.ceilingEntry(891) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 101 <<  " " <<(tree.update(209,'K')==true) << std::endl;
std::cout<<"Line no " << 102 <<  " " <<(tree.update(211,'L')==true) << std::endl;
try{std::cout<<"Line no " << 103 <<  " " <<(tree.pop(261)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 104 <<  " " <<(tree.update(782,'O')==true) << std::endl;
std::cout<<"Line no " << 105 <<  " " <<(tree.update(687,'C')==true) << std::endl;
std::cout<<"Line no " << 106 << " "; print_char_vector(tree.subMap(429,898));std::cout << std::endl;
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(444)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<(tree.pop(366)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 110 <<  " " <<tree.floorEntry(325) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<tree.floorEntry(678) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<(tree.pop(915)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<tree.get(863) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<(tree.pop(558)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 116 <<  " " <<(tree.update(994,'B')==true) << std::endl;
try{std::cout<<"Line no " << 117 <<  " " <<(tree.pop(994)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 119 <<  " " <<(tree.update(925,'I')==true) << std::endl;
try{std::cout<<"Line no " << 120 <<  " " <<(tree.pop(898)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 121 <<  " " <<(tree.update(997,'R')==true) << std::endl;
std::cout<<"Line no " << 122 << " "; print_char_vector(tree.subMap(732,891));std::cout << std::endl;
std::cout<<"Line no " << 123 <<  " " <<(tree.update(172,'J')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 127 << " "; print_char_vector(tree.subMap(172,325));std::cout << std::endl;
try{std::cout<<"Line no " << 128 <<  " " <<(tree.pop(681)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<tree.floorEntry(800) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 130 <<  " " <<(tree.update(315,'R')==true) << std::endl;
try{std::cout<<"Line no " << 131 <<  " " <<(tree.pop(505)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 132 <<  " " <<(tree.update(283,'E')==true) << std::endl;
try{std::cout<<"Line no " << 133 <<  " " <<(tree.pop(891)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
