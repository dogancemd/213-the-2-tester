#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(721,'Y')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(220,'X')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(888,'Q')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(585,'W')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(555,'G')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(906,'I')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(176,'H')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(400,'F')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(154,'N')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(628,'P')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(42,'F')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(267,'H')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(192,'W')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(251,'B')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(554,'O')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(671,'K')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(542,'Y')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(573,'S')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(66,'L')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(851,'E')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(196,'H')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(819,'H')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(647,'K')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(159,'L')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(238,'Y')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(945,'Y')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(990,'Y')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(820,'T')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(549,'E')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(787,'Z')==true) << std::endl;
std::cout<<"Line no " << 35 <<  " " <<(tree.update(90,'I')==true) << std::endl;
std::cout<<"Line no " << 36 <<  " " <<(tree.update(938,'V')==false) << std::endl;
try{std::cout<<"Line no " << 37 <<  " " <<(tree.pop(990)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 38 <<  " " <<(tree.pop(628)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<(tree.pop(196)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 41 <<  " " <<(tree.update(873,'M')==true) << std::endl;
try{std::cout<<"Line no " << 42 <<  " " <<(tree.pop(66)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<(tree.pop(554)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<tree.get(721) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 45 <<  " " <<(tree.update(7,'F')==true) << std::endl;
try{std::cout<<"Line no " << 46 <<  " " <<tree.floorEntry(787) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 << " "; print_char_vector(tree.subMap(555,585));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 50 <<  " " <<(tree.update(681,'O')==true) << std::endl;
try{std::cout<<"Line no " << 51 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 52 <<  " " <<(tree.update(137,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 53 <<  " " <<tree.get(819) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 54 << " "; print_char_vector(tree.subMap(176,681));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<(tree.pop(647)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(585)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 62 <<  " " <<(tree.update(391,'E')==true) << std::endl;
try{std::cout<<"Line no " << 63 <<  " " <<tree.get(721) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<(tree.pop(873)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 66 <<  " " <<(tree.update(714,'Y')==true) << std::endl;
std::cout<<"Line no " << 67 << " "; print_char_vector(tree.subMap(159,251));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 69 <<  " " <<(tree.update(805,'M')==true) << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<(tree.pop(555)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<(tree.pop(549)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 72 <<  " " <<(tree.pop(787)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<tree.get(220) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<(tree.pop(176)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 << " "; print_char_vector(tree.subMap(90,400));std::cout << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<(tree.pop(154)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<tree.ceilingEntry(159) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 78 <<  " " <<(tree.update(963,'J')==true) << std::endl;
std::cout<<"Line no " << 79 <<  " " <<(tree.update(195,'T')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(819)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<(tree.pop(192)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 84 <<  " " <<(tree.update(437,'N')==true) << std::endl;
std::cout<<"Line no " << 85 << " "; print_char_vector(tree.subMap(400,681));std::cout << std::endl;
try{std::cout<<"Line no " << 86 <<  " " <<tree.ceilingEntry(159) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(437)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<(tree.pop(137)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<tree.get(251) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 91 <<  " " <<(tree.update(720,'B')==true) << std::endl;
try{std::cout<<"Line no " << 92 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 93 <<  " " <<(tree.update(68,'M')==true) << std::endl;
try{std::cout<<"Line no " << 94 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 96 <<  " " <<(tree.pop(159)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<(tree.pop(573)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<tree.get(721) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<(tree.pop(220)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 100 << " "; print_char_vector(tree.subMap(542,681));std::cout << std::endl;
try{std::cout<<"Line no " << 101 <<  " " <<tree.get(267) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<(tree.pop(720)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<(tree.pop(671)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<tree.get(238) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 105 <<  " " <<(tree.update(931,'C')==true) << std::endl;
try{std::cout<<"Line no " << 106 <<  " " <<tree.get(805) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(681)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 <<  " " <<(tree.update(41,'T')==true) << std::endl;
try{std::cout<<"Line no " << 109 <<  " " <<tree.get(542) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 110 <<  " " <<(tree.pop(820)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 111 << " "; print_char_vector(tree.subMap(195,238));std::cout << std::endl;
try{std::cout<<"Line no " << 112 <<  " " <<(tree.pop(542)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<(tree.pop(384)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 114 <<  " " <<(tree.update(315,'F')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 116 <<  " " <<(tree.update(232,'Y')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 118 <<  " " <<(tree.update(434,'W')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<tree.ceilingEntry(391) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<tree.floorEntry(714) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 <<  " " <<(tree.update(682,'V')==true) << std::endl;
try{std::cout<<"Line no " << 124 <<  " " <<(tree.pop(251)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 125 <<  " " <<(tree.pop(315)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<(tree.pop(714)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 127 <<  " " <<(tree.update(659,'U')==true) << std::endl;
std::cout<<"Line no " << 128 << " "; print_char_vector(tree.subMap(434,659));std::cout << std::endl;
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(434)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 130 <<  " " <<(tree.update(537,'J')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<tree.floorEntry(267) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 133 <<  " " <<(tree.update(810,'L')==false) << std::endl;
std::cout<<"Line no " << 134 <<  " " <<(tree.update(613,'L')==true) << std::endl;
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
