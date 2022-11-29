#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(122,'E')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(608,'D')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(349,'N')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(496,'X')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(53,'R')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(50,'D')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(138,'V')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(99,'M')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(897,'K')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(147,'T')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(480,'F')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(82,'G')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(449,'W')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(174,'F')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(252,'A')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(234,'U')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(411,'B')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(94,'K')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(337,'H')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(370,'L')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(695,'R')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(901,'Y')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(950,'J')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(958,'C')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(378,'N')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(939,'Y')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(931,'L')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(156,'O')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(251,'U')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(577,'D')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<(tree.pop(897)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 36 <<  " " <<(tree.update(317,'R')==true) << std::endl;
std::cout<<"Line no " << 37 <<  " " <<(tree.update(148,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 38 <<  " " <<(tree.pop(411)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 39 <<  " " <<(tree.update(454,'J')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 41 <<  " " <<(tree.update(390,'A')==true) << std::endl;
try{std::cout<<"Line no " << 42 <<  " " <<(tree.pop(156)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<(tree.pop(931)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<(tree.pop(378)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 50 <<  " " <<(tree.update(42,'E')==true) << std::endl;
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(480)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<tree.get(174) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<(tree.pop(337)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 57 <<  " " <<(tree.update(392,'G')==true) << std::endl;
try{std::cout<<"Line no " << 58 <<  " " <<(tree.pop(93)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<tree.floorEntry(251) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 60 <<  " " <<(tree.update(853,'D')==true) << std::endl;
try{std::cout<<"Line no " << 61 <<  " " <<(tree.pop(122)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<(tree.pop(577)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<(tree.pop(608)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 64 <<  " " <<(tree.update(222,'X')==true) << std::endl;
std::cout<<"Line no " << 65 <<  " " <<(tree.update(27,'A')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 67 <<  " " <<(tree.update(597,'H')==true) << std::endl;
try{std::cout<<"Line no " << 68 <<  " " <<(tree.pop(496)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 69 <<  " " <<(tree.pop(853)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 70 <<  " " <<(tree.update(805,'M')==true) << std::endl;
try{std::cout<<"Line no " << 71 <<  " " <<(tree.pop(597)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<tree.get(251) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<(tree.pop(349)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 <<  " " <<(tree.update(913,'A')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 77 <<  " " <<(tree.update(766,'G')==false) << std::endl;
std::cout<<"Line no " << 78 <<  " " <<(tree.update(974,'K')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 81 <<  " " <<(tree.update(977,'B')==true) << std::endl;
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(370)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<(tree.pop(251)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<tree.ceilingEntry(234) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 85 << " "; print_char_vector(tree.subMap(252,913));std::cout << std::endl;
std::cout<<"Line no " << 86 <<  " " <<(tree.update(282,'E')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 88 << " "; print_char_vector(tree.subMap(148,392));std::cout << std::endl;
try{std::cout<<"Line no " << 89 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<(tree.pop(851)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<(tree.pop(147)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 94 <<  " " <<tree.floorEntry(901) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 95 <<  " " <<(tree.update(752,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 96 <<  " " <<(tree.pop(805)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<(tree.pop(901)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<tree.floorEntry(913) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<(tree.pop(695)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 103 <<  " " <<(tree.update(963,'Z')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 105 << " "; print_char_vector(tree.subMap(317,752));std::cout << std::endl;
std::cout<<"Line no " << 106 <<  " " <<(tree.update(947,'K')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 <<  " " <<(tree.update(597,'K')==false) << std::endl;
try{std::cout<<"Line no " << 109 <<  " " <<(tree.pop(454)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 110 <<  " " <<(tree.pop(449)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<(tree.pop(138)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<tree.get(234) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 <<  " " <<(tree.update(97,'H')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<tree.ceilingEntry(947) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<(tree.pop(234)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 119 <<  " " <<(tree.update(824,'A')==true) << std::endl;
try{std::cout<<"Line no " << 120 <<  " " <<(tree.pop(118)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 121 <<  " " <<(tree.update(910,'N')==true) << std::endl;
std::cout<<"Line no " << 122 <<  " " <<(tree.update(593,'T')==true) << std::endl;
std::cout<<"Line no " << 123 <<  " " <<(tree.update(275,'A')==true) << std::endl;
try{std::cout<<"Line no " << 124 <<  " " <<tree.get(390) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 125 <<  " " <<(tree.pop(222)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 126 <<  " " <<(tree.update(652,'P')==true) << std::endl;
try{std::cout<<"Line no " << 127 <<  " " <<(tree.pop(824)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 130 << " "; print_char_vector(tree.subMap(148,317));std::cout << std::endl;
try{std::cout<<"Line no " << 131 <<  " " <<(tree.pop(390)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 132 <<  " " <<(tree.update(476,'A')==true) << std::endl;
try{std::cout<<"Line no " << 133 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<(tree.pop(252)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
