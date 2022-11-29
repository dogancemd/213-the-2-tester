#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(47,'M')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(395,'U')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(870,'P')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(971,'G')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(878,'F')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(587,'C')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(68,'T')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(11,'D')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(506,'V')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(578,'P')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(61,'N')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(601,'J')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(94,'T')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(282,'B')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(147,'W')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(709,'G')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(633,'H')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(585,'V')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(579,'F')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(713,'T')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(256,'J')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(542,'B')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(37,'O')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(594,'E')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(416,'C')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(122,'Q')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(179,'I')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(484,'G')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(947,'S')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(647,'D')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<(tree.pop(713)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 37 <<  " " <<(tree.update(495,'W')==true) << std::endl;
std::cout<<"Line no " << 38 <<  " " <<(tree.update(559,'U')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 41 <<  " " <<(tree.update(155,'B')==true) << std::endl;
try{std::cout<<"Line no " << 42 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 43 << " "; print_char_vector(tree.subMap(147,585));std::cout << std::endl;
std::cout<<"Line no " << 44 <<  " " <<(tree.update(929,'Q')==true) << std::endl;
std::cout<<"Line no " << 45 <<  " " <<(tree.update(35,'K')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<tree.ceilingEntry(579) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 <<  " " <<(tree.update(824,'C')==true) << std::endl;
std::cout<<"Line no " << 49 <<  " " <<(tree.update(143,'J')==true) << std::endl;
std::cout<<"Line no " << 50 <<  " " <<(tree.update(190,'D')==true) << std::endl;
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(61)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<tree.ceilingEntry(929) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 54 <<  " " <<(tree.update(6,'P')==false) << std::endl;
std::cout<<"Line no " << 55 <<  " " <<(tree.update(252,'F')==true) << std::endl;
try{std::cout<<"Line no " << 56 <<  " " <<tree.ceilingEntry(579) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 57 <<  " " <<(tree.update(366,'G')==true) << std::endl;
try{std::cout<<"Line no " << 58 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(143)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<tree.ceilingEntry(190) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<(tree.pop(37)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<(tree.pop(579)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 64 <<  " " <<(tree.update(63,'F')==true) << std::endl;
try{std::cout<<"Line no " << 65 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 66 <<  " " <<(tree.update(514,'V')==true) << std::endl;
std::cout<<"Line no " << 67 <<  " " <<(tree.update(167,'E')==true) << std::endl;
try{std::cout<<"Line no " << 68 <<  " " <<tree.ceilingEntry(47) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 69 <<  " " <<(tree.pop(875)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 72 <<  " " <<(tree.update(914,'R')==false) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<(tree.pop(147)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 <<  " " <<(tree.update(204,'O')==false) << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 78 << " "; print_char_vector(tree.subMap(633,709));std::cout << std::endl;
try{std::cout<<"Line no " << 79 <<  " " <<tree.ceilingEntry(416) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 80 <<  " " <<(tree.update(387,'A')==true) << std::endl;
try{std::cout<<"Line no " << 81 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<tree.get(47) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 84 << " "; print_char_vector(tree.subMap(63,94));std::cout << std::endl;
std::cout<<"Line no " << 85 <<  " " <<(tree.update(198,'B')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(155)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<(tree.pop(68)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<(tree.pop(167)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<tree.get(190) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<tree.get(94) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 93 <<  " " <<(tree.update(64,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 94 <<  " " <<tree.ceilingEntry(709) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 95 <<  " " <<tree.floorEntry(387) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 96 <<  " " <<(tree.pop(824)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<(tree.pop(594)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<(tree.pop(878)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<(tree.pop(647)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<tree.get(190) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<tree.floorEntry(256) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<(tree.pop(282)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<(tree.pop(256)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 107 << " "; print_char_vector(tree.subMap(387,578));std::cout << std::endl;
try{std::cout<<"Line no " << 108 <<  " " <<(tree.pop(559)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 109 <<  " " <<(tree.update(166,'I')==true) << std::endl;
try{std::cout<<"Line no " << 110 <<  " " <<tree.get(484) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 111 <<  " " <<(tree.update(678,'N')==true) << std::endl;
try{std::cout<<"Line no " << 112 <<  " " <<tree.floorEntry(587) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 <<  " " <<(tree.update(555,'H')==true) << std::endl;
std::cout<<"Line no " << 114 << " "; print_char_vector(tree.subMap(179,587));std::cout << std::endl;
try{std::cout<<"Line no " << 115 <<  " " <<(tree.pop(122)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 119 <<  " " <<(tree.pop(763)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 120 <<  " " <<(tree.update(195,'J')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 122 <<  " " <<(tree.update(916,'F')==false) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 124 <<  " " <<(tree.update(76,'B')==true) << std::endl;
std::cout<<"Line no " << 125 <<  " " <<(tree.update(461,'K')==true) << std::endl;
try{std::cout<<"Line no " << 126 <<  " " <<(tree.pop(633)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<tree.floorEntry(416) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<(tree.pop(565)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(585)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<tree.get(555) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 132 <<  " " <<(tree.update(76,'L')==true) << std::endl;
try{std::cout<<"Line no " << 133 <<  " " <<(tree.pop(514)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 134 <<  " " <<(tree.update(894,'X')==true) << std::endl;
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
