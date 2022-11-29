#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(373,'J')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(662,'H')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(146,'V')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(545,'E')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(187,'L')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(197,'R')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(226,'H')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(562,'P')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(880,'Q')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(70,'X')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(87,'M')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(854,'B')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(791,'M')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(212,'E')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(680,'F')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(299,'A')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(635,'U')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(37,'Y')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(946,'G')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(889,'N')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(393,'G')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(449,'D')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(524,'O')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(790,'C')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(60,'C')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(808,'X')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(950,'E')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(193,'N')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(497,'M')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(6,'F')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<tree.ceilingEntry(187) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<(tree.pop(979)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 37 <<  " " <<(tree.update(749,'J')==true) << std::endl;
std::cout<<"Line no " << 38 <<  " " <<(tree.update(923,'R')==true) << std::endl;
try{std::cout<<"Line no " << 39 <<  " " <<tree.floorEntry(6) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<tree.get(373) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<(tree.pop(70)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<(tree.pop(6)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 43 <<  " " <<(tree.update(843,'U')==true) << std::endl;
std::cout<<"Line no " << 44 << " "; print_char_vector(tree.subMap(923,946));std::cout << std::endl;
try{std::cout<<"Line no " << 45 <<  " " <<(tree.pop(843)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<tree.floorEntry(562) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<(tree.pop(524)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<tree.ceilingEntry(187) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 51 <<  " " <<(tree.update(455,'M')==true) << std::endl;
std::cout<<"Line no " << 52 <<  " " <<(tree.update(32,'W')==true) << std::endl;
try{std::cout<<"Line no " << 53 <<  " " <<tree.get(791) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 54 <<  " " <<(tree.update(378,'K')==true) << std::endl;
try{std::cout<<"Line no " << 55 <<  " " <<tree.floorEntry(32) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.floorEntry(635) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<tree.get(32) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<tree.floorEntry(455) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<tree.ceilingEntry(635) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<(tree.pop(212)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<(tree.pop(197)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<(tree.pop(299)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<tree.ceilingEntry(32) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<tree.floorEntry(37) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(187)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 68 <<  " " <<(tree.update(137,'E')==true) << std::endl;
try{std::cout<<"Line no " << 69 <<  " " <<tree.floorEntry(880) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 70 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<tree.floorEntry(87) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 72 <<  " " <<(tree.update(718,'S')==true) << std::endl;
std::cout<<"Line no " << 73 <<  " " <<(tree.update(993,'G')==false) << std::endl;
try{std::cout<<"Line no " << 74 <<  " " <<(tree.pop(889)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 75 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 76 <<  " " <<(tree.update(773,'H')==true) << std::endl;
try{std::cout<<"Line no " << 77 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<tree.floorEntry(193) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<(tree.pop(226)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<(tree.pop(773)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(718)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<tree.ceilingEntry(790) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<tree.get(749) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<(tree.pop(373)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(60)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<(tree.pop(749)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 94 <<  " " <<(tree.update(38,'R')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 96 <<  " " <<(tree.pop(87)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<tree.get(635) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 99 <<  " " <<(tree.update(440,'M')==true) << std::endl;
std::cout<<"Line no " << 100 <<  " " <<(tree.update(306,'I')==true) << std::endl;
try{std::cout<<"Line no " << 101 <<  " " <<(tree.pop(635)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 102 <<  " " <<(tree.update(481,'P')==true) << std::endl;
try{std::cout<<"Line no " << 103 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 104 <<  " " <<(tree.update(456,'H')==false) << std::endl;
try{std::cout<<"Line no " << 105 <<  " " <<tree.get(545) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 106 <<  " " <<(tree.update(616,'M')==true) << std::endl;
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(497)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<tree.floorEntry(378) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 110 <<  " " <<(tree.pop(481)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<(tree.pop(393)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<tree.floorEntry(193) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<(tree.pop(378)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 115 <<  " " <<(tree.update(534,'C')==true) << std::endl;
std::cout<<"Line no " << 116 <<  " " <<(tree.update(778,'P')==true) << std::endl;
try{std::cout<<"Line no " << 117 <<  " " <<tree.ceilingEntry(545) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 119 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 120 << " "; print_char_vector(tree.subMap(137,440));std::cout << std::endl;
std::cout<<"Line no " << 121 <<  " " <<(tree.update(696,'N')==true) << std::endl;
std::cout<<"Line no " << 122 <<  " " <<(tree.update(871,'P')==true) << std::endl;
std::cout<<"Line no " << 123 <<  " " <<(tree.update(359,'C')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 125 <<  " " <<(tree.update(22,'T')==false) << std::endl;
try{std::cout<<"Line no " << 126 <<  " " <<(tree.pop(455)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<(tree.pop(534)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<tree.floorEntry(696) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(146)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 131 <<  " " <<(tree.update(774,'F')==true) << std::endl;
try{std::cout<<"Line no " << 132 <<  " " <<(tree.pop(778)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<tree.floorEntry(808) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.get(545) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
