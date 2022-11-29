#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(653,'W')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(757,'X')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(266,'W')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(503,'X')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(773,'V')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(414,'M')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(57,'J')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(705,'N')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(567,'V')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(621,'C')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(83,'Q')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(153,'U')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(136,'I')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(904,'A')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(205,'P')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(154,'C')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(512,'Z')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(182,'Y')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(759,'K')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(224,'N')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(914,'I')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(656,'S')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(280,'B')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(709,'Q')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(287,'I')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(217,'E')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(815,'T')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(805,'A')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(507,'M')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 35 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 36 << " "; print_char_vector(tree.subMap(266,512));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 38 << " "; print_char_vector(tree.subMap(224,266));std::cout << std::endl;
std::cout<<"Line no " << 39 <<  " " <<(tree.update(564,'K')==true) << std::endl;
try{std::cout<<"Line no " << 40 <<  " " <<tree.ceilingEntry(287) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<tree.get(83) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<(tree.pop(709)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<(tree.pop(414)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<(tree.pop(815)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<(tree.pop(503)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<tree.get(904) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<(tree.pop(266)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 51 <<  " " <<(tree.update(6,'B')==true) << std::endl;
try{std::cout<<"Line no " << 52 <<  " " <<(tree.pop(287)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 53 << " "; print_char_vector(tree.subMap(153,507));std::cout << std::endl;
try{std::cout<<"Line no " << 54 <<  " " <<(tree.pop(564)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<tree.ceilingEntry(904) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 57 << " "; print_char_vector(tree.subMap(224,512));std::cout << std::endl;
std::cout<<"Line no " << 58 << " "; print_char_vector(tree.subMap(205,757));std::cout << std::endl;
try{std::cout<<"Line no " << 59 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 60 <<  " " <<(tree.update(672,'S')==true) << std::endl;
try{std::cout<<"Line no " << 61 <<  " " <<tree.get(904) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<(tree.pop(653)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<(tree.pop(224)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<tree.get(6) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<tree.ceilingEntry(656) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 66 <<  " " <<(tree.update(37,'H')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<tree.ceilingEntry(672) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 69 <<  " " <<(tree.pop(757)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<(tree.pop(672)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 73 <<  " " <<(tree.update(459,'M')==true) << std::endl;
try{std::cout<<"Line no " << 74 <<  " " <<(tree.pop(182)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 << " "; print_char_vector(tree.subMap(153,205));std::cout << std::endl;
std::cout<<"Line no " << 76 <<  " " <<(tree.update(348,'D')==true) << std::endl;
try{std::cout<<"Line no " << 77 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(984)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<(tree.pop(37)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 80 << " "; print_char_vector(tree.subMap(217,348));std::cout << std::endl;
try{std::cout<<"Line no " << 81 <<  " " <<(tree.pop(773)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 82 <<  " " <<(tree.update(73,'A')==true) << std::endl;
try{std::cout<<"Line no " << 83 <<  " " <<(tree.pop(154)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<(tree.pop(567)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<tree.get(621) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<tree.ceilingEntry(507) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<tree.get(348) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(512)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 91 <<  " " <<(tree.update(308,'A')==true) << std::endl;
try{std::cout<<"Line no " << 92 <<  " " <<(tree.pop(205)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 94 <<  " " <<(tree.pop(348)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 95 <<  " " <<(tree.pop(217)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<tree.get(308) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<(tree.pop(621)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<(tree.pop(705)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<(tree.pop(280)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 102 <<  " " <<(tree.update(145,'V')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<(tree.pop(145)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 105 <<  " " <<(tree.update(464,'O')==true) << std::endl;
try{std::cout<<"Line no " << 106 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(507)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 109 <<  " " <<(tree.update(452,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 110 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<(tree.pop(459)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 112 <<  " " <<(tree.update(745,'H')==true) << std::endl;
try{std::cout<<"Line no " << 113 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<tree.ceilingEntry(745) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 115 <<  " " <<(tree.update(462,'P')==true) << std::endl;
std::cout<<"Line no " << 116 <<  " " <<(tree.update(570,'T')==true) << std::endl;
try{std::cout<<"Line no " << 117 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 118 <<  " " <<(tree.update(485,'E')==true) << std::endl;
std::cout<<"Line no " << 119 << " "; print_char_vector(tree.subMap(464,745));std::cout << std::endl;
try{std::cout<<"Line no " << 120 <<  " " <<tree.ceilingEntry(745) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<(tree.pop(745)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(464)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<tree.get(570) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 124 <<  " " <<(tree.pop(485)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 125 <<  " " <<tree.floorEntry(656) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 126 <<  " " <<(tree.update(81,'D')==true) << std::endl;
std::cout<<"Line no " << 127 <<  " " <<(tree.update(766,'G')==false) << std::endl;
try{std::cout<<"Line no " << 128 <<  " " <<(tree.pop(656)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(452)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<(tree.pop(570)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<(tree.pop(308)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 132 <<  " " <<(tree.update(724,'B')==true) << std::endl;
try{std::cout<<"Line no " << 133 <<  " " <<(tree.pop(462)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
