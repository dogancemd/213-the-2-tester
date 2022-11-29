#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(885,'N')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(25,'A')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(872,'P')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(601,'W')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(707,'T')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(796,'P')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(237,'I')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(219,'V')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(18,'O')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(918,'U')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(148,'Z')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(764,'T')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(856,'M')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(976,'I')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(338,'H')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(609,'M')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(118,'S')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(528,'D')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(634,'A')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(28,'H')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(501,'J')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(743,'L')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(143,'T')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(149,'H')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(553,'D')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(367,'T')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(538,'J')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(915,'H')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(554,'U')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(368,'R')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<(tree.pop(18)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<(tree.pop(885)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<(tree.pop(367)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 39 <<  " " <<tree.ceilingEntry(872) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<tree.get(554) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<(tree.pop(609)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<tree.ceilingEntry(856) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<tree.get(764) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 <<  " " <<(tree.update(21,'G')==true) << std::endl;
std::cout<<"Line no " << 49 <<  " " <<(tree.update(255,'K')==true) << std::endl;
try{std::cout<<"Line no " << 50 <<  " " <<(tree.pop(628)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(872)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<tree.floorEntry(528) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<(tree.pop(554)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<tree.ceilingEntry(856) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.floorEntry(553) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<tree.floorEntry(143) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 58 <<  " " <<(tree.update(576,'L')==true) << std::endl;
try{std::cout<<"Line no " << 59 <<  " " <<tree.floorEntry(21) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<tree.ceilingEntry(856) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<(tree.pop(338)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<(tree.pop(796)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<tree.floorEntry(149) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 66 << " "; print_char_vector(tree.subMap(143,538));std::cout << std::endl;
std::cout<<"Line no " << 67 << " "; print_char_vector(tree.subMap(528,576));std::cout << std::endl;
try{std::cout<<"Line no " << 68 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 69 << " "; print_char_vector(tree.subMap(501,501));std::cout << std::endl;
std::cout<<"Line no " << 70 <<  " " <<(tree.update(551,'E')==true) << std::endl;
std::cout<<"Line no " << 71 <<  " " <<(tree.update(689,'L')==true) << std::endl;
try{std::cout<<"Line no " << 72 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 73 <<  " " <<(tree.update(531,'D')==true) << std::endl;
std::cout<<"Line no " << 74 << " "; print_char_vector(tree.subMap(707,743));std::cout << std::endl;
try{std::cout<<"Line no " << 75 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 76 <<  " " <<(tree.update(664,'P')==true) << std::endl;
try{std::cout<<"Line no " << 77 <<  " " <<(tree.pop(84)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<tree.floorEntry(707) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<tree.floorEntry(707) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 81 <<  " " <<(tree.update(186,'N')==true) << std::endl;
try{std::cout<<"Line no " << 82 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 83 <<  " " <<(tree.update(573,'U')==true) << std::endl;
std::cout<<"Line no " << 84 <<  " " <<(tree.update(160,'R')==true) << std::endl;
std::cout<<"Line no " << 85 << " "; print_char_vector(tree.subMap(148,856));std::cout << std::endl;
try{std::cout<<"Line no " << 86 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<(tree.pop(149)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(160)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 91 <<  " " <<(tree.update(858,'S')==true) << std::endl;
std::cout<<"Line no " << 92 <<  " " <<(tree.update(913,'T')==true) << std::endl;
try{std::cout<<"Line no " << 93 <<  " " <<tree.ceilingEntry(858) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 95 <<  " " <<tree.get(664) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 96 <<  " " <<(tree.pop(538)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 97 <<  " " <<(tree.update(495,'E')==true) << std::endl;
try{std::cout<<"Line no " << 98 <<  " " <<(tree.pop(664)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<tree.ceilingEntry(118) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<(tree.pop(118)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 103 <<  " " <<(tree.update(67,'B')==true) << std::endl;
std::cout<<"Line no " << 104 <<  " " <<(tree.update(523,'M')==true) << std::endl;
std::cout<<"Line no " << 105 <<  " " <<(tree.update(773,'F')==true) << std::endl;
std::cout<<"Line no " << 106 << " "; print_char_vector(tree.subMap(601,634));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<tree.ceilingEntry(531) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 110 <<  " " <<tree.ceilingEntry(634) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<tree.get(67) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<(tree.pop(143)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<(tree.pop(495)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<tree.floorEntry(237) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 115 <<  " " <<(tree.update(670,'K')==true) << std::endl;
try{std::cout<<"Line no " << 116 <<  " " <<tree.floorEntry(553) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 117 <<  " " <<(tree.update(247,'O')==true) << std::endl;
try{std::cout<<"Line no " << 118 <<  " " <<(tree.pop(634)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<tree.get(255) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 121 <<  " " <<(tree.update(599,'L')==true) << std::endl;
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(689)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<(tree.pop(601)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 124 <<  " " <<(tree.pop(576)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 125 <<  " " <<(tree.update(396,'J')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<tree.floorEntry(553) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<tree.get(531) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 130 <<  " " <<(tree.update(209,'H')==true) << std::endl;
try{std::cout<<"Line no " << 131 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<tree.ceilingEntry(599) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.floorEntry(523) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
