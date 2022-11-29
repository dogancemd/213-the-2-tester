#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(90,'W')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(942,'U')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(28,'Y')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(63,'Y')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(520,'V')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(144,'O')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(255,'C')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(367,'T')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(463,'S')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(239,'A')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(920,'A')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(462,'E')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(777,'F')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(645,'E')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(125,'W')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(26,'P')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(1000,'Z')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(729,'C')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(74,'R')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(113,'N')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(725,'B')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(640,'B')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(31,'T')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(693,'S')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(938,'H')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(614,'F')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(922,'I')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(167,'O')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(623,'R')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(438,'F')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<(tree.pop(738)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.floorEntry(623) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 38 << " "; print_char_vector(tree.subMap(74,693));std::cout << std::endl;
try{std::cout<<"Line no " << 39 <<  " " <<(tree.pop(367)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<(tree.pop(645)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 42 <<  " " <<(tree.update(114,'E')==true) << std::endl;
try{std::cout<<"Line no " << 43 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<(tree.pop(938)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 45 <<  " " <<(tree.update(259,'H')==true) << std::endl;
std::cout<<"Line no " << 46 <<  " " <<(tree.update(586,'X')==true) << std::endl;
try{std::cout<<"Line no " << 47 <<  " " <<tree.ceilingEntry(167) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 49 <<  " " <<(tree.update(304,'C')==true) << std::endl;
try{std::cout<<"Line no " << 50 <<  " " <<tree.get(586) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<tree.ceilingEntry(304) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<(tree.pop(259)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 55 <<  " " <<(tree.update(11,'P')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<(tree.pop(614)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 58 <<  " " <<(tree.update(524,'X')==true) << std::endl;
try{std::cout<<"Line no " << 59 <<  " " <<tree.ceilingEntry(144) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 61 <<  " " <<(tree.update(658,'B')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<tree.floorEntry(63) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<tree.get(63) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 70 <<  " " <<(tree.pop(777)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 71 <<  " " <<(tree.update(91,'Y')==false) << std::endl;
try{std::cout<<"Line no " << 72 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<tree.get(623) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<tree.ceilingEntry(90) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 75 <<  " " <<(tree.pop(623)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 76 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<(tree.pop(74)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(255)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 79 << " "; print_char_vector(tree.subMap(113,438));std::cout << std::endl;
try{std::cout<<"Line no " << 80 <<  " " <<tree.get(125) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<tree.floorEntry(693) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(520)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 83 <<  " " <<(tree.update(580,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 84 <<  " " <<tree.floorEntry(463) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 85 <<  " " <<(tree.update(894,'L')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(462)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<tree.floorEntry(167) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<(tree.pop(524)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(167)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<(tree.pop(640)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<(tree.pop(725)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 94 << " "; print_char_vector(tree.subMap(658,729));std::cout << std::endl;
try{std::cout<<"Line no " << 95 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 96 <<  " " <<(tree.update(453,'U')==true) << std::endl;
try{std::cout<<"Line no " << 97 <<  " " <<tree.ceilingEntry(463) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<tree.ceilingEntry(580) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 99 <<  " " <<(tree.update(436,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 100 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<(tree.pop(144)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 102 <<  " " <<(tree.update(730,'R')==true) << std::endl;
try{std::cout<<"Line no " << 103 <<  " " <<(tree.pop(304)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 104 <<  " " <<(tree.update(944,'W')==true) << std::endl;
std::cout<<"Line no " << 105 <<  " " <<(tree.update(984,'H')==true) << std::endl;
try{std::cout<<"Line no " << 106 <<  " " <<tree.floorEntry(114) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(944)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<tree.floorEntry(658) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 111 <<  " " <<(tree.update(446,'K')==true) << std::endl;
try{std::cout<<"Line no " << 112 <<  " " <<(tree.pop(125)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 << " "; print_char_vector(tree.subMap(693,730));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<tree.ceilingEntry(113) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 116 << " "; print_char_vector(tree.subMap(453,580));std::cout << std::endl;
std::cout<<"Line no " << 117 <<  " " <<(tree.update(381,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 118 <<  " " <<tree.get(436) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<(tree.pop(446)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 121 <<  " " <<(tree.update(870,'X')==true) << std::endl;
std::cout<<"Line no " << 122 <<  " " <<(tree.update(215,'S')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 124 <<  " " <<(tree.pop(658)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 125 <<  " " <<(tree.pop(215)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 126 <<  " " <<(tree.update(420,'N')==true) << std::endl;
std::cout<<"Line no " << 127 <<  " " <<(tree.update(129,'K')==true) << std::endl;
std::cout<<"Line no " << 128 << " "; print_char_vector(tree.subMap(586,693));std::cout << std::endl;
try{std::cout<<"Line no " << 129 <<  " " <<tree.floorEntry(453) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<tree.floorEntry(693) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 133 <<  " " <<(tree.update(45,'X')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
