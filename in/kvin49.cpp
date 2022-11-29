#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(875,'N')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(829,'W')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(216,'M')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(526,'H')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(785,'G')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(482,'Y')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(423,'G')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(698,'N')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(108,'A')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(855,'N')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(331,'F')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(945,'L')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(801,'V')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(697,'X')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(962,'J')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(17,'G')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(723,'V')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(820,'T')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(683,'T')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(407,'O')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(936,'G')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(190,'A')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(464,'L')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(860,'R')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(445,'E')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(284,'X')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(602,'G')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(396,'X')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(114,'B')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(825,'T')==true) << std::endl;
std::cout<<"Line no " << 35 <<  " " <<(tree.update(812,'J')==true) << std::endl;
try{std::cout<<"Line no " << 36 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 38 <<  " " <<(tree.update(361,'E')==true) << std::endl;
std::cout<<"Line no " << 39 <<  " " <<(tree.update(58,'P')==true) << std::endl;
try{std::cout<<"Line no " << 40 <<  " " <<tree.get(445) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 41 <<  " " <<(tree.update(607,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 42 <<  " " <<(tree.pop(58)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<(tree.pop(602)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 44 <<  " " <<(tree.update(629,'I')==true) << std::endl;
try{std::cout<<"Line no " << 45 <<  " " <<tree.ceilingEntry(190) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<tree.ceilingEntry(825) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 47 <<  " " <<(tree.update(501,'T')==true) << std::endl;
std::cout<<"Line no " << 48 <<  " " <<(tree.update(600,'D')==true) << std::endl;
std::cout<<"Line no " << 49 << " "; print_char_vector(tree.subMap(526,829));std::cout << std::endl;
try{std::cout<<"Line no " << 50 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<tree.floorEntry(482) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<(tree.pop(820)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<(tree.pop(331)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 55 <<  " " <<(tree.update(583,'D')==true) << std::endl;
try{std::cout<<"Line no " << 56 <<  " " <<(tree.pop(698)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<(tree.pop(396)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(723)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<(tree.pop(812)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 61 <<  " " <<(tree.update(826,'D')==true) << std::endl;
try{std::cout<<"Line no " << 62 <<  " " <<(tree.pop(936)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<tree.get(860) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 64 <<  " " <<(tree.update(306,'X')==true) << std::endl;
try{std::cout<<"Line no " << 65 <<  " " <<(tree.pop(407)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 66 <<  " " <<(tree.update(797,'V')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 69 <<  " " <<tree.floorEntry(825) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 70 <<  " " <<tree.ceilingEntry(445) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 72 <<  " " <<(tree.pop(190)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 73 <<  " " <<(tree.update(842,'U')==true) << std::endl;
std::cout<<"Line no " << 74 <<  " " <<(tree.update(296,'S')==true) << std::endl;
try{std::cout<<"Line no " << 75 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 76 <<  " " <<tree.floorEntry(945) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 78 <<  " " <<(tree.update(310,'K')==true) << std::endl;
try{std::cout<<"Line no " << 79 <<  " " <<(tree.pop(607)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<(tree.pop(829)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<tree.get(526) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 84 <<  " " <<(tree.update(596,'H')==true) << std::endl;
try{std::cout<<"Line no " << 85 <<  " " <<(tree.pop(629)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 86 <<  " " <<(tree.update(251,'N')==true) << std::endl;
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(683)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<(tree.pop(216)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<tree.floorEntry(600) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(875)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<(tree.pop(310)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 92 <<  " " <<(tree.update(721,'F')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 94 <<  " " <<(tree.pop(596)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 95 <<  " " <<(tree.pop(721)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 96 <<  " " <<tree.get(423) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<(tree.pop(501)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<(tree.pop(600)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<(tree.pop(825)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 103 <<  " " <<(tree.update(710,'U')==true) << std::endl;
try{std::cout<<"Line no " << 104 <<  " " <<tree.get(445) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 105 <<  " " <<(tree.update(532,'S')==true) << std::endl;
try{std::cout<<"Line no " << 106 <<  " " <<(tree.pop(532)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 107 <<  " " <<(tree.update(952,'G')==true) << std::endl;
try{std::cout<<"Line no " << 108 <<  " " <<(tree.pop(710)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 110 <<  " " <<(tree.update(78,'D')==true) << std::endl;
try{std::cout<<"Line no " << 111 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 <<  " " <<(tree.update(472,'O')==true) << std::endl;
try{std::cout<<"Line no " << 114 <<  " " <<(tree.pop(855)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 116 <<  " " <<(tree.update(819,'P')==true) << std::endl;
std::cout<<"Line no " << 117 <<  " " <<(tree.update(631,'U')==true) << std::endl;
try{std::cout<<"Line no " << 118 <<  " " <<tree.ceilingEntry(361) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 119 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<(tree.pop(156)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 121 <<  " " <<(tree.update(65,'F')==true) << std::endl;
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(239)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 <<  " " <<(tree.update(127,'E')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 125 <<  " " <<tree.floorEntry(78) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 126 << " "; print_char_vector(tree.subMap(78,631));std::cout << std::endl;
try{std::cout<<"Line no " << 127 <<  " " <<tree.get(842) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 128 << " "; print_char_vector(tree.subMap(785,826));std::cout << std::endl;
try{std::cout<<"Line no " << 129 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<(tree.pop(785)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<(tree.pop(556)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 132 <<  " " <<(tree.update(261,'C')==true) << std::endl;
std::cout<<"Line no " << 133 <<  " " <<(tree.update(666,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 134 <<  " " <<(tree.pop(801)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
