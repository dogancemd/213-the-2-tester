#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(359,'A')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(713,'J')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(710,'K')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(942,'S')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(269,'T')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(61,'Q')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(398,'K')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(639,'Y')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(862,'X')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(526,'D')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(591,'M')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(648,'W')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(537,'N')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(375,'E')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(951,'G')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(596,'M')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(606,'G')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(738,'Y')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(686,'G')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(583,'A')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(118,'X')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(476,'F')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(536,'W')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(478,'F')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(671,'F')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(254,'Y')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(10,'R')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(217,'S')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(130,'N')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(338,'S')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<tree.get(537) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<tree.floorEntry(398) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 37 <<  " " <<(tree.update(2,'B')==true) << std::endl;
std::cout<<"Line no " << 38 <<  " " <<(tree.update(555,'Z')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 40 <<  " " <<(tree.update(814,'I')==true) << std::endl;
try{std::cout<<"Line no " << 41 <<  " " <<(tree.pop(338)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 42 <<  " " <<(tree.update(343,'M')==false) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 44 <<  " " <<(tree.update(462,'D')==true) << std::endl;
try{std::cout<<"Line no " << 45 <<  " " <<tree.floorEntry(591) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<(tree.pop(862)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<tree.floorEntry(118) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<(tree.pop(269)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<(tree.pop(462)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(773)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 52 <<  " " <<(tree.update(505,'J')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<tree.floorEntry(738) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<tree.ceilingEntry(254) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 56 <<  " " <<(tree.update(239,'D')==true) << std::endl;
std::cout<<"Line no " << 57 <<  " " <<(tree.update(929,'Z')==true) << std::endl;
std::cout<<"Line no " << 58 <<  " " <<(tree.update(604,'W')==true) << std::endl;
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(555)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<tree.ceilingEntry(61) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<tree.floorEntry(583) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 64 << " "; print_char_vector(tree.subMap(118,239));std::cout << std::endl;
try{std::cout<<"Line no " << 65 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<(tree.pop(498)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(648)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 68 <<  " " <<(tree.update(346,'A')==false) << std::endl;
try{std::cout<<"Line no " << 69 <<  " " <<tree.ceilingEntry(583) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 70 <<  " " <<(tree.update(789,'W')==true) << std::endl;
try{std::cout<<"Line no " << 71 <<  " " <<(tree.pop(712)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 72 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<tree.ceilingEntry(686) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<(tree.pop(686)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 <<  " " <<(tree.update(967,'K')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 77 << " "; print_char_vector(tree.subMap(254,671));std::cout << std::endl;
std::cout<<"Line no " << 78 << " "; print_char_vector(tree.subMap(10,536));std::cout << std::endl;
try{std::cout<<"Line no " << 79 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 80 <<  " " <<(tree.update(453,'I')==true) << std::endl;
try{std::cout<<"Line no " << 81 <<  " " <<(tree.pop(583)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 82 << " "; print_char_vector(tree.subMap(130,536));std::cout << std::endl;
std::cout<<"Line no " << 83 <<  " " <<(tree.update(377,'L')==true) << std::endl;
std::cout<<"Line no " << 84 <<  " " <<(tree.update(138,'P')==true) << std::endl;
try{std::cout<<"Line no " << 85 <<  " " <<tree.get(138) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 86 <<  " " <<(tree.update(494,'S')==true) << std::endl;
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(118)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<(tree.pop(814)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<tree.ceilingEntry(738) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<tree.floorEntry(596) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<tree.get(536) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 94 << " "; print_char_vector(tree.subMap(591,639));std::cout << std::endl;
std::cout<<"Line no " << 95 <<  " " <<(tree.update(491,'F')==true) << std::endl;
try{std::cout<<"Line no " << 96 <<  " " <<(tree.pop(713)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 97 <<  " " <<(tree.update(264,'X')==true) << std::endl;
try{std::cout<<"Line no " << 98 <<  " " <<(tree.pop(789)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<(tree.pop(476)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 100 <<  " " <<(tree.update(78,'G')==true) << std::endl;
try{std::cout<<"Line no " << 101 <<  " " <<(tree.pop(606)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 103 <<  " " <<(tree.update(978,'K')==true) << std::endl;
try{std::cout<<"Line no " << 104 <<  " " <<tree.ceilingEntry(929) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 105 <<  " " <<(tree.update(201,'L')==true) << std::endl;
try{std::cout<<"Line no " << 106 <<  " " <<(tree.pop(639)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 <<  " " <<(tree.update(271,'M')==false) << std::endl;
try{std::cout<<"Line no " << 109 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 110 <<  " " <<(tree.update(248,'T')==true) << std::endl;
std::cout<<"Line no " << 111 <<  " " <<(tree.update(799,'V')==true) << std::endl;
try{std::cout<<"Line no " << 112 <<  " " <<tree.ceilingEntry(248) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<(tree.pop(671)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 114 <<  " " <<(tree.update(54,'M')==true) << std::endl;
std::cout<<"Line no " << 115 <<  " " <<(tree.update(311,'D')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 117 <<  " " <<(tree.update(522,'D')==true) << std::endl;
std::cout<<"Line no " << 118 <<  " " <<(tree.update(54,'J')==true) << std::endl;
std::cout<<"Line no " << 119 <<  " " <<(tree.update(832,'E')==true) << std::endl;
try{std::cout<<"Line no " << 120 <<  " " <<tree.floorEntry(217) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<(tree.pop(359)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 <<  " " <<(tree.update(145,'L')==true) << std::endl;
try{std::cout<<"Line no " << 124 <<  " " <<tree.floorEntry(710) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 125 <<  " " <<(tree.update(147,'K')==true) << std::endl;
std::cout<<"Line no " << 126 << " "; print_char_vector(tree.subMap(145,799));std::cout << std::endl;
std::cout<<"Line no " << 127 <<  " " <<(tree.update(905,'R')==true) << std::endl;
try{std::cout<<"Line no " << 128 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<(tree.pop(78)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 132 << " "; print_char_vector(tree.subMap(537,596));std::cout << std::endl;
try{std::cout<<"Line no " << 133 <<  " " <<tree.ceilingEntry(832) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 134 <<  " " <<(tree.update(620,'A')==true) << std::endl;
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
