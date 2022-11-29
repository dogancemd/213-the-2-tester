#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(577,'S')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(199,'O')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(485,'R')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(707,'T')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(244,'W')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(984,'U')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(139,'B')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(41,'M')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(55,'B')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(658,'G')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(718,'T')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(732,'L')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(795,'H')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(161,'U')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(140,'U')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(75,'E')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(887,'U')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(785,'C')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(621,'C')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(93,'I')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(163,'N')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(712,'Y')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(933,'V')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(152,'Z')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(958,'O')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(135,'M')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(233,'W')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(210,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 33 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 34 << " "; print_char_vector(tree.subMap(785,887));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<tree.floorEntry(984) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 37 <<  " " <<(tree.update(582,'R')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<(tree.pop(139)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 41 <<  " " <<(tree.update(138,'H')==true) << std::endl;
try{std::cout<<"Line no " << 42 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 43 <<  " " <<(tree.update(252,'Q')==true) << std::endl;
std::cout<<"Line no " << 44 <<  " " <<(tree.update(305,'O')==true) << std::endl;
try{std::cout<<"Line no " << 45 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<tree.floorEntry(152) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 47 <<  " " <<(tree.update(745,'S')==false) << std::endl;
std::cout<<"Line no " << 48 <<  " " <<(tree.update(686,'M')==true) << std::endl;
try{std::cout<<"Line no " << 49 <<  " " <<(tree.pop(933)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<tree.ceilingEntry(621) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<tree.ceilingEntry(718) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<tree.floorEntry(135) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<tree.ceilingEntry(718) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<(tree.pop(305)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 60 <<  " " <<(tree.update(275,'S')==true) << std::endl;
std::cout<<"Line no " << 61 <<  " " <<(tree.update(133,'N')==true) << std::endl;
try{std::cout<<"Line no " << 62 <<  " " <<tree.get(233) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<(tree.pop(732)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 64 <<  " " <<(tree.update(597,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 65 <<  " " <<tree.ceilingEntry(152) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<tree.get(686) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 68 <<  " " <<(tree.update(786,'K')==true) << std::endl;
std::cout<<"Line no " << 69 <<  " " <<(tree.update(796,'P')==true) << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<tree.ceilingEntry(597) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<tree.get(275) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 72 <<  " " <<(tree.pop(658)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 73 <<  " " <<(tree.update(984,'X')==true) << std::endl;
try{std::cout<<"Line no " << 74 <<  " " <<(tree.pop(795)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 <<  " " <<(tree.update(653,'M')==true) << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<(tree.pop(786)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 78 << " "; print_char_vector(tree.subMap(796,958));std::cout << std::endl;
std::cout<<"Line no " << 79 << " "; print_char_vector(tree.subMap(138,275));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<tree.ceilingEntry(582) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 82 <<  " " <<(tree.update(864,'I')==false) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 84 <<  " " <<(tree.update(764,'I')==true) << std::endl;
try{std::cout<<"Line no " << 85 <<  " " <<tree.get(138) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<tree.get(485) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(161)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 88 <<  " " <<(tree.update(395,'M')==true) << std::endl;
std::cout<<"Line no " << 89 <<  " " <<(tree.update(328,'C')==true) << std::endl;
try{std::cout<<"Line no " << 90 <<  " " <<tree.get(582) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 91 <<  " " <<(tree.update(30,'T')==false) << std::endl;
std::cout<<"Line no " << 92 << " "; print_char_vector(tree.subMap(233,621));std::cout << std::endl;
std::cout<<"Line no " << 93 <<  " " <<(tree.update(511,'R')==true) << std::endl;
std::cout<<"Line no " << 94 <<  " " <<(tree.update(574,'K')==true) << std::endl;
std::cout<<"Line no " << 95 <<  " " <<(tree.update(7,'X')==true) << std::endl;
try{std::cout<<"Line no " << 96 <<  " " <<(tree.pop(135)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<tree.ceilingEntry(395) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 98 <<  " " <<(tree.update(820,'C')==false) << std::endl;
try{std::cout<<"Line no " << 99 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 101 <<  " " <<(tree.update(684,'Q')==true) << std::endl;
std::cout<<"Line no " << 102 <<  " " <<(tree.update(992,'I')==true) << std::endl;
std::cout<<"Line no " << 103 <<  " " <<(tree.update(299,'H')==true) << std::endl;
try{std::cout<<"Line no " << 104 <<  " " <<tree.floorEntry(621) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<tree.get(395) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(152)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<(tree.pop(968)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 109 <<  " " <<(tree.update(300,'G')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<tree.floorEntry(707) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 <<  " " <<(tree.update(931,'A')==true) << std::endl;
try{std::cout<<"Line no " << 114 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 115 <<  " " <<(tree.update(323,'O')==true) << std::endl;
try{std::cout<<"Line no " << 116 <<  " " <<(tree.pop(299)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<(tree.pop(138)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 118 << " "; print_char_vector(tree.subMap(653,653));std::cout << std::endl;
std::cout<<"Line no " << 119 <<  " " <<(tree.update(345,'W')==false) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<tree.floorEntry(511) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<(tree.pop(574)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 124 <<  " " <<(tree.pop(931)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 125 <<  " " <<tree.floorEntry(712) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<tree.get(275) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 127 <<  " " <<(tree.update(478,'P')==false) << std::endl;
std::cout<<"Line no " << 128 <<  " " <<(tree.update(944,'B')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<(tree.pop(686)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<tree.get(275) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
