#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(933,'E')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(468,'D')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(335,'R')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(99,'E')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(892,'N')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(789,'N')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(121,'C')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(901,'Q')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(195,'Z')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(687,'N')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(460,'K')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(62,'V')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(187,'I')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(600,'J')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(611,'V')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(345,'S')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(405,'Z')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(215,'G')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(310,'G')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(839,'V')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(362,'B')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(546,'T')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(506,'J')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(632,'I')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(458,'P')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(615,'N')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(271,'D')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(98,'C')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(728,'U')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 35 <<  " " <<tree.floorEntry(600) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<(tree.pop(477)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.ceilingEntry(506) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 38 <<  " " <<tree.get(687) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 39 <<  " " <<(tree.pop(611)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<tree.floorEntry(892) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 41 <<  " " <<(tree.update(654,'B')==true) << std::endl;
try{std::cout<<"Line no " << 42 <<  " " <<tree.ceilingEntry(728) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 43 <<  " " <<(tree.update(441,'Z')==false) << std::endl;
try{std::cout<<"Line no " << 44 <<  " " <<(tree.pop(506)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 45 <<  " " <<(tree.update(843,'W')==true) << std::endl;
try{std::cout<<"Line no " << 46 <<  " " <<tree.get(187) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<(tree.pop(32)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 <<  " " <<(tree.update(453,'B')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 50 <<  " " <<(tree.update(778,'U')==false) << std::endl;
std::cout<<"Line no " << 51 <<  " " <<(tree.update(722,'S')==false) << std::endl;
try{std::cout<<"Line no " << 52 <<  " " <<tree.ceilingEntry(362) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 54 << " "; print_char_vector(tree.subMap(195,615));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<(tree.pop(195)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<(tree.pop(843)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<tree.floorEntry(453) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(901)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 61 << " "; print_char_vector(tree.subMap(271,728));std::cout << std::endl;
try{std::cout<<"Line no " << 62 <<  " " <<(tree.pop(453)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<(tree.pop(215)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<tree.ceilingEntry(687) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 65 <<  " " <<(tree.update(197,'H')==true) << std::endl;
std::cout<<"Line no " << 66 <<  " " <<(tree.update(767,'U')==true) << std::endl;
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(839)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 69 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 70 <<  " " <<(tree.pop(767)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 72 <<  " " <<(tree.pop(345)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<(tree.pop(687)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 <<  " " <<(tree.update(211,'B')==false) << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<(tree.pop(187)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<tree.ceilingEntry(271) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<tree.get(546) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 82 << " "; print_char_vector(tree.subMap(310,546));std::cout << std::endl;
try{std::cout<<"Line no " << 83 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(468)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 85 <<  " " <<(tree.update(402,'Y')==false) << std::endl;
std::cout<<"Line no " << 86 <<  " " <<(tree.update(635,'T')==true) << std::endl;
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(546)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 89 <<  " " <<(tree.update(715,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 90 <<  " " <<tree.floorEntry(271) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 91 << " "; print_char_vector(tree.subMap(271,458));std::cout << std::endl;
std::cout<<"Line no " << 92 <<  " " <<(tree.update(331,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 93 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 94 <<  " " <<(tree.pop(335)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 95 <<  " " <<(tree.update(36,'R')==true) << std::endl;
std::cout<<"Line no " << 96 << " "; print_char_vector(tree.subMap(197,458));std::cout << std::endl;
try{std::cout<<"Line no " << 97 <<  " " <<tree.get(271) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<(tree.pop(362)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<(tree.pop(632)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<(tree.pop(331)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<(tree.pop(600)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<tree.get(310) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 <<  " " <<(tree.update(417,'B')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 110 <<  " " <<(tree.update(756,'E')==true) << std::endl;
std::cout<<"Line no " << 111 <<  " " <<(tree.update(227,'B')==true) << std::endl;
try{std::cout<<"Line no " << 112 <<  " " <<(tree.pop(197)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 <<  " " <<(tree.update(753,'O')==true) << std::endl;
try{std::cout<<"Line no " << 114 <<  " " <<tree.ceilingEntry(756) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<tree.ceilingEntry(756) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 116 << " "; print_char_vector(tree.subMap(458,458));std::cout << std::endl;
try{std::cout<<"Line no " << 117 <<  " " <<(tree.pop(405)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 119 <<  " " <<(tree.pop(36)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 120 <<  " " <<(tree.update(42,'G')==true) << std::endl;
try{std::cout<<"Line no " << 121 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<tree.floorEntry(460) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 <<  " " <<(tree.update(150,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 124 <<  " " <<(tree.pop(753)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 125 <<  " " <<(tree.update(485,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 126 <<  " " <<tree.floorEntry(615) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<(tree.pop(635)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<(tree.pop(615)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(561)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<tree.ceilingEntry(756) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<(tree.pop(765)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 133 <<  " " <<(tree.update(289,'F')==true) << std::endl;
try{std::cout<<"Line no " << 134 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
