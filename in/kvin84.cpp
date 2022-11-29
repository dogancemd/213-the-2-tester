#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(725,'C')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(37,'I')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(122,'S')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(563,'L')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(315,'J')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(326,'V')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(123,'K')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(405,'D')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(130,'Z')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(116,'C')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(113,'S')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(280,'I')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(994,'F')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(144,'R')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(851,'Q')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(667,'Z')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(10,'G')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(133,'S')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(889,'X')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(230,'C')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(570,'A')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(290,'A')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(755,'U')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(362,'I')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(254,'R')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(7,'K')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(350,'F')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(469,'P')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(468,'N')==true) << std::endl;
try{std::cout<<"Line no " << 34 <<  " " <<(tree.pop(667)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 35 <<  " " <<tree.floorEntry(116) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 36 <<  " " <<(tree.update(566,'C')==true) << std::endl;
try{std::cout<<"Line no " << 37 <<  " " <<tree.floorEntry(563) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 38 <<  " " <<(tree.pop(435)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 39 <<  " " <<(tree.pop(362)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<tree.get(7) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 41 <<  " " <<(tree.update(96,'D')==true) << std::endl;
std::cout<<"Line no " << 42 <<  " " <<(tree.update(716,'H')==true) << std::endl;
try{std::cout<<"Line no " << 43 <<  " " <<tree.get(570) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 44 <<  " " <<(tree.update(580,'K')==true) << std::endl;
try{std::cout<<"Line no " << 45 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 46 << " "; print_char_vector(tree.subMap(10,122));std::cout << std::endl;
try{std::cout<<"Line no " << 47 <<  " " <<(tree.pop(123)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 49 << " "; print_char_vector(tree.subMap(7,570));std::cout << std::endl;
try{std::cout<<"Line no " << 50 <<  " " <<(tree.pop(133)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 51 <<  " " <<(tree.update(344,'O')==false) << std::endl;
try{std::cout<<"Line no " << 52 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<tree.floorEntry(994) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 55 <<  " " <<(tree.update(438,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 56 <<  " " <<(tree.pop(994)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 57 <<  " " <<(tree.update(617,'S')==true) << std::endl;
try{std::cout<<"Line no " << 58 <<  " " <<(tree.pop(438)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 60 <<  " " <<(tree.update(661,'S')==true) << std::endl;
std::cout<<"Line no " << 61 << " "; print_char_vector(tree.subMap(116,254));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 63 <<  " " <<(tree.update(234,'W')==true) << std::endl;
std::cout<<"Line no " << 64 << " "; print_char_vector(tree.subMap(122,230));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<tree.floorEntry(290) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 67 <<  " " <<(tree.update(396,'B')==true) << std::endl;
try{std::cout<<"Line no " << 68 <<  " " <<tree.get(315) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 69 <<  " " <<(tree.pop(755)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 70 <<  " " <<(tree.update(604,'I')==true) << std::endl;
try{std::cout<<"Line no " << 71 <<  " " <<(tree.pop(604)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 72 <<  " " <<(tree.update(748,'E')==true) << std::endl;
try{std::cout<<"Line no " << 73 <<  " " <<tree.floorEntry(617) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<(tree.pop(889)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 <<  " " <<(tree.update(973,'B')==true) << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<(tree.pop(566)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<tree.get(290) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 80 <<  " " <<(tree.update(355,'B')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 82 <<  " " <<(tree.update(159,'O')==true) << std::endl;
try{std::cout<<"Line no " << 83 <<  " " <<(tree.pop(254)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(315)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<(tree.pop(405)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 86 << " "; print_char_vector(tree.subMap(230,234));std::cout << std::endl;
try{std::cout<<"Line no " << 87 <<  " " <<tree.floorEntry(130) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<(tree.pop(579)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<tree.floorEntry(144) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 93 <<  " " <<(tree.update(998,'B')==true) << std::endl;
std::cout<<"Line no " << 94 <<  " " <<(tree.update(697,'R')==true) << std::endl;
try{std::cout<<"Line no " << 95 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<(tree.pop(130)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<tree.get(230) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 99 << " "; print_char_vector(tree.subMap(469,716));std::cout << std::endl;
try{std::cout<<"Line no " << 100 <<  " " <<tree.get(116) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<(tree.pop(116)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<tree.get(122) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 104 <<  " " <<(tree.update(198,'O')==true) << std::endl;
try{std::cout<<"Line no " << 105 <<  " " <<(tree.pop(661)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<tree.floorEntry(570) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 << " "; print_char_vector(tree.subMap(122,716));std::cout << std::endl;
std::cout<<"Line no " << 109 << " "; print_char_vector(tree.subMap(468,469));std::cout << std::endl;
std::cout<<"Line no " << 110 <<  " " <<(tree.update(404,'F')==true) << std::endl;
std::cout<<"Line no " << 111 << " "; print_char_vector(tree.subMap(290,563));std::cout << std::endl;
try{std::cout<<"Line no " << 112 <<  " " <<(tree.pop(660)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 <<  " " <<(tree.update(380,'P')==true) << std::endl;
try{std::cout<<"Line no " << 114 <<  " " <<(tree.pop(563)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<(tree.pop(401)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 117 <<  " " <<(tree.update(674,'M')==false) << std::endl;
std::cout<<"Line no " << 118 <<  " " <<(tree.update(915,'H')==true) << std::endl;
std::cout<<"Line no " << 119 <<  " " <<(tree.update(903,'G')==true) << std::endl;
try{std::cout<<"Line no " << 120 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<(tree.pop(468)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(198)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 <<  " " <<(tree.update(854,'C')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 125 <<  " " <<(tree.pop(617)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 126 <<  " " <<(tree.update(700,'K')==true) << std::endl;
try{std::cout<<"Line no " << 127 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 128 <<  " " <<(tree.update(607,'X')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<tree.ceilingEntry(350) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<tree.ceilingEntry(380) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
