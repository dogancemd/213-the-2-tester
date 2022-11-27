#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
std::cout << (a->remove(186)) << std::endl;
a->printPretty();
ScapegoatTree<int> *c=new ScapegoatTree<int>;
ScapegoatTree<int> *d=new ScapegoatTree<int>;
std::cout << (c->insert(407)) << std::endl;
*d=*c;
ScapegoatTree<int> *e=new ScapegoatTree<int>(*d);
std::cout << (a->remove(186)) << std::endl;
b->printPretty();
std::cout << (d->remove(407)) << std::endl;
std::cout << (e->remove(407)) << std::endl;
c->printPretty();
*e=*d;
c->printPretty();
*e=*b;
*b=*c;
*a=*a;
e->printPretty();
a->printPretty();
std::cout << (b->insert(407)) << std::endl;
std::cout << (c->insert(408)) << std::endl;
std::cout << (c->remove(357)) << std::endl;
std::cout << (b->insert(368)) << std::endl;
e->printPretty();
std::cout << (d->remove(306)) << std::endl;
std::cout << (b->insert(387)) << std::endl;
std::cout << (d->insert(452)) << std::endl;
std::cout << (b->remove(407)) << std::endl;
std::cout << (d->insert(151)) << std::endl;
std::cout << (b->insert(163)) << std::endl;
std::cout << (d->insert(151)) << std::endl;
std::cout << (d->insert(353)) << std::endl;
std::cout << (b->remove(67)) << std::endl;
d->printPretty();
std::cout << (c->insert(408)) << std::endl;
std::cout << (e->remove(456)) << std::endl;
std::cout << (c->insert(407)) << std::endl;
std::cout << (d->insert(397)) << std::endl;
*d=*e;
std::cout << (b->insert(387)) << std::endl;
b->printPretty();
std::cout << (b->remove(163)) << std::endl;
std::cout << (e->remove(165)) << std::endl;
a->printPretty();
std::cout << (d->remove(223)) << std::endl;
std::cout << (e->remove(249)) << std::endl;
std::cout << (b->insert(368)) << std::endl;
std::cout << (b->insert(387)) << std::endl;
*a=*e;
std::cout << (b->insert(387)) << std::endl;
*d=*e;
std::cout << (b->insert(394)) << std::endl;
std::cout << (d->remove(106)) << std::endl;
std::cout << (c->remove(408)) << std::endl;
e->printPretty();
std::cout << (d->insert(358)) << std::endl;
std::cout << (c->remove(407)) << std::endl;
std::cout << (b->insert(368)) << std::endl;
*b=*a;
std::cout << (e->remove(85)) << std::endl;
*d=*e;
std::cout << (d->insert(458)) << std::endl;
std::cout << (a->insert(482)) << std::endl;
*c=*a;
*b=*c;
std::cout << (c->remove(482)) << std::endl;
b->printPretty();
std::cout << (d->remove(458)) << std::endl;
std::cout << (a->remove(398)) << std::endl;
*b=*c;
d->printPretty();
c->printPretty();
std::cout << (a->remove(482)) << std::endl;
std::cout << (d->remove(87)) << std::endl;
std::cout << (a->insert(92)) << std::endl;
e->printPretty();
std::cout << (a->insert(420)) << std::endl;
std::cout << (a->insert(351)) << std::endl;
std::cout << (a->remove(351)) << std::endl;
std::cout << (e->remove(492)) << std::endl;
std::cout << (b->remove(473)) << std::endl;
a->printPretty();
c->printPretty();
std::cout << (d->remove(442)) << std::endl;
*a=*d;
std::cout << (c->insert(37)) << std::endl;
b->printPretty();
std::cout << (b->remove(249)) << std::endl;
std::cout << (c->remove(204)) << std::endl;
*e=*d;
*b=*e;
std::cout << (a->remove(462)) << std::endl;
std::cout << (a->remove(469)) << std::endl;
std::cout << (d->insert(369)) << std::endl;
std::cout << (c->insert(48)) << std::endl;
std::cout << (e->insert(75)) << std::endl;
std::cout << (c->remove(209)) << std::endl;
std::cout << (d->remove(188)) << std::endl;
c->printPretty();
std::cout << (c->remove(48)) << std::endl;
std::cout << (c->remove(133)) << std::endl;
std::cout << (c->remove(234)) << std::endl;
std::cout << (d->remove(369)) << std::endl;
std::cout << (c->remove(14)) << std::endl;
std::cout << (e->remove(75)) << std::endl;
*d=*c;
a->printPretty();
b->printPretty();
std::cout << (a->insert(299)) << std::endl;
std::cout << (c->remove(37)) << std::endl;
std::cout << (c->remove(78)) << std::endl;
c->printPretty();
std::cout << (e->remove(232)) << std::endl;
std::cout << (d->remove(360)) << std::endl;
std::cout << (d->insert(37)) << std::endl;
std::cout << (a->remove(299)) << std::endl;
*b=*e;
std::cout << (d->remove(305)) << std::endl;
std::cout << (d->remove(482)) << std::endl;
d->printPretty();
b->printPretty();
std::cout << (b->insert(475)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << (b->insert(475)) << std::endl;
std::cout << (b->remove(475)) << std::endl;
std::cout << (b->remove(50)) << std::endl;
*d=*b;
a->printPretty();
std::cout << (b->remove(202)) << std::endl;
std::cout << (b->remove(484)) << std::endl;
std::cout << (c->insert(365)) << std::endl;
a->printPretty();
std::cout << (c->insert(365)) << std::endl;
std::cout << (e->remove(238)) << std::endl;
std::cout << (c->insert(365)) << std::endl;
std::cout << (d->insert(240)) << std::endl;
*c=*c;
std::cout << (d->insert(248)) << std::endl;
*e=*a;
std::cout << (c->remove(365)) << std::endl;
a->printPretty();
std::cout << (c->insert(482)) << std::endl;
std::cout << (d->remove(240)) << std::endl;
std::cout << (b->remove(114)) << std::endl;
std::cout << (d->insert(481)) << std::endl;
std::cout << (d->insert(481)) << std::endl;
std::cout << (c->insert(109)) << std::endl;
*c=*c;
std::cout << (c->remove(283)) << std::endl;
a->printPretty();
std::cout << (a->remove(469)) << std::endl;
*d=*d;
*d=*d;
std::cout << (a->remove(256)) << std::endl;
a->printPretty();
std::cout << (b->insert(411)) << std::endl;
std::cout << (b->remove(411)) << std::endl;
std::cout << (e->remove(428)) << std::endl;
c->printPretty();
a->printPretty();
std::cout << (b->insert(438)) << std::endl;
std::cout << (e->remove(130)) << std::endl;
std::cout << (b->remove(323)) << std::endl;
std::cout << (c->insert(482)) << std::endl;
std::cout << (e->insert(440)) << std::endl;
std::cout << (e->remove(239)) << std::endl;
std::cout << (b->insert(102)) << std::endl;
c->printPretty();
std::cout << (c->insert(485)) << std::endl;
*d=*b;
e->printPretty();
std::cout << (a->insert(96)) << std::endl;
d->printPretty();
std::cout << (c->remove(337)) << std::endl;
std::cout << (b->remove(438)) << std::endl;
std::cout << (b->insert(16)) << std::endl;
std::cout << (e->remove(1)) << std::endl;
d->printPretty();
d->printPretty();
std::cout << (b->insert(340)) << std::endl;
std::cout << (c->remove(485)) << std::endl;
std::cout << (d->insert(102)) << std::endl;
*e=*a;
std::cout << (e->insert(96)) << std::endl;
std::cout << (d->insert(251)) << std::endl;
std::cout << (a->remove(96)) << std::endl;
*c=*d;
b->printPretty();
std::cout << (b->insert(225)) << std::endl;
std::cout << (b->insert(309)) << std::endl;
c->printPretty();
std::cout << (d->insert(438)) << std::endl;
std::cout << (a->insert(158)) << std::endl;
c->printPretty();
std::cout << (e->insert(443)) << std::endl;
*d=*b;
std::cout << (a->insert(49)) << std::endl;
a->printPretty();
std::cout << (d->insert(188)) << std::endl;
d->printPretty();
a->printPretty();
c->printPretty();
e->printPretty();
std::cout << (a->insert(49)) << std::endl;
std::cout << (c->insert(251)) << std::endl;
std::cout << (b->insert(16)) << std::endl;
std::cout << (e->remove(96)) << std::endl;
*c=*a;
std::cout << (d->insert(16)) << std::endl;
std::cout << (a->insert(49)) << std::endl;
std::cout << (c->insert(158)) << std::endl;
d->printPretty();
std::cout << (d->remove(102)) << std::endl;
std::cout << (e->remove(183)) << std::endl;
std::cout << (d->insert(309)) << std::endl;
d->printPretty();
std::cout << (c->insert(215)) << std::endl;
e->printPretty();
*d=*d;
std::cout << (e->insert(317)) << std::endl;
*e=*d;
d->printPretty();
std::cout << (b->remove(114)) << std::endl;
std::cout << (b->remove(238)) << std::endl;
std::cout << (b->insert(443)) << std::endl;
std::cout << (c->insert(17)) << std::endl;
b->printPretty();
std::cout << (b->insert(448)) << std::endl;
*c=*a;
std::cout << (e->remove(225)) << std::endl;
std::cout << (a->insert(49)) << std::endl;
std::cout << (b->insert(309)) << std::endl;
b->printPretty();
std::cout << (b->insert(225)) << std::endl;
std::cout << (e->insert(188)) << std::endl;
*c=*b;
std::cout << (e->insert(188)) << std::endl;
std::cout << (d->insert(170)) << std::endl;
a->printPretty();
*b=*b;
b->printPretty();
std::cout << (a->remove(410)) << std::endl;
a->printPretty();
std::cout << (d->remove(436)) << std::endl;
std::cout << (c->remove(303)) << std::endl;
std::cout << (c->remove(443)) << std::endl;
std::cout << (b->insert(448)) << std::endl;
std::cout << (d->insert(188)) << std::endl;
*a=*d;
std::cout << (d->remove(340)) << std::endl;
std::cout << (b->insert(102)) << std::endl;
c->printPretty();
std::cout << (d->remove(281)) << std::endl;
b->printPretty();
std::cout << (e->insert(29)) << std::endl;
*a=*e;
*d=*b;
c->printPretty();
std::cout << (a->remove(16)) << std::endl;
c->printPretty();
std::cout << (d->remove(309)) << std::endl;
*a=*e;
std::cout << (b->remove(19)) << std::endl;
std::cout << (b->remove(72)) << std::endl;
std::cout << (c->insert(340)) << std::endl;
e->printPretty();
*d=*a;
b->printPretty();
e->printPretty();
std::cout << (a->remove(285)) << std::endl;
std::cout << (e->remove(381)) << std::endl;
*c=*c;
std::cout << (e->remove(188)) << std::endl;
*b=*e;
std::cout << (b->insert(29)) << std::endl;
a->printPretty();
*e=*c;
std::cout << (b->remove(29)) << std::endl;
std::cout << (e->insert(166)) << std::endl;
std::cout << (a->remove(393)) << std::endl;
std::cout << (b->remove(245)) << std::endl;
std::cout << (e->insert(137)) << std::endl;
std::cout << (c->insert(225)) << std::endl;
std::cout << (d->remove(400)) << std::endl;
*a=*e;
std::cout << (a->insert(258)) << std::endl;
a->printPretty();
std::cout << (e->insert(448)) << std::endl;
d->printPretty();
*d=*e;
std::cout << (e->remove(340)) << std::endl;
std::cout << (c->insert(225)) << std::endl;
std::cout << (c->insert(102)) << std::endl;
std::cout << (c->remove(63)) << std::endl;
std::cout << (a->insert(309)) << std::endl;
std::cout << (c->insert(448)) << std::endl;
b->printPretty();
std::cout << (b->insert(42)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << (b->remove(126)) << std::endl;
d->printPretty();
std::cout << (b->remove(469)) << std::endl;
std::cout << (c->insert(340)) << std::endl;
std::cout << (c->insert(102)) << std::endl;
*b=*a;
*d=*e;
*e=*a;
std::cout << (e->remove(219)) << std::endl;
std::cout << (a->insert(258)) << std::endl;
*e=*a;
std::cout << (b->remove(248)) << std::endl;
std::cout << (a->insert(356)) << std::endl;
std::cout << (b->insert(144)) << std::endl;
std::cout << (a->remove(159)) << std::endl;
std::cout << (a->remove(448)) << std::endl;
c->printPretty();
*b=*b;
std::cout << (c->remove(491)) << std::endl;
std::cout << (e->remove(49)) << std::endl;
std::cout << (c->remove(240)) << std::endl;
b->printPretty();
std::cout << (c->insert(51)) << std::endl;
std::cout << (a->remove(166)) << std::endl;
std::cout << (d->remove(479)) << std::endl;
e->printPretty();
std::cout << (d->insert(16)) << std::endl;
d->printPretty();
std::cout << (b->remove(309)) << std::endl;
e->printPretty();
std::cout << (d->insert(312)) << std::endl;
std::cout << (b->insert(448)) << std::endl;
std::cout << (b->remove(121)) << std::endl;
std::cout << (e->remove(448)) << std::endl;
*c=*a;
std::cout << (e->remove(340)) << std::endl;
std::cout << (c->remove(102)) << std::endl;
std::cout << (b->remove(441)) << std::endl;
std::cout << (d->insert(448)) << std::endl;
e->printPretty();
*a=*a;
std::cout << (b->remove(369)) << std::endl;
e->printPretty();
*c=*a;
*b=*b;
std::cout << (a->remove(149)) << std::endl;
std::cout << (b->remove(131)) << std::endl;
std::cout << (a->remove(102)) << std::endl;
std::cout << (c->insert(16)) << std::endl;
a->printPretty();
std::cout << (b->insert(166)) << std::endl;
std::cout << (a->remove(264)) << std::endl;
a->printPretty();
*a=*d;
std::cout << (e->remove(309)) << std::endl;
c->printPretty();
std::cout << (b->remove(137)) << std::endl;
std::cout << (e->remove(401)) << std::endl;
std::cout << (e->insert(225)) << std::endl;
std::cout << (e->remove(166)) << std::endl;
*c=*c;
a->printPretty();
std::cout << (c->remove(340)) << std::endl;
std::cout << (d->insert(81)) << std::endl;
std::cout << (b->insert(258)) << std::endl;
std::cout << (b->insert(258)) << std::endl;
std::cout << (e->remove(16)) << std::endl;
std::cout << (d->insert(270)) << std::endl;
b->printPretty();
std::cout << (d->remove(398)) << std::endl;
*a=*e;
std::cout << (d->remove(333)) << std::endl;
std::cout << (d->insert(312)) << std::endl;
std::cout << (c->insert(311)) << std::endl;
c->printPretty();
std::cout << (b->insert(102)) << std::endl;
std::cout << (b->remove(119)) << std::endl;
c->printPretty();
b->printPretty();
*e=*b;
std::cout << (a->insert(137)) << std::endl;
std::cout << (e->remove(11)) << std::endl;
std::cout << (b->remove(16)) << std::endl;
std::cout << (a->remove(286)) << std::endl;
std::cout << (e->remove(448)) << std::endl;
std::cout << (a->insert(258)) << std::endl;
std::cout << (c->insert(137)) << std::endl;
std::cout << (c->remove(11)) << std::endl;
a->printPretty();
std::cout << (c->insert(253)) << std::endl;
std::cout << (a->remove(258)) << std::endl;
std::cout << (d->insert(398)) << std::endl;
*e=*a;
*a=*e;
std::cout << (a->insert(137)) << std::endl;
*a=*b;
*a=*a;
std::cout << (c->insert(356)) << std::endl;
*b=*e;
std::cout << (a->insert(144)) << std::endl;
e->printPretty();
std::cout << (b->insert(137)) << std::endl;
std::cout << (e->insert(225)) << std::endl;
*e=*e;
std::cout << (d->remove(398)) << std::endl;
std::cout << (d->remove(309)) << std::endl;
std::cout << (c->insert(16)) << std::endl;
std::cout << (b->remove(252)) << std::endl;
*b=*b;
std::cout << (d->remove(166)) << std::endl;
std::cout << (b->insert(225)) << std::endl;
d->printPretty();
std::cout << (d->remove(225)) << std::endl;
std::cout << (b->remove(324)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << (a->insert(34)) << std::endl;
std::cout << (d->remove(102)) << std::endl;
std::cout << (e->insert(225)) << std::endl;
std::cout << (e->remove(137)) << std::endl;
a->printPretty();
*a=*a;
std::cout << (d->insert(79)) << std::endl;
std::cout << (a->insert(372)) << std::endl;
std::cout << (d->remove(81)) << std::endl;
*d=*b;
std::cout << (b->insert(137)) << std::endl;
std::cout << (d->insert(225)) << std::endl;
std::cout << (d->insert(102)) << std::endl;
std::cout << (e->insert(102)) << std::endl;
std::cout << (e->remove(225)) << std::endl;
*c=*d;
a->printPretty();
*d=*d;
std::cout << (c->remove(137)) << std::endl;
std::cout << (a->remove(166)) << std::endl;
std::cout << (b->remove(225)) << std::endl;
std::cout << (b->remove(208)) << std::endl;
std::cout << (b->remove(173)) << std::endl;
std::cout << (d->insert(20)) << std::endl;
std::cout << (e->remove(102)) << std::endl;
std::cout << (a->insert(89)) << std::endl;
std::cout << (c->insert(225)) << std::endl;
std::cout << (e->insert(339)) << std::endl;
c->printPretty();
std::cout << (d->remove(225)) << std::endl;
std::cout << (b->remove(269)) << std::endl;
*e=*a;
std::cout << (b->remove(102)) << std::endl;
d->printPretty();
std::cout << (e->insert(320)) << std::endl;
std::cout << (a->insert(225)) << std::endl;
std::cout << (b->insert(142)) << std::endl;
*e=*a;
std::cout << (e->insert(129)) << std::endl;
std::cout << (e->insert(372)) << std::endl;
a->printPretty();
std::cout << (e->remove(102)) << std::endl;
std::cout << (a->insert(448)) << std::endl;
std::cout << (c->insert(102)) << std::endl;
b->printPretty();
std::cout << (e->remove(337)) << std::endl;
*b=*a;
std::cout << (e->insert(129)) << std::endl;
e->printPretty();
a->printPretty();
std::cout << (b->insert(259)) << std::endl;
std::cout << (d->remove(137)) << std::endl;
*e=*a;
std::cout << (d->remove(304)) << std::endl;
std::cout << (b->remove(448)) << std::endl;
std::cout << (b->insert(34)) << std::endl;
std::cout << (d->remove(102)) << std::endl;
std::cout << (d->insert(20)) << std::endl;
std::cout << (c->remove(312)) << std::endl;
std::cout << (a->insert(414)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << (d->remove(481)) << std::endl;
std::cout << (b->insert(340)) << std::endl;
*b=*b;
*c=*a;
std::cout << (e->insert(372)) << std::endl;
*a=*c;
std::cout << (e->insert(263)) << std::endl;
a->printPretty();
std::cout << (a->remove(102)) << std::endl;
std::cout << (e->insert(315)) << std::endl;
std::cout << (a->remove(414)) << std::endl;
std::cout << (a->remove(340)) << std::endl;
std::cout << (b->remove(151)) << std::endl;
*c=*c;
a->printPretty();
*d=*c;
std::cout << (c->insert(158)) << std::endl;
a->printPretty();
*d=*c;
std::cout << (a->remove(258)) << std::endl;
std::cout << (b->insert(144)) << std::endl;
std::cout << (e->remove(177)) << std::endl;
e->printPretty();
a->printPretty();
std::cout << (c->insert(340)) << std::endl;
std::cout << (b->insert(34)) << std::endl;
std::cout << (c->remove(414)) << std::endl;
std::cout << (e->remove(34)) << std::endl;
std::cout << (d->insert(340)) << std::endl;
std::cout << (e->remove(89)) << std::endl;
std::cout << (d->remove(105)) << std::endl;
std::cout << (e->insert(251)) << std::endl;
std::cout << (b->insert(259)) << std::endl;
std::cout << (a->remove(225)) << std::endl;
std::cout << (c->remove(34)) << std::endl;
std::cout << (a->remove(34)) << std::endl;
std::cout << (a->insert(89)) << std::endl;
d->printPretty();
d->printPretty();
std::cout << (a->remove(372)) << std::endl;
std::cout << (d->remove(398)) << std::endl;
std::cout << (b->remove(451)) << std::endl;
d->printPretty();
std::cout << (e->insert(459)) << std::endl;
*e=*c;
std::cout << (e->insert(399)) << std::endl;
std::cout << (c->insert(324)) << std::endl;
std::cout << (d->insert(161)) << std::endl;
std::cout << (d->insert(446)) << std::endl;
*e=*e;
std::cout << (d->remove(448)) << std::endl;
std::cout << (a->insert(33)) << std::endl;
std::cout << (e->insert(491)) << std::endl;
std::cout << (d->remove(258)) << std::endl;
std::cout << (a->remove(89)) << std::endl;
*a=*c;
std::cout << (d->remove(372)) << std::endl;
*d=*c;
a->printPretty();
std::cout << (a->remove(102)) << std::endl;
std::cout << (b->insert(89)) << std::endl;
std::cout << (e->insert(372)) << std::endl;
std::cout << (c->insert(372)) << std::endl;
d->printPretty();
std::cout << (b->remove(259)) << std::endl;
std::cout << (c->insert(158)) << std::endl;
std::cout << (d->insert(340)) << std::endl;
std::cout << (b->remove(34)) << std::endl;
std::cout << (b->insert(62)) << std::endl;
a->printPretty();
std::cout << (b->insert(372)) << std::endl;
std::cout << (b->insert(225)) << std::endl;
std::cout << (a->insert(336)) << std::endl;
d->printPretty();
*d=*d;
e->printPretty();
std::cout << (b->insert(234)) << std::endl;
std::cout << (b->remove(432)) << std::endl;
std::cout << (b->remove(369)) << std::endl;
e->printPretty();
std::cout << (c->insert(448)) << std::endl;
std::cout << (a->insert(336)) << std::endl;
c->printPretty();
*c=*d;
a->printPretty();
std::cout << (b->insert(124)) << std::endl;
std::cout << (e->remove(494)) << std::endl;
std::cout << (b->insert(62)) << std::endl;
*e=*a;
std::cout << (b->remove(62)) << std::endl;
std::cout << (a->remove(474)) << std::endl;
std::cout << (e->remove(336)) << std::endl;
std::cout << (c->insert(144)) << std::endl;
*d=*b;
std::cout << (c->insert(421)) << std::endl;
std::cout << (b->remove(234)) << std::endl;
std::cout << (a->remove(389)) << std::endl;
std::cout << (c->insert(89)) << std::endl;
*c=*e;
*c=*d;
c->printPretty();
*b=*b;
std::cout << (e->insert(465)) << std::endl;
*d=*a;
std::cout << (e->insert(131)) << std::endl;
*b=*e;
*a=*d;
std::cout << (c->remove(89)) << std::endl;
*d=*a;
std::cout << (b->remove(336)) << std::endl;
std::cout << (e->insert(100)) << std::endl;
std::cout << (e->insert(336)) << std::endl;
std::cout << (a->insert(448)) << std::endl;
std::cout << (d->remove(374)) << std::endl;
std::cout << (c->insert(395)) << std::endl;
std::cout << (b->remove(144)) << std::endl;
b->printPretty();
*d=*a;
d->printPretty();
std::cout << (d->insert(258)) << std::endl;
std::cout << (e->insert(324)) << std::endl;
std::cout << (c->remove(395)) << std::endl;
*c=*e;
std::cout << (d->remove(42)) << std::endl;
e->printPretty();
std::cout << (e->remove(418)) << std::endl;
std::cout << (a->remove(158)) << std::endl;
c->printPretty();
std::cout << (c->remove(136)) << std::endl;
std::cout << (c->insert(448)) << std::endl;
std::cout << (b->remove(340)) << std::endl;
std::cout << (e->remove(48)) << std::endl;
std::cout << (c->insert(299)) << std::endl;
*c=*c;
std::cout << (d->insert(156)) << std::endl;
std::cout << (a->insert(103)) << std::endl;
std::cout << (e->insert(225)) << std::endl;
std::cout << (a->insert(89)) << std::endl;
c->printPretty();
std::cout << (d->insert(156)) << std::endl;
std::cout << (c->insert(225)) << std::endl;
std::cout << (c->insert(372)) << std::endl;
d->printPretty();
std::cout << (e->remove(324)) << std::endl;
std::cout << (c->remove(144)) << std::endl;
e->printPretty();
std::cout << (b->insert(489)) << std::endl;
b->printPretty();
std::cout << (a->insert(33)) << std::endl;
*e=*c;
std::cout << (e->remove(28)) << std::endl;
std::cout << (c->remove(336)) << std::endl;
d->printPretty();
std::cout << (a->insert(324)) << std::endl;
std::cout << (a->insert(87)) << std::endl;
std::cout << (c->insert(126)) << std::endl;
b->printPretty();
e->printPretty();
*c=*a;
std::cout << (d->insert(89)) << std::endl;
std::cout << (e->insert(225)) << std::endl;
b->printPretty();
*d=*a;
*a=*a;
b->printPretty();
std::cout << (e->remove(82)) << std::endl;
std::cout << (a->insert(247)) << std::endl;
*d=*c;
std::cout << (c->remove(186)) << std::endl;
std::cout << (b->remove(89)) << std::endl;
c->printPretty();
std::cout << (e->insert(456)) << std::endl;
std::cout << (b->remove(324)) << std::endl;
std::cout << (d->insert(336)) << std::endl;
std::cout << (e->insert(324)) << std::endl;
std::cout << (d->remove(33)) << std::endl;
std::cout << (c->insert(98)) << std::endl;
std::cout << (a->insert(43)) << std::endl;
std::cout << (d->remove(258)) << std::endl;
c->printPretty();
std::cout << (a->insert(288)) << std::endl;
std::cout << (d->remove(87)) << std::endl;
std::cout << (e->remove(288)) << std::endl;
e->printPretty();
a->printPretty();
c->printPretty();
b->printPretty();
std::cout << (c->remove(130)) << std::endl;
std::cout << (a->insert(12)) << std::endl;
std::cout << (a->remove(69)) << std::endl;
std::cout << (b->remove(81)) << std::endl;
e->printPretty();
b->printPretty();
*c=*d;
std::cout << (c->insert(326)) << std::endl;
std::cout << (a->remove(481)) << std::endl;
std::cout << (a->remove(288)) << std::endl;
c->printPretty();
b->printPretty();
d->printPretty();
std::cout << (d->insert(308)) << std::endl;
std::cout << (b->remove(25)) << std::endl;
std::cout << (a->remove(267)) << std::endl;
std::cout << (c->remove(372)) << std::endl;
*a=*d;
std::cout << (e->insert(65)) << std::endl;
*d=*e;
std::cout << (e->remove(304)) << std::endl;
std::cout << (b->insert(448)) << std::endl;
std::cout << (e->insert(437)) << std::endl;
return 0;
}