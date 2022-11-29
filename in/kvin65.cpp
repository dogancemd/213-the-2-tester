#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(950,'G')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(262,'G')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(126,'L')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(979,'E')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(4,'N')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(349,'E')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(937,'G')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(537,'V')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(859,'J')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(578,'I')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(546,'R')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(874,'C')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(611,'V')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(532,'H')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(476,'I')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(3,'Z')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(802,'D')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(686,'A')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(411,'W')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(430,'Z')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(592,'H')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(134,'I')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(394,'K')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(599,'S')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(108,'O')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(235,'C')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(671,'O')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(277,'T')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(766,'Z')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(894,'X')==true) << std::endl;
std::cout<<"Line no " << 35 <<  " " <<(tree.update(710,'T')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 37 <<  " " <<(tree.update(788,'A')==true) << std::endl;
try{std::cout<<"Line no " << 38 <<  " " <<(tree.pop(874)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 39 <<  " " <<tree.get(802) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<(tree.pop(592)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<(tree.pop(950)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 42 <<  " " <<(tree.update(354,'P')==true) << std::endl;
try{std::cout<<"Line no " << 43 <<  " " <<tree.floorEntry(235) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<(tree.pop(546)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<tree.floorEntry(394) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<tree.floorEntry(788) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 <<  " " <<(tree.update(753,'T')==true) << std::endl;
std::cout<<"Line no " << 49 <<  " " <<(tree.update(985,'D')==true) << std::endl;
try{std::cout<<"Line no " << 50 <<  " " <<(tree.pop(262)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(985)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<(tree.pop(299)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<tree.get(126) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<(tree.pop(4)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<(tree.pop(894)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<tree.get(788) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 60 <<  " " <<(tree.update(584,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 61 <<  " " <<tree.ceilingEntry(430) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 63 <<  " " <<(tree.update(327,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 64 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 65 << " "; print_char_vector(tree.subMap(277,476));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(766)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 68 <<  " " <<(tree.update(495,'R')==true) << std::endl;
try{std::cout<<"Line no " << 69 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 70 <<  " " <<tree.floorEntry(532) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 72 <<  " " <<(tree.pop(584)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<tree.get(710) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 75 <<  " " <<(tree.pop(476)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 76 <<  " " <<(tree.update(530,'W')==true) << std::endl;
try{std::cout<<"Line no " << 77 <<  " " <<(tree.pop(430)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(532)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 80 << " "; print_char_vector(tree.subMap(537,671));std::cout << std::endl;
try{std::cout<<"Line no " << 81 <<  " " <<tree.floorEntry(530) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 82 <<  " " <<(tree.update(99,'B')==true) << std::endl;
try{std::cout<<"Line no " << 83 <<  " " <<tree.get(788) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 84 <<  " " <<(tree.update(827,'X')==true) << std::endl;
std::cout<<"Line no " << 85 << " "; print_char_vector(tree.subMap(495,599));std::cout << std::endl;
try{std::cout<<"Line no " << 86 <<  " " <<tree.get(394) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<tree.ceilingEntry(788) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 88 <<  " " <<(tree.update(488,'F')==true) << std::endl;
try{std::cout<<"Line no " << 89 <<  " " <<tree.get(686) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 90 <<  " " <<(tree.update(278,'H')==true) << std::endl;
try{std::cout<<"Line no " << 91 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<(tree.pop(235)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 94 <<  " " <<(tree.pop(827)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 95 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 96 <<  " " <<(tree.update(568,'K')==true) << std::endl;
try{std::cout<<"Line no " << 97 <<  " " <<tree.ceilingEntry(753) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<tree.ceilingEntry(349) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<(tree.pop(686)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<(tree.pop(277)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<(tree.pop(99)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<tree.floorEntry(394) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 109 << " "; print_char_vector(tree.subMap(349,537));std::cout << std::endl;
std::cout<<"Line no " << 110 <<  " " <<(tree.update(272,'S')==true) << std::endl;
std::cout<<"Line no " << 111 <<  " " <<(tree.update(26,'D')==false) << std::endl;
try{std::cout<<"Line no " << 112 <<  " " <<tree.ceilingEntry(611) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<tree.get(272) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<(tree.pop(710)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 116 <<  " " <<(tree.update(327,'C')==false) << std::endl;
try{std::cout<<"Line no " << 117 <<  " " <<tree.floorEntry(530) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 118 <<  " " <<(tree.update(485,'N')==true) << std::endl;
std::cout<<"Line no " << 119 <<  " " <<(tree.update(397,'K')==true) << std::endl;
try{std::cout<<"Line no " << 120 <<  " " <<(tree.pop(397)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<tree.floorEntry(495) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(428)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 124 <<  " " <<(tree.pop(530)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 125 <<  " " <<(tree.update(410,'F')==false) << std::endl;
try{std::cout<<"Line no " << 126 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<(tree.pop(272)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(578)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<(tree.pop(537)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 131 <<  " " <<(tree.update(810,'S')==true) << std::endl;
try{std::cout<<"Line no " << 132 <<  " " <<(tree.pop(488)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 134 <<  " " <<(tree.update(842,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
