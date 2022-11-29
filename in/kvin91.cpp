#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(672,'V')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(562,'M')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(584,'H')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(715,'C')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(620,'F')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(24,'I')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(220,'Z')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(41,'V')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(476,'Y')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(938,'V')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(349,'R')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(623,'Z')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(773,'E')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(995,'L')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(372,'E')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(439,'C')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(836,'N')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(804,'Z')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(313,'V')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(437,'L')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(259,'M')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(484,'G')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(10,'R')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(231,'O')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(48,'X')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(291,'L')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(740,'O')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(973,'A')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(429,'P')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(152,'R')==true) << std::endl;
std::cout<<"Line no " << 35 <<  " " <<(tree.update(265,'Z')==false) << std::endl;
std::cout<<"Line no " << 36 <<  " " <<(tree.update(59,'M')==true) << std::endl;
try{std::cout<<"Line no " << 37 <<  " " <<(tree.pop(10)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 38 <<  " " <<(tree.update(173,'P')==true) << std::endl;
try{std::cout<<"Line no " << 39 <<  " " <<(tree.pop(41)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 41 <<  " " <<(tree.update(720,'C')==true) << std::endl;
try{std::cout<<"Line no " << 42 <<  " " <<tree.get(620) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<(tree.pop(562)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<(tree.pop(938)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 46 <<  " " <<(tree.update(359,'A')==true) << std::endl;
try{std::cout<<"Line no " << 47 <<  " " <<tree.get(672) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 <<  " " <<(tree.update(803,'C')==true) << std::endl;
std::cout<<"Line no " << 49 <<  " " <<(tree.update(311,'F')==true) << std::endl;
try{std::cout<<"Line no " << 50 <<  " " <<(tree.pop(512)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 51 <<  " " <<(tree.update(170,'W')==true) << std::endl;
try{std::cout<<"Line no " << 52 <<  " " <<(tree.pop(584)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<(tree.pop(773)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<(tree.pop(259)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<(tree.pop(429)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 58 <<  " " <<(tree.update(991,'X')==true) << std::endl;
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(231)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<(tree.pop(836)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<tree.get(973) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<(tree.pop(715)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(803)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<(tree.pop(349)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 69 << " "; print_char_vector(tree.subMap(311,804));std::cout << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<(tree.pop(973)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 71 <<  " " <<(tree.update(552,'O')==true) << std::endl;
std::cout<<"Line no " << 72 <<  " " <<(tree.update(241,'R')==true) << std::endl;
try{std::cout<<"Line no " << 73 <<  " " <<(tree.pop(241)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 74 <<  " " <<(tree.update(716,'V')==false) << std::endl;
std::cout<<"Line no " << 75 <<  " " <<(tree.update(128,'H')==true) << std::endl;
std::cout<<"Line no " << 76 <<  " " <<(tree.update(475,'J')==true) << std::endl;
try{std::cout<<"Line no " << 77 <<  " " <<tree.ceilingEntry(552) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(552)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<(tree.pop(291)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 80 <<  " " <<(tree.update(855,'J')==true) << std::endl;
std::cout<<"Line no " << 81 <<  " " <<(tree.update(390,'W')==true) << std::endl;
std::cout<<"Line no " << 82 <<  " " <<(tree.update(251,'P')==true) << std::endl;
std::cout<<"Line no " << 83 <<  " " <<(tree.update(829,'C')==false) << std::endl;
std::cout<<"Line no " << 84 << " "; print_char_vector(tree.subMap(173,620));std::cout << std::endl;
try{std::cout<<"Line no " << 85 <<  " " <<(tree.pop(740)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(173)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 88 << " "; print_char_vector(tree.subMap(311,804));std::cout << std::endl;
try{std::cout<<"Line no " << 89 <<  " " <<tree.get(311) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 90 << " "; print_char_vector(tree.subMap(128,804));std::cout << std::endl;
try{std::cout<<"Line no " << 91 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<tree.floorEntry(437) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 96 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<(tree.pop(64)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 99 <<  " " <<(tree.update(885,'F')==true) << std::endl;
std::cout<<"Line no " << 100 <<  " " <<(tree.update(759,'G')==true) << std::endl;
try{std::cout<<"Line no " << 101 <<  " " <<(tree.pop(861)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<tree.floorEntry(372) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<tree.ceilingEntry(885) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 106 <<  " " <<(tree.update(922,'P')==true) << std::endl;
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(476)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 <<  " " <<(tree.update(420,'Q')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 110 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<tree.ceilingEntry(439) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<(tree.pop(475)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 <<  " " <<(tree.update(571,'N')==false) << std::endl;
try{std::cout<<"Line no " << 114 <<  " " <<(tree.pop(759)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 115 <<  " " <<(tree.update(457,'E')==true) << std::endl;
try{std::cout<<"Line no " << 116 <<  " " <<tree.ceilingEntry(623) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 118 <<  " " <<(tree.update(762,'B')==true) << std::endl;
try{std::cout<<"Line no " << 119 <<  " " <<(tree.pop(311)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 120 << " "; print_char_vector(tree.subMap(437,672));std::cout << std::endl;
try{std::cout<<"Line no " << 121 <<  " " <<(tree.pop(804)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(420)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<(tree.pop(251)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 124 <<  " " <<(tree.pop(372)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 125 <<  " " <<(tree.pop(720)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<(tree.pop(439)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<tree.get(220) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(437)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 130 <<  " " <<(tree.update(978,'Y')==false) << std::endl;
try{std::cout<<"Line no " << 131 <<  " " <<(tree.pop(220)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<(tree.pop(457)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 134 <<  " " <<(tree.update(383,'Z')==false) << std::endl;
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
