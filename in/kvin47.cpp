#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(99,'E')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(605,'J')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(645,'K')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(361,'X')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(802,'Q')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(155,'W')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(43,'R')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(542,'R')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(614,'V')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(404,'A')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(146,'V')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(601,'M')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(69,'M')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(856,'D')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(309,'X')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(41,'T')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(189,'W')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(925,'V')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(123,'C')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(973,'J')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(838,'C')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(915,'E')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(147,'E')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(890,'X')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(352,'Y')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(995,'D')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(203,'K')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(691,'C')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(800,'G')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(634,'W')==true) << std::endl;
std::cout<<"Line no " << 35 <<  " " <<(tree.update(258,'L')==true) << std::endl;
try{std::cout<<"Line no " << 36 <<  " " <<tree.ceilingEntry(146) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 38 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 39 <<  " " <<(tree.update(69,'W')==false) << std::endl;
try{std::cout<<"Line no " << 40 <<  " " <<tree.get(890) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 41 <<  " " <<(tree.update(181,'W')==true) << std::endl;
try{std::cout<<"Line no " << 42 <<  " " <<tree.get(69) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<(tree.pop(404)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<(tree.pop(645)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<(tree.pop(99)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<(tree.pop(634)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<tree.get(691) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 51 << " "; print_char_vector(tree.subMap(181,605));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 53 <<  " " <<(tree.update(364,'H')==true) << std::endl;
std::cout<<"Line no " << 54 << " "; print_char_vector(tree.subMap(802,915));std::cout << std::endl;
std::cout<<"Line no " << 55 <<  " " <<(tree.update(539,'M')==true) << std::endl;
std::cout<<"Line no " << 56 <<  " " <<(tree.update(577,'N')==true) << std::endl;
try{std::cout<<"Line no " << 57 <<  " " <<(tree.pop(973)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<tree.get(539) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 59 <<  " " <<(tree.update(852,'D')==true) << std::endl;
try{std::cout<<"Line no " << 60 <<  " " <<tree.ceilingEntry(364) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 62 <<  " " <<(tree.update(381,'B')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 64 <<  " " <<(tree.update(144,'J')==true) << std::endl;
try{std::cout<<"Line no " << 65 <<  " " <<tree.ceilingEntry(915) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<(tree.pop(852)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 69 <<  " " <<(tree.update(444,'S')==true) << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<tree.ceilingEntry(605) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 72 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<tree.ceilingEntry(601) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<(tree.pop(189)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 75 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 76 <<  " " <<tree.get(800) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<(tree.pop(352)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<tree.floorEntry(915) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 79 <<  " " <<(tree.update(422,'T')==false) << std::endl;
try{std::cout<<"Line no " << 80 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(181)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<(tree.pop(800)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 84 <<  " " <<(tree.update(254,'K')==true) << std::endl;
try{std::cout<<"Line no " << 85 <<  " " <<(tree.pop(381)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 86 <<  " " <<(tree.update(210,'S')==true) << std::endl;
std::cout<<"Line no " << 87 <<  " " <<(tree.update(151,'X')==false) << std::endl;
try{std::cout<<"Line no " << 88 <<  " " <<tree.floorEntry(802) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(577)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<tree.ceilingEntry(364) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<(tree.pop(605)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 94 <<  " " <<(tree.update(384,'C')==true) << std::endl;
std::cout<<"Line no " << 95 <<  " " <<(tree.update(797,'C')==true) << std::endl;
std::cout<<"Line no " << 96 <<  " " <<(tree.update(78,'F')==true) << std::endl;
std::cout<<"Line no " << 97 <<  " " <<(tree.update(482,'H')==true) << std::endl;
std::cout<<"Line no " << 98 <<  " " <<(tree.update(57,'W')==true) << std::endl;
std::cout<<"Line no " << 99 <<  " " <<(tree.update(465,'C')==true) << std::endl;
try{std::cout<<"Line no " << 100 <<  " " <<(tree.pop(482)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 104 <<  " " <<(tree.update(651,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 105 <<  " " <<(tree.pop(932)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<tree.get(465) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(155)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<tree.get(361) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<(tree.pop(691)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<tree.floorEntry(614) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 << " "; print_char_vector(tree.subMap(258,539));std::cout << std::endl;
std::cout<<"Line no " << 114 <<  " " <<(tree.update(23,'B')==true) << std::endl;
try{std::cout<<"Line no " << 115 <<  " " <<(tree.pop(444)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<(tree.pop(78)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<(tree.pop(838)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 118 <<  " " <<(tree.update(955,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 119 <<  " " <<tree.floorEntry(614) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 121 <<  " " <<(tree.update(159,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 122 <<  " " <<tree.floorEntry(542) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 <<  " " <<(tree.update(134,'U')==true) << std::endl;
try{std::cout<<"Line no " << 124 <<  " " <<tree.ceilingEntry(856) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 125 <<  " " <<(tree.update(440,'D')==true) << std::endl;
std::cout<<"Line no " << 126 <<  " " <<(tree.update(49,'Y')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 129 <<  " " <<(tree.update(311,'S')==true) << std::endl;
try{std::cout<<"Line no " << 130 <<  " " <<tree.get(542) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 133 << " "; print_char_vector(tree.subMap(258,856));std::cout << std::endl;
try{std::cout<<"Line no " << 134 <<  " " <<tree.floorEntry(258) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
