#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(834,'D')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(7,'U')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(632,'T')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(975,'L')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(926,'R')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(214,'S')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(261,'Z')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(799,'V')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(673,'V')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(337,'J')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(767,'R')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(107,'J')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(937,'N')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(298,'B')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(140,'Z')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(598,'H')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(695,'A')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(16,'T')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(113,'M')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(283,'R')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(824,'V')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(888,'O')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(685,'G')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(657,'T')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(39,'X')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(714,'S')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(524,'I')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(691,'F')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(26,'R')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(45,'M')==true) << std::endl;
std::cout<<"Line no " << 35 <<  " " <<(tree.update(163,'D')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<(tree.pop(16)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 38 <<  " " <<(tree.pop(39)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 39 <<  " " <<(tree.update(503,'P')==true) << std::endl;
std::cout<<"Line no " << 40 <<  " " <<(tree.update(825,'K')==true) << std::endl;
std::cout<<"Line no " << 41 << " "; print_char_vector(tree.subMap(673,824));std::cout << std::endl;
try{std::cout<<"Line no " << 42 <<  " " <<(tree.pop(337)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<(tree.pop(214)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<tree.floorEntry(825) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<(tree.pop(695)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<(tree.pop(26)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<(tree.pop(657)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 51 <<  " " <<(tree.update(132,'B')==true) << std::endl;
try{std::cout<<"Line no " << 52 <<  " " <<tree.ceilingEntry(298) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 53 <<  " " <<(tree.update(433,'Y')==true) << std::endl;
std::cout<<"Line no " << 54 <<  " " <<(tree.update(788,'E')==true) << std::endl;
try{std::cout<<"Line no " << 55 <<  " " <<tree.ceilingEntry(788) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 56 <<  " " <<(tree.update(75,'D')==true) << std::endl;
try{std::cout<<"Line no " << 57 <<  " " <<(tree.pop(673)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(714)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<tree.floorEntry(163) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<(tree.pop(799)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 62 << " "; print_char_vector(tree.subMap(598,788));std::cout << std::endl;
try{std::cout<<"Line no " << 63 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 64 << " "; print_char_vector(tree.subMap(45,834));std::cout << std::endl;
try{std::cout<<"Line no " << 65 <<  " " <<(tree.pop(163)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(283)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 69 <<  " " <<tree.ceilingEntry(524) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 70 <<  " " <<(tree.pop(691)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 71 <<  " " <<(tree.update(689,'S')==true) << std::endl;
try{std::cout<<"Line no " << 72 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<tree.get(767) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 75 <<  " " <<(tree.pop(824)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 76 <<  " " <<(tree.pop(46)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 78 <<  " " <<(tree.update(642,'Y')==true) << std::endl;
std::cout<<"Line no " << 79 <<  " " <<(tree.update(58,'T')==true) << std::endl;
try{std::cout<<"Line no " << 80 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 81 << " "; print_char_vector(tree.subMap(132,261));std::cout << std::endl;
try{std::cout<<"Line no " << 82 <<  " " <<tree.get(298) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<(tree.pop(685)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 84 <<  " " <<(tree.update(234,'H')==true) << std::endl;
std::cout<<"Line no " << 85 << " "; print_char_vector(tree.subMap(140,140));std::cout << std::endl;
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(642)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 87 <<  " " <<(tree.update(429,'T')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 91 <<  " " <<(tree.update(691,'T')==true) << std::endl;
try{std::cout<<"Line no " << 92 <<  " " <<(tree.pop(788)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<(tree.pop(691)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 94 << " "; print_char_vector(tree.subMap(58,113));std::cout << std::endl;
try{std::cout<<"Line no " << 95 <<  " " <<(tree.pop(825)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 96 <<  " " <<(tree.update(665,'K')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 99 << " "; print_char_vector(tree.subMap(524,524));std::cout << std::endl;
try{std::cout<<"Line no " << 100 <<  " " <<(tree.pop(261)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<(tree.pop(665)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 102 <<  " " <<(tree.update(818,'X')==true) << std::endl;
std::cout<<"Line no " << 103 << " "; print_char_vector(tree.subMap(132,429));std::cout << std::endl;
try{std::cout<<"Line no " << 104 <<  " " <<(tree.pop(113)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<(tree.pop(132)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<(tree.pop(140)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(598)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<tree.floorEntry(689) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<tree.get(298) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 110 <<  " " <<(tree.pop(429)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<(tree.pop(503)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<tree.floorEntry(524) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<(tree.pop(107)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<(tree.pop(528)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<tree.get(767) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 119 <<  " " <<tree.ceilingEntry(767) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 120 << " "; print_char_vector(tree.subMap(298,767));std::cout << std::endl;
try{std::cout<<"Line no " << 121 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<(tree.pop(298)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 124 <<  " " <<(tree.update(533,'D')==false) << std::endl;
std::cout<<"Line no " << 125 <<  " " <<(tree.update(9,'K')==true) << std::endl;
try{std::cout<<"Line no " << 126 <<  " " <<(tree.pop(433)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 127 <<  " " <<(tree.update(707,'N')==true) << std::endl;
try{std::cout<<"Line no " << 128 <<  " " <<tree.floorEntry(524) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(632)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<(tree.pop(234)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 131 <<  " " <<(tree.update(132,'H')==true) << std::endl;
std::cout<<"Line no " << 132 <<  " " <<(tree.update(504,'A')==true) << std::endl;
try{std::cout<<"Line no " << 133 <<  " " <<tree.get(689) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 134 <<  " " <<(tree.update(501,'N')==true) << std::endl;
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
