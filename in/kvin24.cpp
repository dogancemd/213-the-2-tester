#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(882,'C')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(347,'J')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(400,'L')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(621,'U')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(191,'Q')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(419,'U')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(390,'B')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(573,'F')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(187,'W')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(206,'F')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(753,'X')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(837,'F')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(626,'X')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(915,'B')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(460,'Y')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(505,'R')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(620,'P')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(903,'F')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(50,'C')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(402,'E')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(6,'T')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(590,'V')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(235,'B')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(7,'M')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(223,'P')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(76,'J')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(148,'E')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(732,'H')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(856,'K')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(598,'D')==true) << std::endl;
std::cout<<"Line no " << 35 <<  " " <<(tree.update(383,'N')==true) << std::endl;
try{std::cout<<"Line no " << 36 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 37 << " "; print_char_vector(tree.subMap(390,915));std::cout << std::endl;
try{std::cout<<"Line no " << 38 <<  " " <<(tree.pop(882)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 39 <<  " " <<(tree.update(681,'Y')==false) << std::endl;
try{std::cout<<"Line no " << 40 <<  " " <<(tree.pop(643)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 41 <<  " " <<(tree.update(377,'K')==true) << std::endl;
try{std::cout<<"Line no " << 42 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<(tree.pop(626)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<tree.get(573) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 46 << " "; print_char_vector(tree.subMap(377,460));std::cout << std::endl;
try{std::cout<<"Line no " << 47 <<  " " <<tree.ceilingEntry(903) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<tree.floorEntry(191) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<(tree.pop(915)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<tree.ceilingEntry(390) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(235)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<(tree.pop(856)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 55 <<  " " <<(tree.update(235,'R')==true) << std::endl;
try{std::cout<<"Line no " << 56 <<  " " <<(tree.pop(903)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 57 <<  " " <<(tree.update(476,'K')==true) << std::endl;
std::cout<<"Line no " << 58 <<  " " <<(tree.update(203,'M')==true) << std::endl;
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(76)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<tree.get(187) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<tree.floorEntry(598) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 62 << " "; print_char_vector(tree.subMap(7,400));std::cout << std::endl;
std::cout<<"Line no " << 63 <<  " " <<(tree.update(692,'J')==true) << std::endl;
try{std::cout<<"Line no " << 64 <<  " " <<(tree.pop(377)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<(tree.pop(59)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 66 <<  " " <<(tree.update(305,'D')==true) << std::endl;
try{std::cout<<"Line no " << 67 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<tree.floorEntry(598) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 69 <<  " " <<(tree.update(37,'S')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 71 <<  " " <<(tree.update(773,'E')==true) << std::endl;
try{std::cout<<"Line no " << 72 <<  " " <<(tree.pop(402)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<(tree.pop(476)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 << " "; print_char_vector(tree.subMap(620,732));std::cout << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<(tree.pop(573)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 78 <<  " " <<(tree.update(392,'A')==true) << std::endl;
try{std::cout<<"Line no " << 79 <<  " " <<(tree.pop(400)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<tree.ceilingEntry(773) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 82 <<  " " <<(tree.update(193,'U')==true) << std::endl;
try{std::cout<<"Line no " << 83 <<  " " <<tree.ceilingEntry(505) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 84 <<  " " <<(tree.update(546,'G')==true) << std::endl;
try{std::cout<<"Line no " << 85 <<  " " <<(tree.pop(390)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 88 <<  " " <<(tree.update(654,'D')==true) << std::endl;
std::cout<<"Line no " << 89 << " "; print_char_vector(tree.subMap(148,732));std::cout << std::endl;
try{std::cout<<"Line no " << 90 <<  " " <<tree.get(347) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<(tree.pop(235)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 93 <<  " " <<(tree.update(180,'F')==true) << std::endl;
try{std::cout<<"Line no " << 94 <<  " " <<(tree.pop(305)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 95 <<  " " <<(tree.update(478,'V')==true) << std::endl;
try{std::cout<<"Line no " << 96 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 99 <<  " " <<(tree.update(905,'N')==false) << std::endl;
try{std::cout<<"Line no " << 100 <<  " " <<tree.ceilingEntry(193) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<(tree.pop(203)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<(tree.pop(392)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 104 <<  " " <<(tree.update(520,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 105 <<  " " <<(tree.pop(37)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<(tree.pop(582)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(148)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 111 << " "; print_char_vector(tree.subMap(520,546));std::cout << std::endl;
try{std::cout<<"Line no " << 112 <<  " " <<(tree.pop(551)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 <<  " " <<(tree.update(677,'A')==true) << std::endl;
try{std::cout<<"Line no " << 114 <<  " " <<tree.get(677) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<(tree.pop(590)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<tree.ceilingEntry(546) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 119 << " "; print_char_vector(tree.subMap(419,460));std::cout << std::endl;
std::cout<<"Line no " << 120 <<  " " <<(tree.update(862,'R')==true) << std::endl;
try{std::cout<<"Line no " << 121 <<  " " <<(tree.pop(383)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 122 <<  " " <<(tree.update(178,'A')==true) << std::endl;
try{std::cout<<"Line no " << 123 <<  " " <<tree.ceilingEntry(180) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 124 <<  " " <<(tree.update(659,'K')==true) << std::endl;
std::cout<<"Line no " << 125 <<  " " <<(tree.update(329,'T')==true) << std::endl;
std::cout<<"Line no " << 126 <<  " " <<(tree.update(254,'S')==false) << std::endl;
try{std::cout<<"Line no " << 127 <<  " " <<tree.ceilingEntry(478) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<(tree.pop(520)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 129 <<  " " <<(tree.update(818,'I')==true) << std::endl;
try{std::cout<<"Line no " << 130 <<  " " <<tree.floorEntry(621) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 132 <<  " " <<(tree.update(958,'B')==true) << std::endl;
try{std::cout<<"Line no " << 133 <<  " " <<(tree.pop(180)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.get(187) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
