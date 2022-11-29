#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(536,'A')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(101,'T')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(878,'D')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(73,'M')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(623,'C')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(783,'B')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(232,'K')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(680,'V')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(284,'O')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(529,'S')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(801,'F')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(598,'K')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(294,'K')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(43,'H')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(425,'Y')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(744,'X')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(519,'C')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(446,'I')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(339,'T')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(823,'H')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(248,'B')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(449,'K')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(750,'G')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(992,'W')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(889,'L')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(510,'Z')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(153,'D')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(515,'I')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(917,'X')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(845,'A')==true) << std::endl;
std::cout<<"Line no " << 35 <<  " " <<(tree.update(87,'F')==true) << std::endl;
try{std::cout<<"Line no " << 36 <<  " " <<(tree.pop(744)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.get(284) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 38 <<  " " <<tree.ceilingEntry(153) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 39 <<  " " <<(tree.pop(232)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 40 <<  " " <<(tree.update(219,'R')==true) << std::endl;
try{std::cout<<"Line no " << 41 <<  " " <<(tree.pop(823)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 42 <<  " " <<(tree.update(55,'W')==true) << std::endl;
std::cout<<"Line no " << 43 <<  " " <<(tree.update(884,'C')==true) << std::endl;
std::cout<<"Line no " << 44 <<  " " <<(tree.update(313,'J')==false) << std::endl;
try{std::cout<<"Line no " << 45 <<  " " <<tree.get(917) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<tree.floorEntry(515) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<(tree.pop(55)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<(tree.pop(529)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 49 <<  " " <<(tree.update(612,'A')==true) << std::endl;
try{std::cout<<"Line no " << 50 <<  " " <<(tree.pop(519)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 52 <<  " " <<(tree.update(7,'A')==true) << std::endl;
try{std::cout<<"Line no " << 53 <<  " " <<(tree.pop(801)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<tree.floorEntry(219) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<(tree.pop(519)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 58 <<  " " <<(tree.update(882,'C')==true) << std::endl;
try{std::cout<<"Line no " << 59 <<  " " <<tree.floorEntry(284) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 60 <<  " " <<(tree.update(805,'O')==true) << std::endl;
try{std::cout<<"Line no " << 61 <<  " " <<tree.floorEntry(889) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 62 <<  " " <<(tree.update(812,'T')==true) << std::endl;
try{std::cout<<"Line no " << 63 <<  " " <<(tree.pop(992)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 64 <<  " " <<(tree.update(947,'M')==true) << std::endl;
std::cout<<"Line no " << 65 <<  " " <<(tree.update(594,'J')==true) << std::endl;
try{std::cout<<"Line no " << 66 <<  " " <<(tree.pop(73)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 67 <<  " " <<(tree.update(879,'T')==true) << std::endl;
try{std::cout<<"Line no " << 68 <<  " " <<tree.floorEntry(612) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 69 <<  " " <<(tree.update(183,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<(tree.pop(248)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 71 <<  " " <<(tree.update(704,'S')==true) << std::endl;
try{std::cout<<"Line no " << 72 <<  " " <<tree.ceilingEntry(183) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 73 <<  " " <<(tree.update(51,'U')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 75 <<  " " <<(tree.pop(284)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 76 <<  " " <<tree.floorEntry(805) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 77 <<  " " <<(tree.update(649,'T')==true) << std::endl;
std::cout<<"Line no " << 78 <<  " " <<(tree.update(450,'H')==true) << std::endl;
try{std::cout<<"Line no " << 79 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<(tree.pop(845)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<(tree.pop(783)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(882)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 87 <<  " " <<(tree.update(870,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 88 <<  " " <<tree.get(294) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<(tree.pop(317)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(510)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<(tree.pop(536)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<tree.floorEntry(183) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 94 <<  " " <<(tree.update(542,'Q')==true) << std::endl;
std::cout<<"Line no " << 95 <<  " " <<(tree.update(668,'G')==true) << std::endl;
try{std::cout<<"Line no " << 96 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<tree.get(425) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 98 <<  " " <<(tree.update(476,'W')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<(tree.pop(457)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<(tree.pop(884)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<tree.get(183) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 105 << " "; print_char_vector(tree.subMap(623,870));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<tree.floorEntry(446) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 109 <<  " " <<(tree.update(417,'Y')==true) << std::endl;
std::cout<<"Line no " << 110 <<  " " <<(tree.update(592,'A')==true) << std::endl;
try{std::cout<<"Line no " << 111 <<  " " <<tree.ceilingEntry(417) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<tree.floorEntry(339) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 114 << " "; print_char_vector(tree.subMap(623,649));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<tree.get(879) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 117 <<  " " <<(tree.update(556,'P')==true) << std::endl;
try{std::cout<<"Line no " << 118 <<  " " <<tree.floorEntry(183) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 119 <<  " " <<(tree.update(171,'G')==true) << std::endl;
try{std::cout<<"Line no " << 120 <<  " " <<(tree.pop(592)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<tree.ceilingEntry(183) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<tree.floorEntry(649) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 << " "; print_char_vector(tree.subMap(425,476));std::cout << std::endl;
std::cout<<"Line no " << 124 <<  " " <<(tree.update(269,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 125 <<  " " <<tree.ceilingEntry(812) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 126 << " "; print_char_vector(tree.subMap(594,879));std::cout << std::endl;
try{std::cout<<"Line no " << 127 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 129 <<  " " <<(tree.update(783,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 130 <<  " " <<tree.ceilingEntry(183) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<tree.ceilingEntry(598) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<(tree.pop(623)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 134 <<  " " <<(tree.update(252,'U')==true) << std::endl;
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
