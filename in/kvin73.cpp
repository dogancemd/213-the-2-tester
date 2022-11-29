#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(864,'T')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(901,'D')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(853,'M')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(240,'D')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(14,'V')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(92,'V')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(599,'O')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(978,'A')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(477,'F')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(133,'O')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(59,'Y')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(738,'P')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(827,'Y')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(587,'L')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(594,'H')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(941,'Z')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(631,'H')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(352,'L')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(939,'D')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(75,'O')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(608,'X')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(336,'N')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(106,'R')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(296,'B')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(796,'E')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(318,'L')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(980,'W')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(359,'R')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(646,'O')==true) << std::endl;
try{std::cout<<"Line no " << 34 <<  " " <<tree.ceilingEntry(318) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 35 <<  " " <<tree.get(978) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<tree.get(133) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 37 <<  " " <<(tree.update(85,'Q')==true) << std::endl;
std::cout<<"Line no " << 38 << " "; print_char_vector(tree.subMap(92,359));std::cout << std::endl;
try{std::cout<<"Line no " << 39 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 40 <<  " " <<(tree.update(636,'L')==true) << std::endl;
std::cout<<"Line no " << 41 <<  " " <<(tree.update(579,'Z')==true) << std::endl;
std::cout<<"Line no " << 42 <<  " " <<(tree.update(419,'V')==true) << std::endl;
try{std::cout<<"Line no " << 43 <<  " " <<tree.ceilingEntry(608) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<(tree.pop(579)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<tree.get(978) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<(tree.pop(608)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<tree.get(296) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 49 << " "; print_char_vector(tree.subMap(853,864));std::cout << std::endl;
try{std::cout<<"Line no " << 50 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 52 <<  " " <<(tree.update(751,'T')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<(tree.pop(599)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 57 <<  " " <<(tree.update(824,'O')==true) << std::endl;
try{std::cout<<"Line no " << 58 <<  " " <<(tree.pop(75)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(732)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<(tree.pop(92)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 61 <<  " " <<(tree.update(456,'I')==true) << std::endl;
try{std::cout<<"Line no " << 62 <<  " " <<(tree.pop(93)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<tree.ceilingEntry(594) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 64 <<  " " <<(tree.update(224,'D')==true) << std::endl;
try{std::cout<<"Line no " << 65 <<  " " <<(tree.pop(59)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 66 <<  " " <<(tree.update(395,'W')==true) << std::endl;
try{std::cout<<"Line no " << 67 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 68 <<  " " <<(tree.update(184,'T')==true) << std::endl;
std::cout<<"Line no " << 69 <<  " " <<(tree.update(400,'F')==true) << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<(tree.pop(272)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 72 <<  " " <<(tree.pop(14)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 73 <<  " " <<(tree.update(518,'T')==true) << std::endl;
try{std::cout<<"Line no " << 74 <<  " " <<(tree.pop(824)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 <<  " " <<(tree.update(867,'Y')==true) << std::endl;
std::cout<<"Line no " << 76 <<  " " <<(tree.update(490,'V')==true) << std::endl;
try{std::cout<<"Line no " << 77 <<  " " <<tree.ceilingEntry(359) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 78 <<  " " <<(tree.update(464,'P')==true) << std::endl;
try{std::cout<<"Line no " << 79 <<  " " <<(tree.pop(352)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<(tree.pop(462)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<tree.get(751) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(594)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<tree.floorEntry(224) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 86 <<  " " <<(tree.update(118,'V')==true) << std::endl;
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(5)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<tree.floorEntry(939) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<(tree.pop(395)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<tree.floorEntry(456) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<tree.floorEntry(518) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<tree.ceilingEntry(133) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 93 <<  " " <<(tree.update(152,'J')==true) << std::endl;
try{std::cout<<"Line no " << 94 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 95 <<  " " <<(tree.update(854,'L')==true) << std::endl;
try{std::cout<<"Line no " << 96 <<  " " <<(tree.pop(118)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 97 <<  " " <<(tree.update(948,'E')==false) << std::endl;
std::cout<<"Line no " << 98 <<  " " <<(tree.update(122,'T')==false) << std::endl;
try{std::cout<<"Line no " << 99 <<  " " <<tree.get(796) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<tree.get(738) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<tree.ceilingEntry(646) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<(tree.pop(456)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<(tree.pop(646)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<(tree.pop(240)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 105 <<  " " <<(tree.update(282,'N')==true) << std::endl;
try{std::cout<<"Line no " << 106 <<  " " <<tree.floorEntry(854) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 107 << " "; print_char_vector(tree.subMap(751,867));std::cout << std::endl;
std::cout<<"Line no " << 108 <<  " " <<(tree.update(887,'L')==true) << std::endl;
try{std::cout<<"Line no " << 109 <<  " " <<tree.floorEntry(631) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 110 <<  " " <<(tree.update(254,'H')==true) << std::endl;
try{std::cout<<"Line no " << 111 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<(tree.pop(939)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 114 <<  " " <<(tree.update(563,'F')==true) << std::endl;
std::cout<<"Line no " << 115 <<  " " <<(tree.update(685,'C')==true) << std::endl;
std::cout<<"Line no " << 116 <<  " " <<(tree.update(557,'K')==true) << std::endl;
std::cout<<"Line no " << 117 <<  " " <<(tree.update(695,'X')==true) << std::endl;
std::cout<<"Line no " << 118 <<  " " <<(tree.update(767,'I')==true) << std::endl;
std::cout<<"Line no " << 119 << " "; print_char_vector(tree.subMap(400,901));std::cout << std::endl;
std::cout<<"Line no " << 120 << " "; print_char_vector(tree.subMap(152,587));std::cout << std::endl;
try{std::cout<<"Line no " << 121 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(751)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 <<  " " <<(tree.update(154,'Y')==false) << std::endl;
try{std::cout<<"Line no " << 124 <<  " " <<tree.ceilingEntry(685) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 125 <<  " " <<tree.get(631) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<(tree.pop(738)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(282)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<(tree.pop(867)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 131 <<  " " <<(tree.update(47,'V')==true) << std::endl;
try{std::cout<<"Line no " << 132 <<  " " <<(tree.pop(133)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<tree.ceilingEntry(854) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
