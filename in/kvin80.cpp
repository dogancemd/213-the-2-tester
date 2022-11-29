#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(835,'X')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(840,'J')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(327,'C')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(768,'B')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(138,'X')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(881,'D')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(810,'Q')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(62,'R')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(424,'V')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(995,'T')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(56,'I')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(682,'E')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(330,'B')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(872,'G')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(850,'R')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(862,'Z')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(97,'L')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(751,'P')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(724,'N')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(673,'Q')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(296,'D')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(859,'S')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(525,'W')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(576,'D')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(978,'T')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(717,'R')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(228,'X')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(819,'P')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(238,'B')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(377,'V')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<tree.ceilingEntry(995) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<(tree.pop(424)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 38 <<  " " <<(tree.pop(97)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 39 <<  " " <<(tree.pop(717)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<tree.floorEntry(810) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<(tree.pop(138)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<(tree.pop(682)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<(tree.pop(330)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 44 <<  " " <<(tree.update(646,'N')==true) << std::endl;
std::cout<<"Line no " << 45 <<  " " <<(tree.update(293,'R')==true) << std::endl;
std::cout<<"Line no " << 46 <<  " " <<(tree.update(451,'N')==true) << std::endl;
std::cout<<"Line no " << 47 <<  " " <<(tree.update(354,'I')==true) << std::endl;
std::cout<<"Line no " << 48 <<  " " <<(tree.update(653,'W')==true) << std::endl;
try{std::cout<<"Line no " << 49 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<tree.floorEntry(724) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 51 <<  " " <<(tree.update(913,'H')==true) << std::endl;
try{std::cout<<"Line no " << 52 <<  " " <<tree.ceilingEntry(872) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 53 <<  " " <<(tree.update(321,'O')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 55 <<  " " <<(tree.update(32,'U')==true) << std::endl;
std::cout<<"Line no " << 56 <<  " " <<(tree.update(16,'G')==false) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<(tree.pop(859)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(872)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 60 <<  " " <<(tree.update(395,'S')==true) << std::endl;
try{std::cout<<"Line no " << 61 <<  " " <<(tree.pop(79)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<(tree.pop(228)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<tree.ceilingEntry(238) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<tree.get(768) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 65 <<  " " <<(tree.update(892,'P')==true) << std::endl;
try{std::cout<<"Line no " << 66 <<  " " <<(tree.pop(724)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 68 <<  " " <<(tree.update(446,'I')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 70 <<  " " <<(tree.update(107,'V')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 73 << " "; print_char_vector(tree.subMap(354,892));std::cout << std::endl;
std::cout<<"Line no " << 74 <<  " " <<(tree.update(356,'T')==true) << std::endl;
try{std::cout<<"Line no " << 75 <<  " " <<(tree.pop(892)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<(tree.pop(881)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<tree.floorEntry(296) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<(tree.pop(451)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<(tree.pop(673)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 81 <<  " " <<(tree.update(440,'W')==true) << std::endl;
try{std::cout<<"Line no " << 82 <<  " " <<tree.get(653) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<(tree.pop(819)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 84 <<  " " <<(tree.update(955,'Y')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 86 <<  " " <<(tree.update(565,'A')==true) << std::endl;
std::cout<<"Line no " << 87 <<  " " <<(tree.update(812,'E')==true) << std::endl;
try{std::cout<<"Line no " << 88 <<  " " <<(tree.pop(768)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 89 <<  " " <<(tree.update(71,'C')==true) << std::endl;
std::cout<<"Line no " << 90 <<  " " <<(tree.update(560,'R')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<(tree.pop(653)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<tree.get(321) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 96 << " "; print_char_vector(tree.subMap(356,810));std::cout << std::endl;
try{std::cout<<"Line no " << 97 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 98 <<  " " <<(tree.update(49,'Y')==true) << std::endl;
std::cout<<"Line no " << 99 <<  " " <<(tree.update(996,'C')==true) << std::endl;
std::cout<<"Line no " << 100 <<  " " <<(tree.update(786,'T')==true) << std::endl;
std::cout<<"Line no " << 101 <<  " " <<(tree.update(929,'K')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<(tree.pop(525)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<(tree.pop(625)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 107 <<  " " <<(tree.update(326,'I')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 110 <<  " " <<(tree.update(410,'B')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 114 <<  " " <<(tree.update(705,'T')==true) << std::endl;
std::cout<<"Line no " << 115 <<  " " <<(tree.update(491,'R')==true) << std::endl;
std::cout<<"Line no " << 116 <<  " " <<(tree.update(154,'R')==true) << std::endl;
try{std::cout<<"Line no " << 117 <<  " " <<tree.ceilingEntry(565) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 119 <<  " " <<(tree.pop(862)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<tree.floorEntry(751) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<(tree.pop(410)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 124 <<  " " <<tree.get(565) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 126 <<  " " <<(tree.update(575,'L')==true) << std::endl;
try{std::cout<<"Line no " << 127 <<  " " <<(tree.pop(565)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 128 <<  " " <<(tree.update(245,'O')==true) << std::endl;
try{std::cout<<"Line no " << 129 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 130 <<  " " <<(tree.update(547,'S')==true) << std::endl;
try{std::cout<<"Line no " << 131 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 132 <<  " " <<(tree.update(940,'C')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
