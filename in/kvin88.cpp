#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(449,'C')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(844,'T')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(888,'L')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(344,'D')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(960,'D')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(112,'R')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(429,'O')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(896,'S')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(940,'P')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(32,'G')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(380,'W')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(163,'T')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(425,'S')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(369,'W')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(84,'T')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(199,'V')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(680,'G')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(193,'F')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(794,'N')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(908,'W')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(386,'P')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(340,'Z')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(216,'I')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(176,'B')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(130,'J')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(576,'H')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(631,'B')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(884,'L')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(111,'Y')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(662,'X')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 36 <<  " " <<(tree.update(414,'J')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 38 <<  " " <<(tree.pop(176)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 39 <<  " " <<(tree.update(275,'Q')==true) << std::endl;
std::cout<<"Line no " << 40 <<  " " <<(tree.update(595,'P')==true) << std::endl;
std::cout<<"Line no " << 41 <<  " " <<(tree.update(316,'R')==true) << std::endl;
try{std::cout<<"Line no " << 42 <<  " " <<tree.floorEntry(662) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 43 <<  " " <<(tree.update(115,'P')==true) << std::endl;
try{std::cout<<"Line no " << 44 <<  " " <<(tree.pop(130)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<tree.get(112) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<(tree.pop(662)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<(tree.pop(316)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<tree.floorEntry(369) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 51 <<  " " <<(tree.update(18,'K')==true) << std::endl;
try{std::cout<<"Line no " << 52 <<  " " <<(tree.pop(414)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<tree.ceilingEntry(449) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.get(111) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<(tree.pop(199)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 58 <<  " " <<(tree.update(430,'H')==true) << std::endl;
try{std::cout<<"Line no " << 59 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 60 <<  " " <<(tree.update(394,'K')==true) << std::endl;
try{std::cout<<"Line no " << 61 <<  " " <<tree.floorEntry(595) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<tree.floorEntry(163) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<(tree.pop(344)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<tree.floorEntry(884) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<(tree.pop(112)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 66 <<  " " <<(tree.update(780,'C')==true) << std::endl;
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(394)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 68 <<  " " <<(tree.update(31,'Y')==true) << std::endl;
std::cout<<"Line no " << 69 <<  " " <<(tree.update(490,'T')==true) << std::endl;
std::cout<<"Line no " << 70 << " "; print_char_vector(tree.subMap(369,490));std::cout << std::endl;
std::cout<<"Line no " << 71 << " "; print_char_vector(tree.subMap(31,888));std::cout << std::endl;
std::cout<<"Line no " << 72 <<  " " <<(tree.update(525,'N')==true) << std::endl;
try{std::cout<<"Line no " << 73 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<tree.floorEntry(275) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 << " "; print_char_vector(tree.subMap(631,884));std::cout << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<(tree.pop(631)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<tree.floorEntry(429) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(888)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<tree.ceilingEntry(386) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 81 << " "; print_char_vector(tree.subMap(595,780));std::cout << std::endl;
try{std::cout<<"Line no " << 82 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<(tree.pop(343)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(275)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<tree.floorEntry(525) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<tree.ceilingEntry(449) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<tree.ceilingEntry(780) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<(tree.pop(386)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 89 <<  " " <<(tree.update(650,'I')==false) << std::endl;
std::cout<<"Line no " << 90 <<  " " <<(tree.update(388,'N')==true) << std::endl;
try{std::cout<<"Line no " << 91 <<  " " <<tree.floorEntry(340) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 92 << " "; print_char_vector(tree.subMap(32,844));std::cout << std::endl;
std::cout<<"Line no " << 93 <<  " " <<(tree.update(650,'O')==true) << std::endl;
try{std::cout<<"Line no " << 94 <<  " " <<tree.ceilingEntry(380) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 96 <<  " " <<(tree.pop(363)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 97 << " "; print_char_vector(tree.subMap(380,525));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<tree.floorEntry(780) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 101 <<  " " <<(tree.update(65,'C')==false) << std::endl;
std::cout<<"Line no " << 102 <<  " " <<(tree.update(860,'N')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<tree.ceilingEntry(111) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 105 <<  " " <<(tree.update(333,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 106 <<  " " <<tree.ceilingEntry(650) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 <<  " " <<(tree.update(988,'Q')==true) << std::endl;
std::cout<<"Line no " << 109 <<  " " <<(tree.update(75,'F')==true) << std::endl;
std::cout<<"Line no " << 110 << " "; print_char_vector(tree.subMap(430,794));std::cout << std::endl;
try{std::cout<<"Line no " << 111 <<  " " <<(tree.pop(111)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<(tree.pop(585)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<(tree.pop(340)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 114 <<  " " <<(tree.update(663,'A')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 116 <<  " " <<(tree.update(848,'R')==true) << std::endl;
try{std::cout<<"Line no " << 117 <<  " " <<tree.ceilingEntry(193) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 118 <<  " " <<(tree.update(360,'U')==true) << std::endl;
try{std::cout<<"Line no " << 119 <<  " " <<tree.floorEntry(525) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<tree.ceilingEntry(576) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 121 <<  " " <<(tree.update(602,'L')==false) << std::endl;
try{std::cout<<"Line no " << 122 <<  " " <<tree.get(844) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<(tree.pop(425)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 124 << " "; print_char_vector(tree.subMap(84,780));std::cout << std::endl;
std::cout<<"Line no " << 125 << " "; print_char_vector(tree.subMap(360,680));std::cout << std::endl;
std::cout<<"Line no " << 126 <<  " " <<(tree.update(537,'D')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<tree.ceilingEntry(794) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 129 <<  " " <<(tree.update(762,'H')==true) << std::endl;
try{std::cout<<"Line no " << 130 <<  " " <<(tree.pop(844)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 131 <<  " " <<(tree.update(768,'N')==true) << std::endl;
try{std::cout<<"Line no " << 132 <<  " " <<(tree.pop(780)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<tree.ceilingEntry(333) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.ceilingEntry(430) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
