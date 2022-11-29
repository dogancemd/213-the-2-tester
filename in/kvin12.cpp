#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(503,'V')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(683,'B')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(874,'D')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(952,'P')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(987,'T')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(354,'X')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(490,'O')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(191,'U')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(319,'B')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(681,'G')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(761,'T')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(76,'A')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(686,'Z')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(857,'T')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(222,'L')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(544,'E')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(428,'R')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(655,'Q')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(184,'G')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(640,'J')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(533,'Q')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(30,'C')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(953,'W')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(849,'S')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(938,'I')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(2,'X')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(259,'Y')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(50,'K')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(1,'A')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(875,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<(tree.pop(686)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 36 <<  " " <<(tree.update(54,'O')==true) << std::endl;
try{std::cout<<"Line no " << 37 <<  " " <<tree.get(503) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 38 <<  " " <<(tree.update(388,'L')==true) << std::endl;
std::cout<<"Line no " << 39 <<  " " <<(tree.update(331,'A')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 41 <<  " " <<(tree.update(900,'X')==true) << std::endl;
std::cout<<"Line no " << 42 <<  " " <<(tree.update(783,'O')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<(tree.pop(681)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 <<  " " <<(tree.update(740,'P')==true) << std::endl;
try{std::cout<<"Line no " << 49 <<  " " <<(tree.pop(783)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<(tree.pop(490)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<tree.floorEntry(740) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 55 <<  " " <<(tree.update(907,'V')==true) << std::endl;
try{std::cout<<"Line no " << 56 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 57 << " "; print_char_vector(tree.subMap(30,907));std::cout << std::endl;
try{std::cout<<"Line no " << 58 <<  " " <<tree.get(259) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 59 <<  " " <<(tree.update(455,'P')==true) << std::endl;
try{std::cout<<"Line no " << 60 <<  " " <<(tree.pop(740)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<tree.get(455) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 62 <<  " " <<(tree.update(696,'A')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<tree.ceilingEntry(503) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<(tree.pop(331)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 69 <<  " " <<(tree.pop(503)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 72 <<  " " <<(tree.update(293,'Z')==true) << std::endl;
std::cout<<"Line no " << 73 <<  " " <<(tree.update(311,'N')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 <<  " " <<(tree.update(658,'E')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<(tree.pop(428)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 78 <<  " " <<(tree.update(48,'A')==false) << std::endl;
try{std::cout<<"Line no " << 79 <<  " " <<(tree.pop(907)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<tree.get(184) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<tree.get(875) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 83 <<  " " <<(tree.update(930,'Z')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<tree.floorEntry(533) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(857)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<tree.floorEntry(388) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(455)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<(tree.pop(293)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 92 <<  " " <<(tree.update(337,'C')==false) << std::endl;
try{std::cout<<"Line no " << 93 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 94 <<  " " <<(tree.update(641,'G')==true) << std::endl;
try{std::cout<<"Line no " << 95 <<  " " <<(tree.pop(319)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 97 <<  " " <<(tree.update(27,'V')==true) << std::endl;
std::cout<<"Line no " << 98 <<  " " <<(tree.update(146,'L')==true) << std::endl;
try{std::cout<<"Line no " << 99 <<  " " <<tree.ceilingEntry(875) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 100 <<  " " <<(tree.update(969,'U')==true) << std::endl;
try{std::cout<<"Line no " << 101 <<  " " <<(tree.pop(46)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 102 <<  " " <<(tree.update(910,'V')==true) << std::endl;
std::cout<<"Line no " << 103 <<  " " <<(tree.update(356,'U')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 105 << " "; print_char_vector(tree.subMap(544,874));std::cout << std::endl;
std::cout<<"Line no " << 106 <<  " " <<(tree.update(282,'C')==true) << std::endl;
std::cout<<"Line no " << 107 <<  " " <<(tree.update(286,'P')==true) << std::endl;
std::cout<<"Line no " << 108 <<  " " <<(tree.update(396,'L')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 110 << " "; print_char_vector(tree.subMap(222,259));std::cout << std::endl;
try{std::cout<<"Line no " << 111 <<  " " <<(tree.pop(875)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<(tree.pop(655)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 114 << " "; print_char_vector(tree.subMap(640,683));std::cout << std::endl;
try{std::cout<<"Line no " << 115 <<  " " <<(tree.pop(354)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<(tree.pop(190)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<(tree.pop(658)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 118 <<  " " <<(tree.update(957,'O')==true) << std::endl;
try{std::cout<<"Line no " << 119 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<tree.ceilingEntry(957) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<tree.get(544) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<(tree.pop(849)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 124 <<  " " <<tree.get(533) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 125 <<  " " <<(tree.pop(311)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<(tree.pop(544)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<tree.get(641) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<tree.floorEntry(396) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<tree.floorEntry(191) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<(tree.pop(259)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 134 <<  " " <<(tree.update(624,'E')==true) << std::endl;
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
