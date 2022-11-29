#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(976,'D')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(378,'O')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(677,'T')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(132,'W')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(504,'R')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(432,'J')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(722,'W')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(804,'Q')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(621,'H')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(527,'H')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(486,'O')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(186,'K')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(152,'D')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(194,'T')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(566,'I')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(435,'O')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(454,'H')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(246,'N')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(91,'Y')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(273,'E')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(944,'S')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(420,'Q')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(717,'M')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(864,'D')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(589,'P')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(98,'Z')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(820,'N')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(225,'T')==true) << std::endl;
try{std::cout<<"Line no " << 33 <<  " " <<tree.floorEntry(225) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 34 <<  " " <<tree.ceilingEntry(132) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 35 <<  " " <<(tree.pop(856)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<(tree.pop(435)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<(tree.pop(527)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 39 <<  " " <<(tree.update(657,'L')==true) << std::endl;
std::cout<<"Line no " << 40 <<  " " <<(tree.update(407,'F')==true) << std::endl;
std::cout<<"Line no " << 41 <<  " " <<(tree.update(877,'E')==true) << std::endl;
try{std::cout<<"Line no " << 42 <<  " " <<tree.ceilingEntry(91) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<(tree.pop(539)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<(tree.pop(91)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 45 <<  " " <<(tree.update(863,'Y')==true) << std::endl;
std::cout<<"Line no " << 46 <<  " " <<(tree.update(638,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 47 <<  " " <<(tree.pop(722)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<tree.ceilingEntry(186) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<(tree.pop(944)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<tree.get(820) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 51 <<  " " <<(tree.update(1,'N')==true) << std::endl;
try{std::cout<<"Line no " << 52 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 53 <<  " " <<(tree.update(577,'J')==true) << std::endl;
try{std::cout<<"Line no " << 54 <<  " " <<tree.ceilingEntry(273) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<tree.floorEntry(863) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.get(273) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<(tree.pop(577)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<tree.ceilingEntry(486) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(589)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 64 <<  " " <<(tree.update(63,'T')==true) << std::endl;
try{std::cout<<"Line no " << 65 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<(tree.pop(321)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<tree.ceilingEntry(246) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<tree.ceilingEntry(194) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 69 << " "; print_char_vector(tree.subMap(98,657));std::cout << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<tree.floorEntry(246) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 71 <<  " " <<(tree.update(616,'T')==true) << std::endl;
try{std::cout<<"Line no " << 72 <<  " " <<tree.get(132) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 73 << " "; print_char_vector(tree.subMap(432,820));std::cout << std::endl;
try{std::cout<<"Line no " << 74 <<  " " <<tree.get(273) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 76 << " "; print_char_vector(tree.subMap(98,486));std::cout << std::endl;
try{std::cout<<"Line no " << 77 <<  " " <<(tree.pop(638)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(657)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 79 <<  " " <<(tree.update(163,'L')==true) << std::endl;
std::cout<<"Line no " << 80 <<  " " <<(tree.update(596,'L')==true) << std::endl;
std::cout<<"Line no " << 81 <<  " " <<(tree.update(392,'Z')==true) << std::endl;
std::cout<<"Line no " << 82 << " "; print_char_vector(tree.subMap(378,596));std::cout << std::endl;
try{std::cout<<"Line no " << 83 <<  " " <<(tree.pop(804)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(432)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 86 <<  " " <<(tree.update(785,'T')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 88 <<  " " <<(tree.update(203,'B')==true) << std::endl;
try{std::cout<<"Line no " << 89 <<  " " <<tree.floorEntry(186) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(454)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<(tree.pop(203)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<tree.get(820) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 93 <<  " " <<(tree.update(239,'K')==true) << std::endl;
try{std::cout<<"Line no " << 94 <<  " " <<(tree.pop(504)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<(tree.pop(677)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<tree.floorEntry(566) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<(tree.pop(486)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 102 <<  " " <<(tree.update(727,'B')==true) << std::endl;
std::cout<<"Line no " << 103 << " "; print_char_vector(tree.subMap(225,727));std::cout << std::endl;
try{std::cout<<"Line no " << 104 <<  " " <<(tree.pop(616)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<(tree.pop(246)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(186)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<(tree.pop(14)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<(tree.pop(225)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<tree.get(596) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<(tree.pop(239)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<(tree.pop(194)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<(tree.pop(392)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 116 <<  " " <<(tree.update(398,'R')==true) << std::endl;
try{std::cout<<"Line no " << 117 <<  " " <<tree.floorEntry(163) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<tree.get(398) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 119 <<  " " <<(tree.pop(420)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 120 << " "; print_char_vector(tree.subMap(566,566));std::cout << std::endl;
std::cout<<"Line no " << 121 <<  " " <<(tree.update(709,'A')==true) << std::endl;
std::cout<<"Line no " << 122 <<  " " <<(tree.update(69,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 123 <<  " " <<tree.floorEntry(273) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 125 <<  " " <<(tree.pop(621)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 127 <<  " " <<(tree.update(796,'E')==true) << std::endl;
try{std::cout<<"Line no " << 128 <<  " " <<(tree.pop(407)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(830)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<(tree.pop(398)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
