#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(469,'A')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(898,'L')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(789,'Y')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(880,'P')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(666,'S')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(522,'S')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(138,'H')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(322,'A')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(314,'R')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(276,'B')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(200,'C')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(10,'M')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(146,'V')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(150,'O')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(342,'Q')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(364,'Q')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(662,'F')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(663,'B')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(305,'W')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(537,'Y')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(849,'U')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(985,'I')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(826,'D')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(698,'D')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(374,'V')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(140,'M')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(506,'L')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(762,'P')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(914,'N')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(415,'K')==true) << std::endl;
std::cout<<"Line no " << 35 << " "; print_char_vector(tree.subMap(342,880));std::cout << std::endl;
try{std::cout<<"Line no " << 36 <<  " " <<tree.floorEntry(914) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<(tree.pop(374)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 38 <<  " " <<(tree.pop(762)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 39 <<  " " <<tree.ceilingEntry(985) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<tree.floorEntry(826) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<tree.floorEntry(666) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 43 <<  " " <<(tree.update(922,'V')==true) << std::endl;
try{std::cout<<"Line no " << 44 <<  " " <<(tree.pop(146)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 45 <<  " " <<(tree.update(106,'V')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<tree.ceilingEntry(698) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<tree.floorEntry(469) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 51 <<  " " <<(tree.update(939,'T')==true) << std::endl;
try{std::cout<<"Line no " << 52 <<  " " <<(tree.pop(880)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 54 <<  " " <<(tree.update(45,'H')==true) << std::endl;
try{std::cout<<"Line no " << 55 <<  " " <<(tree.pop(276)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<(tree.pop(537)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 57 <<  " " <<(tree.update(838,'J')==true) << std::endl;
try{std::cout<<"Line no " << 58 <<  " " <<(tree.pop(305)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(200)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<tree.ceilingEntry(789) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<(tree.pop(106)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 63 <<  " " <<(tree.update(746,'M')==true) << std::endl;
std::cout<<"Line no " << 64 <<  " " <<(tree.update(304,'E')==true) << std::endl;
std::cout<<"Line no " << 65 << " "; print_char_vector(tree.subMap(522,666));std::cout << std::endl;
std::cout<<"Line no " << 66 << " "; print_char_vector(tree.subMap(415,789));std::cout << std::endl;
try{std::cout<<"Line no " << 67 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 68 <<  " " <<(tree.update(217,'U')==true) << std::endl;
std::cout<<"Line no " << 69 <<  " " <<(tree.update(337,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<(tree.pop(140)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<(tree.pop(314)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 76 <<  " " <<(tree.pop(698)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<(tree.pop(217)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(522)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 79 <<  " " <<(tree.update(559,'C')==false) << std::endl;
try{std::cout<<"Line no " << 80 <<  " " <<(tree.pop(662)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 81 <<  " " <<(tree.update(27,'D')==true) << std::endl;
try{std::cout<<"Line no " << 82 <<  " " <<tree.floorEntry(304) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<tree.get(666) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<tree.floorEntry(342) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 86 <<  " " <<(tree.update(95,'J')==true) << std::endl;
std::cout<<"Line no " << 87 <<  " " <<(tree.update(923,'I')==false) << std::endl;
std::cout<<"Line no " << 88 <<  " " <<(tree.update(108,'V')==true) << std::endl;
std::cout<<"Line no " << 89 <<  " " <<(tree.update(151,'G')==true) << std::endl;
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(849)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 91 <<  " " <<(tree.update(612,'R')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 94 <<  " " <<tree.floorEntry(789) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 96 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<(tree.pop(746)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<(tree.pop(304)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 101 <<  " " <<(tree.update(890,'T')==true) << std::endl;
try{std::cout<<"Line no " << 102 <<  " " <<tree.ceilingEntry(666) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<(tree.pop(337)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 104 <<  " " <<(tree.update(948,'S')==true) << std::endl;
try{std::cout<<"Line no " << 105 <<  " " <<tree.get(663) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 106 <<  " " <<(tree.update(911,'M')==false) << std::endl;
std::cout<<"Line no " << 107 <<  " " <<(tree.update(743,'X')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<(tree.pop(322)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 110 <<  " " <<(tree.update(197,'G')==true) << std::endl;
try{std::cout<<"Line no " << 111 <<  " " <<tree.ceilingEntry(415) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<tree.get(612) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<tree.ceilingEntry(789) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 114 <<  " " <<(tree.update(81,'Z')==true) << std::endl;
std::cout<<"Line no " << 115 <<  " " <<(tree.update(597,'A')==false) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 118 <<  " " <<(tree.update(99,'M')==true) << std::endl;
std::cout<<"Line no " << 119 <<  " " <<(tree.update(773,'P')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 121 <<  " " <<(tree.update(876,'Z')==true) << std::endl;
std::cout<<"Line no " << 122 <<  " " <<(tree.update(719,'K')==true) << std::endl;
try{std::cout<<"Line no " << 123 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 124 <<  " " <<(tree.update(515,'X')==true) << std::endl;
try{std::cout<<"Line no " << 125 <<  " " <<(tree.pop(151)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 126 <<  " " <<(tree.update(568,'U')==true) << std::endl;
std::cout<<"Line no " << 127 << " "; print_char_vector(tree.subMap(150,342));std::cout << std::endl;
try{std::cout<<"Line no " << 128 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<(tree.pop(176)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 131 <<  " " <<(tree.update(797,'B')==true) << std::endl;
try{std::cout<<"Line no " << 132 <<  " " <<(tree.pop(381)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<tree.get(99) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 134 <<  " " <<(tree.update(453,'S')==true) << std::endl;
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
