#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(701,'L')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(895,'G')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(850,'D')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(519,'R')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(523,'C')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(136,'L')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(351,'T')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(249,'E')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(370,'X')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(742,'S')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(938,'K')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(180,'S')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(461,'W')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(515,'Y')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(129,'L')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(34,'R')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(472,'R')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(118,'A')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(135,'C')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(204,'Q')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(47,'R')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(427,'A')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(293,'P')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(542,'P')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(608,'D')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(224,'R')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(841,'Y')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(921,'N')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(377,'S')==true) << std::endl;
try{std::cout<<"Line no " << 34 <<  " " <<tree.get(461) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 35 <<  " " <<tree.floorEntry(224) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<(tree.pop(34)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.ceilingEntry(523) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 38 <<  " " <<(tree.update(112,'A')==true) << std::endl;
try{std::cout<<"Line no " << 39 <<  " " <<tree.floorEntry(47) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 40 <<  " " <<(tree.update(645,'W')==true) << std::endl;
try{std::cout<<"Line no " << 41 <<  " " <<tree.floorEntry(461) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<(tree.pop(370)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<(tree.pop(224)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<tree.floorEntry(645) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 46 << " "; print_char_vector(tree.subMap(112,461));std::cout << std::endl;
try{std::cout<<"Line no " << 47 <<  " " <<tree.ceilingEntry(47) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<(tree.pop(523)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 51 << " "; print_char_vector(tree.subMap(118,519));std::cout << std::endl;
try{std::cout<<"Line no " << 52 <<  " " <<(tree.pop(47)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<(tree.pop(442)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 54 <<  " " <<(tree.update(779,'G')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 57 << " "; print_char_vector(tree.subMap(519,542));std::cout << std::endl;
std::cout<<"Line no " << 58 <<  " " <<(tree.update(197,'U')==true) << std::endl;
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(895)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<(tree.pop(645)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<(tree.pop(779)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<tree.floorEntry(461) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 66 <<  " " <<(tree.update(794,'I')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<(tree.pop(794)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 69 <<  " " <<(tree.update(210,'A')==true) << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 71 <<  " " <<(tree.update(917,'D')==true) << std::endl;
try{std::cout<<"Line no " << 72 <<  " " <<(tree.pop(461)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<tree.get(136) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<(tree.pop(377)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 << " "; print_char_vector(tree.subMap(427,850));std::cout << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<tree.floorEntry(180) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 77 <<  " " <<(tree.update(789,'T')==true) << std::endl;
std::cout<<"Line no " << 78 <<  " " <<(tree.update(231,'L')==true) << std::endl;
try{std::cout<<"Line no " << 79 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 80 <<  " " <<(tree.update(110,'P')==true) << std::endl;
std::cout<<"Line no " << 81 << " "; print_char_vector(tree.subMap(180,204));std::cout << std::endl;
try{std::cout<<"Line no " << 82 <<  " " <<tree.ceilingEntry(850) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<tree.floorEntry(197) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 84 <<  " " <<(tree.update(395,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 85 <<  " " <<(tree.pop(197)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<(tree.pop(472)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(249)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<(tree.pop(519)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<(tree.pop(427)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<(tree.pop(742)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 94 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 95 <<  " " <<(tree.update(908,'T')==true) << std::endl;
std::cout<<"Line no " << 96 <<  " " <<(tree.update(834,'U')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 98 <<  " " <<(tree.update(236,'F')==true) << std::endl;
std::cout<<"Line no " << 99 <<  " " <<(tree.update(16,'M')==true) << std::endl;
try{std::cout<<"Line no " << 100 <<  " " <<(tree.pop(136)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<(tree.pop(110)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<(tree.pop(789)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 103 <<  " " <<(tree.update(876,'W')==true) << std::endl;
std::cout<<"Line no " << 104 <<  " " <<(tree.update(252,'N')==false) << std::endl;
std::cout<<"Line no " << 105 <<  " " <<(tree.update(764,'M')==true) << std::endl;
try{std::cout<<"Line no " << 106 <<  " " <<tree.get(236) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(293)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 109 <<  " " <<(tree.update(38,'U')==true) << std::endl;
std::cout<<"Line no " << 110 <<  " " <<(tree.update(696,'F')==true) << std::endl;
try{std::cout<<"Line no " << 111 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<(tree.pop(231)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 <<  " " <<(tree.update(782,'O')==true) << std::endl;
try{std::cout<<"Line no " << 114 <<  " " <<(tree.pop(859)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<(tree.pop(701)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<(tree.pop(883)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 119 <<  " " <<(tree.update(317,'P')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(317)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 <<  " " <<(tree.update(996,'J')==false) << std::endl;
try{std::cout<<"Line no " << 124 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 125 << " "; print_char_vector(tree.subMap(395,834));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<(tree.pop(180)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<(tree.pop(542)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<tree.get(351) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<(tree.pop(782)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<tree.ceilingEntry(204) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 132 << " "; print_char_vector(tree.subMap(236,515));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
