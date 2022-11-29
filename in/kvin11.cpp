#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(929,'D')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(713,'E')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(620,'Q')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(195,'P')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(275,'Q')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(530,'R')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(864,'E')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(646,'H')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(30,'N')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(988,'K')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(330,'L')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(688,'L')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(211,'Z')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(346,'P')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(230,'C')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(26,'P')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(698,'J')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(182,'F')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(621,'L')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(863,'F')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(89,'M')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(109,'D')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(489,'A')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(512,'F')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(611,'E')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(653,'U')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(171,'L')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(412,'G')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(190,'D')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(581,'K')==true) << std::endl;
std::cout<<"Line no " << 35 <<  " " <<(tree.update(527,'Y')==true) << std::endl;
std::cout<<"Line no " << 36 <<  " " <<(tree.update(578,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 37 <<  " " <<(tree.pop(713)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 38 <<  " " <<(tree.update(872,'M')==true) << std::endl;
try{std::cout<<"Line no " << 39 <<  " " <<(tree.pop(182)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<(tree.pop(346)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<tree.get(688) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<tree.floorEntry(330) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 44 <<  " " <<(tree.update(322,'G')==true) << std::endl;
try{std::cout<<"Line no " << 45 <<  " " <<(tree.pop(412)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 46 <<  " " <<(tree.update(386,'I')==true) << std::endl;
try{std::cout<<"Line no " << 47 <<  " " <<tree.floorEntry(621) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<(tree.pop(621)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 49 <<  " " <<(tree.update(264,'T')==true) << std::endl;
std::cout<<"Line no " << 50 <<  " " <<(tree.update(154,'P')==true) << std::endl;
try{std::cout<<"Line no " << 51 <<  " " <<tree.ceilingEntry(864) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 52 <<  " " <<(tree.update(564,'J')==true) << std::endl;
std::cout<<"Line no " << 53 <<  " " <<(tree.update(434,'T')==true) << std::endl;
try{std::cout<<"Line no " << 54 <<  " " <<tree.get(512) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.floorEntry(171) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 57 << " "; print_char_vector(tree.subMap(195,230));std::cout << std::endl;
std::cout<<"Line no " << 58 << " "; print_char_vector(tree.subMap(275,581));std::cout << std::endl;
std::cout<<"Line no " << 59 <<  " " <<(tree.update(48,'U')==true) << std::endl;
try{std::cout<<"Line no " << 60 <<  " " <<tree.ceilingEntry(489) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 61 << " "; print_char_vector(tree.subMap(30,863));std::cout << std::endl;
try{std::cout<<"Line no " << 62 <<  " " <<tree.floorEntry(620) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<(tree.pop(211)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<(tree.pop(386)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 66 << " "; print_char_vector(tree.subMap(330,527));std::cout << std::endl;
std::cout<<"Line no " << 67 << " "; print_char_vector(tree.subMap(322,863));std::cout << std::endl;
try{std::cout<<"Line no " << 68 <<  " " <<(tree.pop(154)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 69 <<  " " <<(tree.pop(735)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 70 <<  " " <<tree.floorEntry(275) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 71 <<  " " <<(tree.update(641,'P')==true) << std::endl;
std::cout<<"Line no " << 72 <<  " " <<(tree.update(669,'I')==true) << std::endl;
try{std::cout<<"Line no " << 73 <<  " " <<(tree.pop(698)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 <<  " " <<(tree.update(685,'G')==true) << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<(tree.pop(489)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<tree.floorEntry(872) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(275)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 79 <<  " " <<(tree.update(566,'W')==true) << std::endl;
try{std::cout<<"Line no " << 80 <<  " " <<(tree.pop(145)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<(tree.pop(863)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 82 << " "; print_char_vector(tree.subMap(646,688));std::cout << std::endl;
std::cout<<"Line no " << 83 <<  " " <<(tree.update(734,'V')==true) << std::endl;
try{std::cout<<"Line no " << 84 <<  " " <<tree.floorEntry(48) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 85 <<  " " <<(tree.update(882,'T')==true) << std::endl;
try{std::cout<<"Line no " << 86 <<  " " <<tree.ceilingEntry(566) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<tree.ceilingEntry(688) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 88 <<  " " <<(tree.update(135,'R')==true) << std::endl;
try{std::cout<<"Line no " << 89 <<  " " <<(tree.pop(564)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(620)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 92 <<  " " <<(tree.update(860,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 93 <<  " " <<(tree.pop(734)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 94 <<  " " <<(tree.update(179,'S')==true) << std::endl;
try{std::cout<<"Line no " << 95 <<  " " <<(tree.pop(688)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 96 <<  " " <<(tree.update(84,'E')==true) << std::endl;
try{std::cout<<"Line no " << 97 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 99 <<  " " <<(tree.update(217,'R')==true) << std::endl;
std::cout<<"Line no " << 100 <<  " " <<(tree.update(186,'O')==true) << std::endl;
try{std::cout<<"Line no " << 101 <<  " " <<tree.ceilingEntry(30) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 102 <<  " " <<(tree.update(304,'Q')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<(tree.pop(669)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 106 <<  " " <<(tree.update(302,'G')==true) << std::endl;
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(653)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<(tree.pop(89)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<tree.floorEntry(135) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<tree.ceilingEntry(578) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 <<  " " <<(tree.update(499,'N')==true) << std::endl;
std::cout<<"Line no " << 114 << " "; print_char_vector(tree.subMap(171,304));std::cout << std::endl;
try{std::cout<<"Line no " << 115 <<  " " <<tree.ceilingEntry(512) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 117 << " "; print_char_vector(tree.subMap(230,512));std::cout << std::endl;
try{std::cout<<"Line no " << 118 <<  " " <<(tree.pop(954)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 119 << " "; print_char_vector(tree.subMap(186,578));std::cout << std::endl;
std::cout<<"Line no " << 120 <<  " " <<(tree.update(895,'A')==true) << std::endl;
try{std::cout<<"Line no " << 121 <<  " " <<(tree.pop(530)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(611)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 <<  " " <<(tree.update(162,'D')==true) << std::endl;
try{std::cout<<"Line no " << 124 <<  " " <<(tree.pop(566)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 126 <<  " " <<(tree.update(509,'X')==true) << std::endl;
try{std::cout<<"Line no " << 127 <<  " " <<(tree.pop(860)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<tree.floorEntry(302) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(230)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 130 <<  " " <<(tree.update(595,'C')==true) << std::endl;
std::cout<<"Line no " << 131 <<  " " <<(tree.update(68,'J')==true) << std::endl;
std::cout<<"Line no " << 132 <<  " " <<(tree.update(669,'Y')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
