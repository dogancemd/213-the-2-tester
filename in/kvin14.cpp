#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(867,'P')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(49,'D')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(370,'K')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(32,'Z')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(737,'F')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(809,'O')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(486,'N')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(39,'X')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(34,'J')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(922,'O')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(828,'C')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(844,'X')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(249,'X')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(915,'U')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(26,'Q')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(669,'C')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(903,'S')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(891,'Q')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(304,'Z')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(1,'H')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(656,'Z')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(644,'G')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(275,'D')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(724,'X')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(764,'O')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(721,'P')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(883,'F')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(515,'R')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(604,'R')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(884,'Y')==true) << std::endl;
std::cout<<"Line no " << 35 << " "; print_char_vector(tree.subMap(49,275));std::cout << std::endl;
std::cout<<"Line no " << 36 <<  " " <<(tree.update(474,'S')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 38 <<  " " <<(tree.update(320,'U')==true) << std::endl;
std::cout<<"Line no " << 39 <<  " " <<(tree.update(332,'P')==true) << std::endl;
try{std::cout<<"Line no " << 40 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<tree.get(49) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<tree.get(249) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<tree.get(867) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 45 <<  " " <<(tree.update(41,'G')==true) << std::endl;
std::cout<<"Line no " << 46 <<  " " <<(tree.update(865,'C')==true) << std::endl;
try{std::cout<<"Line no " << 47 <<  " " <<tree.ceilingEntry(275) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 49 << " "; print_char_vector(tree.subMap(41,737));std::cout << std::endl;
try{std::cout<<"Line no " << 50 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(515)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 53 <<  " " <<(tree.update(319,'B')==true) << std::endl;
try{std::cout<<"Line no " << 54 <<  " " <<tree.get(604) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 55 <<  " " <<(tree.update(936,'D')==true) << std::endl;
try{std::cout<<"Line no " << 56 <<  " " <<tree.ceilingEntry(39) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<tree.floorEntry(828) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<(tree.pop(332)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 59 <<  " " <<(tree.update(695,'H')==true) << std::endl;
std::cout<<"Line no " << 60 <<  " " <<(tree.update(993,'I')==true) << std::endl;
try{std::cout<<"Line no " << 61 <<  " " <<tree.ceilingEntry(865) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<(tree.pop(844)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 64 <<  " " <<(tree.update(879,'O')==true) << std::endl;
try{std::cout<<"Line no " << 65 <<  " " <<(tree.pop(737)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<tree.ceilingEntry(320) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(275)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 68 <<  " " <<(tree.update(471,'T')==true) << std::endl;
std::cout<<"Line no " << 69 << " "; print_char_vector(tree.subMap(304,903));std::cout << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<(tree.pop(891)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<tree.ceilingEntry(32) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 72 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 73 <<  " " <<(tree.update(496,'U')==true) << std::endl;
std::cout<<"Line no " << 74 <<  " " <<(tree.update(467,'O')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 76 <<  " " <<(tree.pop(41)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 77 <<  " " <<(tree.update(746,'P')==true) << std::endl;
try{std::cout<<"Line no " << 78 <<  " " <<tree.get(656) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 79 <<  " " <<(tree.update(518,'X')==true) << std::endl;
try{std::cout<<"Line no " << 80 <<  " " <<(tree.pop(39)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<tree.ceilingEntry(809) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<tree.get(370) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<tree.floorEntry(695) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 86 << " "; print_char_vector(tree.subMap(656,993));std::cout << std::endl;
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(721)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 88 <<  " " <<(tree.update(836,'K')==true) << std::endl;
try{std::cout<<"Line no " << 89 <<  " " <<(tree.pop(879)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<tree.ceilingEntry(867) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<(tree.pop(249)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 92 <<  " " <<(tree.update(98,'K')==true) << std::endl;
try{std::cout<<"Line no " << 93 <<  " " <<(tree.pop(518)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 94 <<  " " <<(tree.pop(471)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 95 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 96 << " "; print_char_vector(tree.subMap(828,836));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<tree.ceilingEntry(319) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 99 <<  " " <<(tree.update(662,'X')==false) << std::endl;
std::cout<<"Line no " << 100 <<  " " <<(tree.update(650,'H')==true) << std::endl;
std::cout<<"Line no " << 101 << " "; print_char_vector(tree.subMap(828,836));std::cout << std::endl;
try{std::cout<<"Line no " << 102 <<  " " <<tree.get(486) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<(tree.pop(604)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<tree.get(993) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<(tree.pop(644)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<tree.ceilingEntry(695) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<tree.ceilingEntry(764) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 110 <<  " " <<tree.get(809) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 111 <<  " " <<(tree.update(942,'Y')==true) << std::endl;
std::cout<<"Line no " << 112 << " "; print_char_vector(tree.subMap(320,474));std::cout << std::endl;
try{std::cout<<"Line no " << 113 <<  " " <<(tree.pop(942)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<(tree.pop(650)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<(tree.pop(828)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<tree.ceilingEntry(865) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<(tree.pop(936)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<tree.ceilingEntry(884) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 119 <<  " " <<(tree.pop(486)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 120 <<  " " <<(tree.update(572,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 121 <<  " " <<(tree.pop(63)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(915)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<(tree.pop(474)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 124 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 125 <<  " " <<(tree.pop(884)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 126 <<  " " <<(tree.update(870,'K')==true) << std::endl;
try{std::cout<<"Line no " << 127 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 128 <<  " " <<(tree.update(487,'T')==true) << std::endl;
std::cout<<"Line no " << 129 << " "; print_char_vector(tree.subMap(319,370));std::cout << std::endl;
try{std::cout<<"Line no " << 130 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 131 <<  " " <<(tree.update(441,'K')==true) << std::endl;
try{std::cout<<"Line no " << 132 <<  " " <<(tree.pop(441)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<tree.get(865) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
