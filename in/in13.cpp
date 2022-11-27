#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
std::cout << (b->remove(160)) << std::endl;
ScapegoatTree<int> *c=new ScapegoatTree<int>(*a);
std::cout << (b->remove(377)) << std::endl;
std::cout << (c->remove(21)) << std::endl;
std::cout << (b->remove(178)) << std::endl;
b->printPretty();
std::cout << (b->remove(409)) << std::endl;
a->printPretty();
*a=*b;
*b=*b;
std::cout << (a->insert(231)) << std::endl;
std::cout << (a->remove(369)) << std::endl;
c->printPretty();
a->printPretty();
*a=*a;
a->printPretty();
ScapegoatTree<int> *d=new ScapegoatTree<int>;
*c=*b;
ScapegoatTree<int> *e=new ScapegoatTree<int>(*b);
std::cout << (a->remove(231)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << (e->remove(11)) << std::endl;
std::cout << (b->remove(247)) << std::endl;
std::cout << (e->remove(348)) << std::endl;
c->printPretty();
*c=*b;
d->printPretty();
std::cout << (c->remove(182)) << std::endl;
*a=*e;
*c=*c;
*e=*d;
*b=*d;
std::cout << (b->remove(353)) << std::endl;
std::cout << (c->remove(32)) << std::endl;
*d=*e;
std::cout << (a->remove(451)) << std::endl;
e->printPretty();
*d=*c;
*e=*c;
*b=*d;
*e=*d;
std::cout << (a->insert(134)) << std::endl;
d->printPretty();
*b=*d;
std::cout << (a->remove(134)) << std::endl;
std::cout << (d->insert(195)) << std::endl;
c->printPretty();
std::cout << (c->insert(404)) << std::endl;
a->printPretty();
*c=*e;
b->printPretty();
std::cout << (a->remove(160)) << std::endl;
std::cout << (b->insert(389)) << std::endl;
std::cout << (b->insert(183)) << std::endl;
std::cout << (e->insert(6)) << std::endl;
std::cout << (c->remove(234)) << std::endl;
std::cout << (b->insert(389)) << std::endl;
std::cout << (d->remove(195)) << std::endl;
a->printPretty();
d->printPretty();
std::cout << (b->insert(214)) << std::endl;
std::cout << (b->insert(477)) << std::endl;
std::cout << (d->insert(400)) << std::endl;
std::cout << (c->remove(456)) << std::endl;
std::cout << (b->insert(214)) << std::endl;
std::cout << (b->remove(126)) << std::endl;
std::cout << (c->insert(252)) << std::endl;
std::cout << (e->remove(6)) << std::endl;
*c=*c;
c->printPretty();
std::cout << (b->insert(214)) << std::endl;
std::cout << (e->insert(486)) << std::endl;
std::cout << (b->remove(389)) << std::endl;
std::cout << (b->insert(477)) << std::endl;
*e=*d;
e->printPretty();
std::cout << (c->remove(122)) << std::endl;
std::cout << (d->insert(400)) << std::endl;
std::cout << (e->remove(400)) << std::endl;
std::cout << (b->insert(183)) << std::endl;
std::cout << (d->insert(400)) << std::endl;
std::cout << (e->insert(461)) << std::endl;
std::cout << (c->remove(252)) << std::endl;
std::cout << (d->remove(169)) << std::endl;
std::cout << (b->insert(214)) << std::endl;
std::cout << (d->remove(111)) << std::endl;
std::cout << (d->insert(251)) << std::endl;
std::cout << (e->insert(461)) << std::endl;
std::cout << (a->insert(261)) << std::endl;
std::cout << (e->remove(311)) << std::endl;
c->printPretty();
std::cout << (b->insert(477)) << std::endl;
std::cout << (b->insert(118)) << std::endl;
std::cout << (a->remove(261)) << std::endl;
std::cout << (a->insert(436)) << std::endl;
a->printPretty();
std::cout << (b->remove(105)) << std::endl;
*d=*a;
d->printPretty();
std::cout << (b->remove(183)) << std::endl;
std::cout << (b->remove(118)) << std::endl;
std::cout << (e->insert(461)) << std::endl;
e->printPretty();
*c=*d;
d->printPretty();
d->printPretty();
std::cout << (d->remove(113)) << std::endl;
d->printPretty();
std::cout << (b->remove(214)) << std::endl;
std::cout << (e->insert(119)) << std::endl;
d->printPretty();
std::cout << (e->insert(301)) << std::endl;
std::cout << (a->remove(457)) << std::endl;
*e=*a;
a->printPretty();
std::cout << (e->remove(436)) << std::endl;
std::cout << (e->remove(173)) << std::endl;
std::cout << (d->insert(332)) << std::endl;
std::cout << (d->remove(273)) << std::endl;
std::cout << (d->insert(347)) << std::endl;
std::cout << (a->insert(436)) << std::endl;
*c=*d;
*d=*c;
std::cout << (e->insert(56)) << std::endl;
std::cout << (d->remove(436)) << std::endl;
std::cout << (b->remove(479)) << std::endl;
std::cout << (e->remove(210)) << std::endl;
std::cout << (b->insert(477)) << std::endl;
std::cout << (e->insert(39)) << std::endl;
std::cout << (e->remove(39)) << std::endl;
std::cout << (a->insert(478)) << std::endl;
std::cout << (a->insert(436)) << std::endl;
std::cout << (b->insert(175)) << std::endl;
*d=*b;
std::cout << (c->remove(372)) << std::endl;
c->printPretty();
std::cout << (c->insert(399)) << std::endl;
b->printPretty();
*d=*d;
*d=*b;
std::cout << (b->remove(45)) << std::endl;
std::cout << (e->insert(56)) << std::endl;
*e=*b;
std::cout << (c->remove(144)) << std::endl;
d->printPretty();
std::cout << (a->remove(478)) << std::endl;
std::cout << (e->insert(286)) << std::endl;
std::cout << (c->insert(225)) << std::endl;
c->printPretty();
std::cout << (a->insert(436)) << std::endl;
std::cout << (d->remove(175)) << std::endl;
*b=*d;
std::cout << (c->remove(436)) << std::endl;
*d=*b;
d->printPretty();
std::cout << (a->remove(436)) << std::endl;
std::cout << (c->remove(347)) << std::endl;
*d=*a;
std::cout << (b->insert(96)) << std::endl;
a->printPretty();
std::cout << (c->insert(332)) << std::endl;
*b=*e;
std::cout << (e->remove(168)) << std::endl;
std::cout << (d->remove(301)) << std::endl;
std::cout << (b->insert(415)) << std::endl;
d->printPretty();
std::cout << (e->remove(477)) << std::endl;
e->printPretty();
std::cout << (d->remove(343)) << std::endl;
*e=*b;
*d=*d;
*e=*e;
std::cout << (e->insert(286)) << std::endl;
*b=*c;
c->printPretty();
c->printPretty();
std::cout << (a->insert(431)) << std::endl;
std::cout << (a->insert(431)) << std::endl;
std::cout << (a->remove(231)) << std::endl;
std::cout << (c->remove(161)) << std::endl;
std::cout << (a->remove(199)) << std::endl;
std::cout << (a->insert(431)) << std::endl;
std::cout << (b->remove(225)) << std::endl;
std::cout << (c->remove(399)) << std::endl;
b->printPretty();
b->printPretty();
d->printPretty();
std::cout << (a->remove(431)) << std::endl;
std::cout << (e->remove(477)) << std::endl;
std::cout << (c->insert(225)) << std::endl;
std::cout << (a->insert(498)) << std::endl;
c->printPretty();
a->printPretty();
std::cout << (c->insert(386)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << (b->remove(331)) << std::endl;
*b=*e;
std::cout << (c->remove(26)) << std::endl;
std::cout << (b->insert(199)) << std::endl;
e->printPretty();
std::cout << (e->remove(286)) << std::endl;
std::cout << (e->remove(415)) << std::endl;
std::cout << (a->insert(45)) << std::endl;
*c=*c;
a->printPretty();
std::cout << (b->remove(286)) << std::endl;
*b=*b;
std::cout << (b->insert(175)) << std::endl;
*b=*e;
std::cout << (b->insert(4)) << std::endl;
std::cout << (a->remove(45)) << std::endl;
std::cout << (e->remove(70)) << std::endl;
std::cout << (c->remove(213)) << std::endl;
std::cout << (d->insert(426)) << std::endl;
std::cout << (d->insert(426)) << std::endl;
std::cout << (b->insert(6)) << std::endl;
e->printPretty();
std::cout << (c->insert(386)) << std::endl;
std::cout << (d->remove(168)) << std::endl;
std::cout << (b->insert(418)) << std::endl;
std::cout << (c->insert(262)) << std::endl;
*a=*d;
std::cout << (d->insert(426)) << std::endl;
d->printPretty();
std::cout << (d->remove(426)) << std::endl;
std::cout << (b->remove(175)) << std::endl;
std::cout << (a->remove(142)) << std::endl;
std::cout << (d->remove(330)) << std::endl;
std::cout << (e->insert(175)) << std::endl;
b->printPretty();
d->printPretty();
std::cout << (c->remove(225)) << std::endl;
*c=*a;
e->printPretty();
std::cout << (a->remove(426)) << std::endl;
std::cout << (b->remove(355)) << std::endl;
*d=*e;
std::cout << (d->remove(175)) << std::endl;
*d=*d;
std::cout << (a->remove(305)) << std::endl;
std::cout << (d->insert(295)) << std::endl;
std::cout << (c->insert(9)) << std::endl;
std::cout << (c->remove(9)) << std::endl;
std::cout << (e->remove(290)) << std::endl;
std::cout << (e->insert(175)) << std::endl;
std::cout << (e->remove(471)) << std::endl;
std::cout << (e->remove(175)) << std::endl;
std::cout << (d->remove(129)) << std::endl;
std::cout << (d->insert(5)) << std::endl;
c->printPretty();
std::cout << (b->insert(418)) << std::endl;
a->printPretty();
std::cout << (b->insert(74)) << std::endl;
*a=*d;
a->printPretty();
std::cout << (d->remove(35)) << std::endl;
e->printPretty();
std::cout << (e->insert(481)) << std::endl;
*c=*c;
std::cout << (e->insert(481)) << std::endl;
std::cout << (b->remove(350)) << std::endl;
e->printPretty();
std::cout << (b->remove(66)) << std::endl;
*b=*b;
d->printPretty();
std::cout << (c->remove(426)) << std::endl;
d->printPretty();
std::cout << (a->remove(5)) << std::endl;
a->printPretty();
std::cout << (a->remove(492)) << std::endl;
std::cout << (c->insert(481)) << std::endl;
std::cout << (c->remove(481)) << std::endl;
std::cout << (e->remove(481)) << std::endl;
std::cout << (d->remove(5)) << std::endl;
std::cout << (d->remove(346)) << std::endl;
c->printPretty();
d->printPretty();
std::cout << (d->insert(177)) << std::endl;
*c=*d;
std::cout << (e->remove(138)) << std::endl;
std::cout << (a->remove(434)) << std::endl;
std::cout << (b->insert(302)) << std::endl;
*e=*a;
std::cout << (b->remove(418)) << std::endl;
a->printPretty();
*c=*d;
std::cout << (d->insert(120)) << std::endl;
std::cout << (b->remove(416)) << std::endl;
c->printPretty();
std::cout << (b->insert(317)) << std::endl;
c->printPretty();
*b=*c;
*e=*c;
std::cout << (a->remove(360)) << std::endl;
std::cout << (c->remove(177)) << std::endl;
*a=*b;
std::cout << (c->insert(193)) << std::endl;
std::cout << (a->insert(177)) << std::endl;
c->printPretty();
*b=*e;
c->printPretty();
std::cout << (d->remove(470)) << std::endl;
std::cout << (e->remove(295)) << std::endl;
std::cout << (c->remove(295)) << std::endl;
*e=*c;
std::cout << (b->insert(177)) << std::endl;
std::cout << (c->insert(193)) << std::endl;
std::cout << (d->remove(120)) << std::endl;
std::cout << (d->remove(295)) << std::endl;
std::cout << (d->insert(177)) << std::endl;
std::cout << (b->insert(177)) << std::endl;
c->printPretty();
std::cout << (e->remove(399)) << std::endl;
b->printPretty();
std::cout << (a->insert(177)) << std::endl;
std::cout << (b->remove(177)) << std::endl;
a->printPretty();
*c=*b;
std::cout << (c->remove(238)) << std::endl;
std::cout << (e->remove(193)) << std::endl;
*d=*b;
d->printPretty();
*c=*e;
b->printPretty();
*d=*b;
*d=*c;
std::cout << (a->remove(491)) << std::endl;
std::cout << (d->remove(14)) << std::endl;
*c=*e;
std::cout << (a->remove(177)) << std::endl;
d->printPretty();
*b=*d;
std::cout << (c->remove(37)) << std::endl;
std::cout << (a->insert(295)) << std::endl;
std::cout << (c->remove(465)) << std::endl;
*a=*b;
std::cout << (e->insert(443)) << std::endl;
*e=*d;
std::cout << (e->insert(466)) << std::endl;
c->printPretty();
*d=*e;
std::cout << (d->insert(466)) << std::endl;
b->printPretty();
*b=*a;
std::cout << (c->insert(274)) << std::endl;
std::cout << (c->remove(491)) << std::endl;
*a=*c;
std::cout << (b->insert(446)) << std::endl;
std::cout << (e->remove(466)) << std::endl;
e->printPretty();
c->printPretty();
std::cout << (e->remove(324)) << std::endl;
*d=*a;
std::cout << (d->insert(8)) << std::endl;
*e=*d;
std::cout << (a->insert(274)) << std::endl;
a->printPretty();
std::cout << (a->remove(274)) << std::endl;
std::cout << (e->insert(8)) << std::endl;
std::cout << (e->remove(128)) << std::endl;
d->printPretty();
std::cout << (a->remove(456)) << std::endl;
std::cout << (a->remove(186)) << std::endl;
std::cout << (c->remove(135)) << std::endl;
std::cout << (d->remove(8)) << std::endl;
c->printPretty();
std::cout << (b->insert(446)) << std::endl;
std::cout << (c->insert(274)) << std::endl;
*b=*d;
std::cout << (d->insert(121)) << std::endl;
std::cout << (b->insert(36)) << std::endl;
std::cout << (d->insert(121)) << std::endl;
std::cout << (e->remove(231)) << std::endl;
std::cout << (e->insert(309)) << std::endl;
std::cout << (b->remove(361)) << std::endl;
std::cout << (c->insert(274)) << std::endl;
std::cout << (d->remove(121)) << std::endl;
std::cout << (a->insert(326)) << std::endl;
d->printPretty();
std::cout << (d->remove(274)) << std::endl;
std::cout << (d->insert(454)) << std::endl;
std::cout << (e->insert(357)) << std::endl;
std::cout << (e->remove(274)) << std::endl;
*c=*a;
c->printPretty();
std::cout << (c->remove(196)) << std::endl;
std::cout << (c->remove(326)) << std::endl;
std::cout << (c->insert(378)) << std::endl;
std::cout << (a->insert(85)) << std::endl;
b->printPretty();
*e=*c;
std::cout << (a->remove(471)) << std::endl;
std::cout << (e->remove(378)) << std::endl;
*b=*e;
std::cout << (d->insert(339)) << std::endl;
std::cout << (b->insert(356)) << std::endl;
b->printPretty();
std::cout << (d->remove(203)) << std::endl;
std::cout << (a->remove(85)) << std::endl;
d->printPretty();
std::cout << (d->insert(103)) << std::endl;
std::cout << (c->remove(36)) << std::endl;
std::cout << (a->insert(207)) << std::endl;
std::cout << (c->insert(329)) << std::endl;
*a=*d;
std::cout << (a->remove(131)) << std::endl;
std::cout << (a->insert(103)) << std::endl;
std::cout << (c->remove(482)) << std::endl;
*b=*c;
std::cout << (a->insert(339)) << std::endl;
std::cout << (c->insert(329)) << std::endl;
*d=*d;
std::cout << (a->remove(138)) << std::endl;
std::cout << (a->remove(454)) << std::endl;
std::cout << (a->remove(103)) << std::endl;
c->printPretty();
std::cout << (c->insert(126)) << std::endl;
std::cout << (b->insert(275)) << std::endl;
std::cout << (a->insert(474)) << std::endl;
e->printPretty();
*d=*e;
c->printPretty();
c->printPretty();
c->printPretty();
*a=*c;
std::cout << (a->remove(330)) << std::endl;
a->printPretty();
std::cout << (a->remove(1)) << std::endl;
std::cout << (a->remove(378)) << std::endl;
std::cout << (e->insert(115)) << std::endl;
b->printPretty();
std::cout << (e->insert(115)) << std::endl;
std::cout << (e->insert(115)) << std::endl;
std::cout << (b->remove(329)) << std::endl;
std::cout << (a->insert(225)) << std::endl;
std::cout << (a->remove(126)) << std::endl;
std::cout << (e->remove(302)) << std::endl;
b->printPretty();
*a=*a;
std::cout << (c->remove(353)) << std::endl;
std::cout << (c->remove(378)) << std::endl;
std::cout << (e->insert(115)) << std::endl;
std::cout << (c->remove(37)) << std::endl;
std::cout << (a->remove(225)) << std::endl;
std::cout << (e->insert(115)) << std::endl;
std::cout << (b->insert(154)) << std::endl;
std::cout << (e->insert(150)) << std::endl;
*a=*a;
std::cout << (d->insert(479)) << std::endl;
*c=*d;
*b=*d;
std::cout << (e->remove(150)) << std::endl;
std::cout << (a->insert(487)) << std::endl;
std::cout << (d->insert(479)) << std::endl;
*d=*a;
std::cout << (a->remove(329)) << std::endl;
std::cout << (c->insert(479)) << std::endl;
std::cout << (c->remove(479)) << std::endl;
std::cout << (a->remove(135)) << std::endl;
std::cout << (b->remove(140)) << std::endl;
*d=*b;
b->printPretty();
std::cout << (b->insert(479)) << std::endl;
e->printPretty();
std::cout << (a->insert(487)) << std::endl;
std::cout << (b->remove(136)) << std::endl;
std::cout << (d->insert(134)) << std::endl;
*b=*e;
std::cout << (b->insert(115)) << std::endl;
std::cout << (e->remove(477)) << std::endl;
std::cout << (b->insert(115)) << std::endl;
std::cout << (d->insert(134)) << std::endl;
std::cout << (c->insert(493)) << std::endl;
std::cout << (e->insert(115)) << std::endl;
*c=*d;
std::cout << (b->insert(115)) << std::endl;
std::cout << (c->insert(121)) << std::endl;
*a=*e;
std::cout << (d->remove(134)) << std::endl;
c->printPretty();
*b=*c;
c->printPretty();
std::cout << (b->remove(134)) << std::endl;
std::cout << (c->insert(440)) << std::endl;
std::cout << (d->insert(479)) << std::endl;
a->printPretty();
*d=*c;
std::cout << (a->remove(115)) << std::endl;
*e=*d;
std::cout << (d->insert(121)) << std::endl;
e->printPretty();
d->printPretty();
std::cout << (d->remove(323)) << std::endl;
std::cout << (c->remove(440)) << std::endl;
c->printPretty();
std::cout << (d->remove(37)) << std::endl;
std::cout << (c->remove(479)) << std::endl;
std::cout << (e->insert(12)) << std::endl;
std::cout << (c->remove(121)) << std::endl;
*b=*b;
std::cout << (e->insert(134)) << std::endl;
std::cout << (c->remove(6)) << std::endl;
*e=*d;
e->printPretty();
std::cout << (d->remove(479)) << std::endl;
std::cout << (c->remove(134)) << std::endl;
std::cout << (d->remove(152)) << std::endl;
std::cout << (b->insert(368)) << std::endl;
std::cout << (d->insert(321)) << std::endl;
std::cout << (e->insert(472)) << std::endl;
b->printPretty();
std::cout << (b->insert(368)) << std::endl;
std::cout << (d->remove(440)) << std::endl;
std::cout << (c->insert(115)) << std::endl;
std::cout << (c->remove(173)) << std::endl;
std::cout << (e->remove(186)) << std::endl;
std::cout << (b->remove(121)) << std::endl;
d->printPretty();
std::cout << (a->remove(189)) << std::endl;
*c=*c;
std::cout << (b->insert(479)) << std::endl;
std::cout << (c->insert(115)) << std::endl;
*a=*a;
std::cout << (a->remove(403)) << std::endl;
std::cout << (b->remove(328)) << std::endl;
std::cout << (c->insert(119)) << std::endl;
std::cout << (c->insert(119)) << std::endl;
*c=*a;
std::cout << (c->remove(51)) << std::endl;
std::cout << (b->remove(479)) << std::endl;
std::cout << (e->insert(265)) << std::endl;
std::cout << (c->remove(174)) << std::endl;
std::cout << (b->remove(165)) << std::endl;
std::cout << (c->remove(355)) << std::endl;
c->printPretty();
*b=*e;
std::cout << (b->remove(121)) << std::endl;
std::cout << (b->insert(479)) << std::endl;
*d=*b;
std::cout << (b->remove(170)) << std::endl;
std::cout << (b->remove(479)) << std::endl;
std::cout << (d->remove(345)) << std::endl;
std::cout << (b->remove(440)) << std::endl;
std::cout << (e->insert(121)) << std::endl;
c->printPretty();
std::cout << (d->remove(440)) << std::endl;
*b=*b;
std::cout << (d->insert(265)) << std::endl;
std::cout << (a->insert(477)) << std::endl;
std::cout << (e->remove(12)) << std::endl;
a->printPretty();
*a=*d;
std::cout << (b->insert(216)) << std::endl;
std::cout << (b->insert(302)) << std::endl;
std::cout << (c->remove(286)) << std::endl;
std::cout << (a->insert(472)) << std::endl;
std::cout << (c->remove(19)) << std::endl;
std::cout << (d->remove(265)) << std::endl;
std::cout << (a->insert(265)) << std::endl;
*a=*b;
c->printPretty();
std::cout << (d->remove(198)) << std::endl;
std::cout << (b->remove(260)) << std::endl;
*d=*a;
std::cout << (b->remove(265)) << std::endl;
std::cout << (e->insert(121)) << std::endl;
std::cout << (b->insert(354)) << std::endl;
a->printPretty();
std::cout << (b->remove(256)) << std::endl;
std::cout << (e->insert(149)) << std::endl;
std::cout << (d->remove(172)) << std::endl;
std::cout << (a->remove(134)) << std::endl;
std::cout << (d->insert(117)) << std::endl;
*b=*e;
*a=*e;
std::cout << (b->insert(265)) << std::endl;
std::cout << (b->remove(472)) << std::endl;
std::cout << (a->insert(134)) << std::endl;
std::cout << (b->remove(479)) << std::endl;
std::cout << (a->insert(185)) << std::endl;
std::cout << (b->remove(216)) << std::endl;
*c=*c;
std::cout << (e->remove(307)) << std::endl;
std::cout << (e->insert(465)) << std::endl;
std::cout << (a->insert(479)) << std::endl;
std::cout << (c->insert(480)) << std::endl;
std::cout << (c->insert(278)) << std::endl;
std::cout << (c->insert(49)) << std::endl;
*d=*b;
std::cout << (b->remove(414)) << std::endl;
std::cout << (c->insert(480)) << std::endl;
std::cout << (e->remove(440)) << std::endl;
*d=*d;
std::cout << (d->insert(470)) << std::endl;
std::cout << (e->insert(84)) << std::endl;
std::cout << (c->insert(278)) << std::endl;
*a=*d;
std::cout << (d->insert(121)) << std::endl;
*a=*b;
std::cout << (e->insert(472)) << std::endl;
std::cout << (b->remove(299)) << std::endl;
std::cout << (a->remove(294)) << std::endl;
std::cout << (b->remove(453)) << std::endl;
b->printPretty();
std::cout << (a->insert(3)) << std::endl;
d->printPretty();
std::cout << (e->insert(265)) << std::endl;
std::cout << (c->remove(2)) << std::endl;
*d=*b;
c->printPretty();
std::cout << (a->remove(440)) << std::endl;
std::cout << (c->insert(66)) << std::endl;
std::cout << (a->insert(133)) << std::endl;
std::cout << (c->insert(13)) << std::endl;
std::cout << (c->remove(480)) << std::endl;
std::cout << (a->remove(358)) << std::endl;
std::cout << (d->remove(134)) << std::endl;
std::cout << (b->remove(149)) << std::endl;
std::cout << (e->remove(291)) << std::endl;
d->printPretty();
a->printPretty();
std::cout << (e->insert(284)) << std::endl;
std::cout << (b->remove(482)) << std::endl;
*e=*c;
std::cout << (b->remove(338)) << std::endl;
std::cout << (e->remove(127)) << std::endl;
std::cout << (e->insert(483)) << std::endl;
std::cout << (e->insert(66)) << std::endl;
std::cout << (c->remove(45)) << std::endl;
std::cout << (d->remove(484)) << std::endl;
*c=*b;
d->printPretty();
b->printPretty();
*a=*b;
std::cout << (e->remove(13)) << std::endl;
b->printPretty();
std::cout << (d->remove(396)) << std::endl;
d->printPretty();
std::cout << (a->remove(235)) << std::endl;
std::cout << (d->insert(121)) << std::endl;
std::cout << (d->insert(265)) << std::endl;
*c=*b;
*b=*e;
std::cout << (b->insert(483)) << std::endl;
std::cout << (d->insert(414)) << std::endl;
std::cout << (e->insert(278)) << std::endl;
b->printPretty();
std::cout << (d->insert(111)) << std::endl;
*b=*c;
*c=*e;
std::cout << (b->remove(121)) << std::endl;
*b=*c;
a->printPretty();
std::cout << (d->insert(414)) << std::endl;
std::cout << (e->remove(238)) << std::endl;
std::cout << (c->remove(280)) << std::endl;
std::cout << (b->remove(366)) << std::endl;
e->printPretty();
std::cout << (e->remove(278)) << std::endl;
*a=*d;
*b=*b;
c->printPretty();
std::cout << (d->remove(25)) << std::endl;
std::cout << (a->remove(74)) << std::endl;
std::cout << (d->insert(468)) << std::endl;
std::cout << (c->remove(49)) << std::endl;
*a=*a;
std::cout << (e->remove(66)) << std::endl;
std::cout << (b->remove(49)) << std::endl;
std::cout << (e->remove(49)) << std::endl;
std::cout << (b->remove(260)) << std::endl;
d->printPretty();
*c=*e;
std::cout << (c->insert(405)) << std::endl;
std::cout << (d->remove(468)) << std::endl;
d->printPretty();
std::cout << (e->insert(353)) << std::endl;
std::cout << (c->remove(483)) << std::endl;
std::cout << (e->insert(353)) << std::endl;
std::cout << (d->remove(354)) << std::endl;
std::cout << (e->remove(482)) << std::endl;
std::cout << (e->remove(483)) << std::endl;
e->printPretty();
std::cout << (d->remove(121)) << std::endl;
std::cout << (d->insert(440)) << std::endl;
std::cout << (e->remove(353)) << std::endl;
std::cout << (a->remove(414)) << std::endl;
a->printPretty();
std::cout << (c->remove(490)) << std::endl;
std::cout << (a->remove(43)) << std::endl;
a->printPretty();
std::cout << (c->remove(88)) << std::endl;
std::cout << (b->remove(483)) << std::endl;
c->printPretty();
std::cout << (c->insert(405)) << std::endl;
return 0;
}