#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(60,'T')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(287,'W')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(418,'Z')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(378,'X')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(15,'E')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(421,'F')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(606,'Y')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(29,'O')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(187,'D')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(943,'M')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(412,'O')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(271,'C')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(44,'P')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(857,'C')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(459,'M')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(592,'X')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(673,'W')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(393,'Y')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(264,'D')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(445,'J')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(249,'C')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(39,'X')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(869,'P')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(203,'O')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(926,'V')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(699,'L')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(321,'I')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(140,'S')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(904,'A')==true) << std::endl;
try{std::cout<<"Line no " << 34 <<  " " <<tree.get(445) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 35 <<  " " <<(tree.pop(39)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<(tree.pop(140)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 37 <<  " " <<(tree.update(102,'F')==true) << std::endl;
try{std::cout<<"Line no " << 38 <<  " " <<tree.floorEntry(445) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 39 <<  " " <<tree.floorEntry(44) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<(tree.pop(249)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<(tree.pop(63)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<(tree.pop(412)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<(tree.pop(869)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 45 <<  " " <<(tree.update(808,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 46 <<  " " <<(tree.pop(420)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 50 <<  " " <<(tree.update(551,'C')==true) << std::endl;
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(926)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<(tree.pop(857)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 53 <<  " " <<(tree.update(387,'V')==true) << std::endl;
try{std::cout<<"Line no " << 54 <<  " " <<(tree.pop(29)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<tree.ceilingEntry(264) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<tree.ceilingEntry(673) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 58 <<  " " <<(tree.update(786,'S')==true) << std::endl;
std::cout<<"Line no " << 59 <<  " " <<(tree.update(581,'V')==true) << std::endl;
std::cout<<"Line no " << 60 <<  " " <<(tree.update(94,'W')==true) << std::endl;
try{std::cout<<"Line no " << 61 <<  " " <<tree.ceilingEntry(808) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 62 << " "; print_char_vector(tree.subMap(264,592));std::cout << std::endl;
std::cout<<"Line no " << 63 <<  " " <<(tree.update(665,'F')==false) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 65 <<  " " <<(tree.update(22,'F')==true) << std::endl;
try{std::cout<<"Line no " << 66 <<  " " <<(tree.pop(287)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(699)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 68 <<  " " <<(tree.update(809,'K')==true) << std::endl;
try{std::cout<<"Line no " << 69 <<  " " <<(tree.pop(673)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 71 <<  " " <<(tree.update(866,'X')==true) << std::endl;
try{std::cout<<"Line no " << 72 <<  " " <<tree.get(321) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<(tree.pop(44)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 75 <<  " " <<(tree.pop(378)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 76 <<  " " <<(tree.pop(525)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 77 << " "; print_char_vector(tree.subMap(203,393));std::cout << std::endl;
try{std::cout<<"Line no " << 78 <<  " " <<tree.ceilingEntry(551) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 79 <<  " " <<(tree.update(105,'R')==true) << std::endl;
try{std::cout<<"Line no " << 80 <<  " " <<tree.floorEntry(187) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 81 <<  " " <<(tree.update(727,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(105)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 84 <<  " " <<(tree.update(226,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 85 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 86 << " "; print_char_vector(tree.subMap(94,445));std::cout << std::endl;
std::cout<<"Line no " << 87 <<  " " <<(tree.update(30,'O')==true) << std::endl;
try{std::cout<<"Line no " << 88 <<  " " <<tree.floorEntry(581) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 89 << " "; print_char_vector(tree.subMap(809,866));std::cout << std::endl;
std::cout<<"Line no " << 90 <<  " " <<(tree.update(136,'B')==true) << std::endl;
try{std::cout<<"Line no " << 91 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 93 <<  " " <<(tree.update(143,'E')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 95 <<  " " <<(tree.update(755,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 96 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 97 <<  " " <<(tree.update(470,'I')==false) << std::endl;
try{std::cout<<"Line no " << 98 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 100 << " "; print_char_vector(tree.subMap(421,581));std::cout << std::endl;
try{std::cout<<"Line no " << 101 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<tree.get(445) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<tree.ceilingEntry(459) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<tree.get(808) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 110 <<  " " <<(tree.update(124,'O')==true) << std::endl;
std::cout<<"Line no " << 111 <<  " " <<(tree.update(411,'U')==true) << std::endl;
try{std::cout<<"Line no " << 112 <<  " " <<tree.get(143) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 114 <<  " " <<(tree.update(220,'P')==true) << std::endl;
std::cout<<"Line no " << 115 <<  " " <<(tree.update(866,'G')==true) << std::endl;
try{std::cout<<"Line no " << 116 <<  " " <<(tree.pop(187)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<tree.floorEntry(421) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<tree.ceilingEntry(143) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(215)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 << " "; print_char_vector(tree.subMap(203,387));std::cout << std::endl;
std::cout<<"Line no " << 124 <<  " " <<(tree.update(578,'K')==true) << std::endl;
std::cout<<"Line no " << 125 <<  " " <<(tree.update(295,'Y')==true) << std::endl;
std::cout<<"Line no " << 126 <<  " " <<(tree.update(964,'M')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(421)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 130 <<  " " <<(tree.update(97,'M')==true) << std::endl;
try{std::cout<<"Line no " << 131 <<  " " <<(tree.pop(578)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 132 <<  " " <<(tree.update(26,'B')==true) << std::endl;
std::cout<<"Line no " << 133 <<  " " <<(tree.update(23,'U')==true) << std::endl;
try{std::cout<<"Line no " << 134 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
