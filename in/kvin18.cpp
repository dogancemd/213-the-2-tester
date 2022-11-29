#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(194,'Q')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(167,'X')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(963,'E')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(562,'F')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(675,'K')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(138,'T')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(98,'D')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(396,'E')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(351,'R')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(515,'V')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(623,'U')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(263,'O')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(769,'M')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(440,'K')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(60,'G')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(72,'D')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(348,'M')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(836,'L')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(669,'I')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(17,'P')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(635,'P')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(30,'W')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(748,'B')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(561,'G')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(52,'V')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(984,'L')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(588,'B')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(682,'Z')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(605,'J')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(736,'T')==true) << std::endl;
std::cout<<"Line no " << 35 <<  " " <<(tree.update(919,'K')==true) << std::endl;
try{std::cout<<"Line no " << 36 <<  " " <<tree.ceilingEntry(769) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.ceilingEntry(98) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 38 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 39 <<  " " <<tree.floorEntry(17) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 40 <<  " " <<(tree.update(656,'M')==false) << std::endl;
std::cout<<"Line no " << 41 <<  " " <<(tree.update(488,'W')==true) << std::endl;
try{std::cout<<"Line no " << 42 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 43 <<  " " <<(tree.update(842,'M')==true) << std::endl;
try{std::cout<<"Line no " << 44 <<  " " <<tree.ceilingEntry(561) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 45 <<  " " <<(tree.update(398,'E')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 47 <<  " " <<(tree.update(814,'S')==true) << std::endl;
try{std::cout<<"Line no " << 48 <<  " " <<tree.get(842) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<(tree.pop(98)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 50 <<  " " <<(tree.update(55,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(963)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 53 <<  " " <<(tree.update(402,'S')==true) << std::endl;
try{std::cout<<"Line no " << 54 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 55 << " "; print_char_vector(tree.subMap(17,52));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 59 <<  " " <<(tree.update(339,'B')==true) << std::endl;
try{std::cout<<"Line no " << 60 <<  " " <<(tree.pop(561)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<tree.ceilingEntry(488) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<(tree.pop(351)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<(tree.pop(488)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 64 << " "; print_char_vector(tree.subMap(60,814));std::cout << std::endl;
std::cout<<"Line no " << 65 << " "; print_char_vector(tree.subMap(72,138));std::cout << std::endl;
std::cout<<"Line no " << 66 <<  " " <<(tree.update(73,'A')==true) << std::endl;
std::cout<<"Line no " << 67 <<  " " <<(tree.update(973,'C')==true) << std::endl;
std::cout<<"Line no " << 68 << " "; print_char_vector(tree.subMap(167,836));std::cout << std::endl;
try{std::cout<<"Line no " << 69 <<  " " <<(tree.pop(398)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 70 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<(tree.pop(623)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<(tree.pop(200)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 <<  " " <<(tree.update(106,'J')==true) << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<tree.floorEntry(194) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 77 <<  " " <<(tree.update(220,'E')==true) << std::endl;
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(418)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<tree.get(263) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 82 <<  " " <<(tree.update(169,'R')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(440)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 85 <<  " " <<(tree.update(265,'T')==true) << std::endl;
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(348)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<(tree.pop(769)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 90 <<  " " <<(tree.update(120,'K')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<tree.get(167) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 94 << " "; print_char_vector(tree.subMap(167,220));std::cout << std::endl;
try{std::cout<<"Line no " << 95 <<  " " <<(tree.pop(323)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 96 <<  " " <<(tree.update(60,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 97 <<  " " <<tree.get(635) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<(tree.pop(562)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 101 <<  " " <<(tree.update(970,'U')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<(tree.pop(748)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<(tree.pop(637)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<tree.floorEntry(194) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(263)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<tree.floorEntry(120) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 110 << " "; print_char_vector(tree.subMap(265,675));std::cout << std::endl;
try{std::cout<<"Line no " << 111 <<  " " <<(tree.pop(669)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 <<  " " <<(tree.update(995,'C')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<(tree.pop(842)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 116 <<  " " <<(tree.update(792,'V')==true) << std::endl;
try{std::cout<<"Line no " << 117 <<  " " <<(tree.pop(167)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 118 <<  " " <<(tree.update(74,'B')==true) << std::endl;
try{std::cout<<"Line no " << 119 <<  " " <<(tree.pop(635)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 120 <<  " " <<(tree.update(440,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 121 <<  " " <<(tree.pop(736)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(814)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 <<  " " <<(tree.update(578,'T')==true) << std::endl;
std::cout<<"Line no " << 124 <<  " " <<(tree.update(611,'U')==false) << std::endl;
try{std::cout<<"Line no " << 125 <<  " " <<(tree.pop(933)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<(tree.pop(138)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<(tree.pop(440)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<(tree.pop(682)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 129 <<  " " <<(tree.update(999,'J')==true) << std::endl;
try{std::cout<<"Line no " << 130 <<  " " <<tree.floorEntry(396) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 131 <<  " " <<(tree.update(668,'O')==true) << std::endl;
std::cout<<"Line no " << 132 <<  " " <<(tree.update(67,'O')==true) << std::endl;
try{std::cout<<"Line no " << 133 <<  " " <<(tree.pop(265)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 134 <<  " " <<(tree.update(607,'H')==true) << std::endl;
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
