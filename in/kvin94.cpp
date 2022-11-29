#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(623,'K')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(196,'J')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(573,'O')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(565,'H')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(144,'V')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(212,'R')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(893,'N')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(667,'J')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(716,'R')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(665,'L')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(827,'U')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(408,'G')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(609,'L')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(557,'A')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(320,'H')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(87,'H')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(582,'F')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(404,'S')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(548,'I')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(797,'J')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(840,'J')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(176,'T')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(414,'B')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(600,'U')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(532,'O')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(163,'X')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(350,'O')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(380,'W')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(714,'C')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(584,'F')==true) << std::endl;
std::cout<<"Line no " << 35 <<  " " <<(tree.update(814,'L')==true) << std::endl;
try{std::cout<<"Line no " << 36 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 37 <<  " " <<(tree.update(579,'G')==true) << std::endl;
std::cout<<"Line no " << 38 <<  " " <<(tree.update(980,'R')==true) << std::endl;
try{std::cout<<"Line no " << 39 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<tree.floorEntry(980) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 42 <<  " " <<(tree.update(373,'Z')==true) << std::endl;
std::cout<<"Line no " << 43 <<  " " <<(tree.update(461,'M')==true) << std::endl;
std::cout<<"Line no " << 44 <<  " " <<(tree.update(8,'Y')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<(tree.pop(623)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<(tree.pop(584)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 <<  " " <<(tree.update(551,'K')==true) << std::endl;
try{std::cout<<"Line no " << 49 <<  " " <<tree.floorEntry(532) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<tree.ceilingEntry(600) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<tree.get(582) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 54 <<  " " <<(tree.update(395,'C')==true) << std::endl;
std::cout<<"Line no " << 55 <<  " " <<(tree.update(853,'G')==true) << std::endl;
std::cout<<"Line no " << 56 <<  " " <<(tree.update(534,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 57 <<  " " <<tree.floorEntry(565) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 58 <<  " " <<(tree.update(843,'E')==true) << std::endl;
std::cout<<"Line no " << 59 <<  " " <<(tree.update(925,'O')==true) << std::endl;
try{std::cout<<"Line no " << 60 <<  " " <<(tree.pop(925)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 61 << " "; print_char_vector(tree.subMap(380,797));std::cout << std::endl;
std::cout<<"Line no " << 62 <<  " " <<(tree.update(781,'M')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<(tree.pop(414)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<tree.ceilingEntry(716) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<(tree.pop(320)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(814)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<tree.ceilingEntry(176) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 69 <<  " " <<(tree.update(758,'H')==true) << std::endl;
std::cout<<"Line no " << 70 <<  " " <<(tree.update(720,'I')==false) << std::endl;
try{std::cout<<"Line no " << 71 <<  " " <<(tree.pop(408)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 72 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<(tree.pop(665)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 << " "; print_char_vector(tree.subMap(758,840));std::cout << std::endl;
std::cout<<"Line no " << 76 <<  " " <<(tree.update(884,'Y')==true) << std::endl;
std::cout<<"Line no " << 77 <<  " " <<(tree.update(10,'F')==true) << std::endl;
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(573)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<tree.ceilingEntry(557) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 80 <<  " " <<(tree.update(218,'M')==true) << std::endl;
std::cout<<"Line no " << 81 <<  " " <<(tree.update(67,'U')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(893)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<(tree.pop(758)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(212)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(404)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 88 << " "; print_char_vector(tree.subMap(350,827));std::cout << std::endl;
std::cout<<"Line no " << 89 << " "; print_char_vector(tree.subMap(582,609));std::cout << std::endl;
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(350)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 91 <<  " " <<(tree.update(350,'S')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<(tree.pop(461)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 95 <<  " " <<(tree.update(611,'H')==false) << std::endl;
std::cout<<"Line no " << 96 <<  " " <<(tree.update(9,'G')==true) << std::endl;
try{std::cout<<"Line no " << 97 <<  " " <<(tree.pop(534)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 98 <<  " " <<(tree.update(583,'V')==false) << std::endl;
try{std::cout<<"Line no " << 99 <<  " " <<tree.get(350) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 101 <<  " " <<(tree.update(916,'A')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 103 << " "; print_char_vector(tree.subMap(373,714));std::cout << std::endl;
try{std::cout<<"Line no " << 104 <<  " " <<(tree.pop(548)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 106 << " "; print_char_vector(tree.subMap(600,827));std::cout << std::endl;
try{std::cout<<"Line no " << 107 <<  " " <<tree.ceilingEntry(797) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 <<  " " <<(tree.update(173,'K')==true) << std::endl;
try{std::cout<<"Line no " << 109 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 110 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<(tree.pop(173)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<(tree.pop(373)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<(tree.pop(843)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<(tree.pop(350)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 117 <<  " " <<(tree.update(102,'N')==true) << std::endl;
std::cout<<"Line no " << 118 <<  " " <<(tree.update(370,'R')==true) << std::endl;
try{std::cout<<"Line no " << 119 <<  " " <<tree.floorEntry(551) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 120 << " "; print_char_vector(tree.subMap(667,667));std::cout << std::endl;
try{std::cout<<"Line no " << 121 <<  " " <<tree.get(380) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<(tree.pop(840)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 124 <<  " " <<tree.floorEntry(176) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<tree.floorEntry(582) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 127 <<  " " <<(tree.update(689,'U')==true) << std::endl;
std::cout<<"Line no " << 128 <<  " " <<(tree.update(304,'A')==true) << std::endl;
std::cout<<"Line no " << 129 <<  " " <<(tree.update(233,'I')==true) << std::endl;
std::cout<<"Line no " << 130 <<  " " <<(tree.update(520,'U')==true) << std::endl;
try{std::cout<<"Line no " << 131 <<  " " <<(tree.pop(557)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
