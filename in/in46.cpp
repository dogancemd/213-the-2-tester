#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << (b->remove(241)) << std::endl;
*a=*b;
b->printPretty();
std::cout << (b->insert(74)) << std::endl;
std::cout << (a->remove(368)) << std::endl;
a->printPretty();
*b=*b;
ScapegoatTree<int> *c=new ScapegoatTree<int>(*b);
ScapegoatTree<int> *d=new ScapegoatTree<int>;
std::cout << (c->insert(9)) << std::endl;
std::cout << (c->insert(74)) << std::endl;
std::cout << (c->remove(74)) << std::endl;
std::cout << (a->insert(297)) << std::endl;
std::cout << (b->remove(74)) << std::endl;
ScapegoatTree<int> *e=new ScapegoatTree<int>;
std::cout << (e->remove(334)) << std::endl;
std::cout << (c->remove(473)) << std::endl;
*c=*e;
*d=*a;
d->printPretty();
d->printPretty();
std::cout << (b->remove(323)) << std::endl;
std::cout << (a->remove(23)) << std::endl;
std::cout << (a->insert(297)) << std::endl;
std::cout << (d->insert(40)) << std::endl;
std::cout << (a->insert(297)) << std::endl;
a->printPretty();
*a=*c;
std::cout << (b->insert(452)) << std::endl;
std::cout << (a->remove(10)) << std::endl;
*e=*c;
std::cout << (b->remove(348)) << std::endl;
std::cout << (b->insert(202)) << std::endl;
std::cout << (b->insert(324)) << std::endl;
*c=*a;
std::cout << (a->remove(90)) << std::endl;
*e=*a;
std::cout << (a->remove(256)) << std::endl;
std::cout << (b->insert(211)) << std::endl;
std::cout << (d->insert(134)) << std::endl;
c->printPretty();
std::cout << (a->remove(486)) << std::endl;
std::cout << (d->remove(166)) << std::endl;
*b=*b;
std::cout << (a->remove(104)) << std::endl;
std::cout << (a->insert(254)) << std::endl;
std::cout << (b->remove(211)) << std::endl;
b->printPretty();
*c=*a;
std::cout << (d->insert(40)) << std::endl;
e->printPretty();
std::cout << (c->remove(22)) << std::endl;
*e=*c;
std::cout << (a->insert(316)) << std::endl;
std::cout << (c->insert(280)) << std::endl;
e->printPretty();
std::cout << (e->remove(254)) << std::endl;
*c=*b;
*e=*d;
std::cout << (a->insert(316)) << std::endl;
std::cout << (b->remove(324)) << std::endl;
std::cout << (c->insert(333)) << std::endl;
std::cout << (b->insert(343)) << std::endl;
std::cout << (a->insert(254)) << std::endl;
*d=*d;
std::cout << (d->insert(371)) << std::endl;
std::cout << (a->insert(316)) << std::endl;
std::cout << (b->remove(202)) << std::endl;
std::cout << (c->insert(351)) << std::endl;
std::cout << (a->insert(316)) << std::endl;
std::cout << (c->insert(271)) << std::endl;
*b=*c;
*d=*d;
std::cout << (b->insert(351)) << std::endl;
std::cout << (b->insert(452)) << std::endl;
std::cout << (e->insert(134)) << std::endl;
std::cout << (e->insert(297)) << std::endl;
std::cout << (d->insert(134)) << std::endl;
std::cout << (d->insert(216)) << std::endl;
std::cout << (a->remove(316)) << std::endl;
std::cout << (d->insert(357)) << std::endl;
std::cout << (a->remove(285)) << std::endl;
std::cout << (d->remove(297)) << std::endl;
*d=*c;
std::cout << (c->remove(202)) << std::endl;
std::cout << (c->insert(279)) << std::endl;
std::cout << (a->insert(254)) << std::endl;
a->printPretty();
std::cout << (a->insert(254)) << std::endl;
*e=*e;
std::cout << (a->remove(267)) << std::endl;
std::cout << (c->insert(334)) << std::endl;
e->printPretty();
b->printPretty();
std::cout << (e->remove(61)) << std::endl;
std::cout << (d->insert(333)) << std::endl;
std::cout << (d->remove(376)) << std::endl;
std::cout << (d->insert(130)) << std::endl;
std::cout << (e->insert(312)) << std::endl;
std::cout << (e->remove(246)) << std::endl;
std::cout << (b->insert(341)) << std::endl;
std::cout << (a->insert(388)) << std::endl;
std::cout << (d->remove(147)) << std::endl;
std::cout << (d->remove(202)) << std::endl;
std::cout << (c->remove(97)) << std::endl;
std::cout << (d->insert(112)) << std::endl;
std::cout << (a->remove(388)) << std::endl;
*c=*a;
std::cout << (d->insert(452)) << std::endl;
std::cout << (d->insert(67)) << std::endl;
std::cout << (a->remove(254)) << std::endl;
std::cout << (d->remove(324)) << std::endl;
std::cout << (c->remove(431)) << std::endl;
std::cout << (a->remove(122)) << std::endl;
*a=*e;
std::cout << (a->remove(40)) << std::endl;
std::cout << (d->insert(112)) << std::endl;
std::cout << (b->remove(380)) << std::endl;
std::cout << (e->insert(40)) << std::endl;
std::cout << (e->remove(139)) << std::endl;
*c=*e;
std::cout << (a->insert(297)) << std::endl;
std::cout << (e->remove(134)) << std::endl;
std::cout << (b->insert(271)) << std::endl;
a->printPretty();
std::cout << (a->insert(134)) << std::endl;
std::cout << (e->remove(297)) << std::endl;
std::cout << (d->remove(452)) << std::endl;
std::cout << (e->insert(182)) << std::endl;
std::cout << (d->insert(112)) << std::endl;
b->printPretty();
std::cout << (a->remove(134)) << std::endl;
std::cout << (b->remove(452)) << std::endl;
*a=*b;
a->printPretty();
std::cout << (d->insert(23)) << std::endl;
std::cout << (c->remove(234)) << std::endl;
std::cout << (d->insert(189)) << std::endl;
*d=*c;
std::cout << (c->insert(134)) << std::endl;
std::cout << (b->remove(271)) << std::endl;
*a=*b;
std::cout << (a->insert(324)) << std::endl;
std::cout << (c->insert(84)) << std::endl;
e->printPretty();
std::cout << (c->remove(367)) << std::endl;
std::cout << (e->remove(182)) << std::endl;
e->printPretty();
e->printPretty();
std::cout << (e->remove(265)) << std::endl;
e->printPretty();
*e=*a;
*c=*c;
*c=*c;
std::cout << (a->remove(387)) << std::endl;
std::cout << (e->remove(499)) << std::endl;
std::cout << (c->remove(457)) << std::endl;
std::cout << (e->remove(392)) << std::endl;
*a=*a;
std::cout << (a->remove(341)) << std::endl;
std::cout << (a->remove(460)) << std::endl;
d->printPretty();
c->printPretty();
std::cout << (d->remove(312)) << std::endl;
*e=*a;
*b=*c;
std::cout << (e->insert(112)) << std::endl;
std::cout << (c->insert(134)) << std::endl;
*e=*a;
c->printPretty();
std::cout << (a->remove(351)) << std::endl;
std::cout << (c->remove(312)) << std::endl;
std::cout << (b->remove(312)) << std::endl;
std::cout << (c->remove(260)) << std::endl;
std::cout << (b->insert(40)) << std::endl;
std::cout << (a->insert(333)) << std::endl;
*a=*a;
std::cout << (b->insert(84)) << std::endl;
std::cout << (a->remove(202)) << std::endl;
*c=*d;
std::cout << (d->insert(134)) << std::endl;
std::cout << (d->insert(43)) << std::endl;
b->printPretty();
std::cout << (e->remove(324)) << std::endl;
std::cout << (a->remove(333)) << std::endl;
b->printPretty();
std::cout << (e->insert(202)) << std::endl;
*e=*a;
std::cout << (a->insert(271)) << std::endl;
d->printPretty();
std::cout << (b->remove(13)) << std::endl;
*a=*a;
c->printPretty();
c->printPretty();
std::cout << (d->remove(293)) << std::endl;
std::cout << (c->remove(297)) << std::endl;
*b=*a;
std::cout << (a->remove(271)) << std::endl;
*e=*e;
b->printPretty();
std::cout << (c->insert(295)) << std::endl;
std::cout << (d->insert(290)) << std::endl;
std::cout << (e->remove(404)) << std::endl;
std::cout << (b->insert(324)) << std::endl;
std::cout << (e->remove(322)) << std::endl;
*c=*c;
std::cout << (e->remove(418)) << std::endl;
*d=*b;
std::cout << (d->insert(271)) << std::endl;
d->printPretty();
std::cout << (e->insert(52)) << std::endl;
e->printPretty();
std::cout << (a->remove(422)) << std::endl;
a->printPretty();
c->printPretty();
*d=*c;
std::cout << (b->insert(324)) << std::endl;
std::cout << (e->insert(233)) << std::endl;
*e=*d;
e->printPretty();
std::cout << (d->remove(134)) << std::endl;
*c=*e;
std::cout << (b->remove(271)) << std::endl;
std::cout << (c->remove(40)) << std::endl;
std::cout << (b->remove(324)) << std::endl;
e->printPretty();
std::cout << (d->insert(40)) << std::endl;
a->printPretty();
*a=*a;
std::cout << (c->insert(414)) << std::endl;
*b=*d;
d->printPretty();
std::cout << (c->insert(134)) << std::endl;
std::cout << (a->remove(61)) << std::endl;
std::cout << (e->remove(40)) << std::endl;
std::cout << (b->insert(40)) << std::endl;
std::cout << (e->insert(134)) << std::endl;
e->printPretty();
std::cout << (b->insert(298)) << std::endl;
std::cout << (a->remove(324)) << std::endl;
std::cout << (b->remove(317)) << std::endl;
std::cout << (c->insert(134)) << std::endl;
std::cout << (d->remove(267)) << std::endl;
std::cout << (b->remove(229)) << std::endl;
std::cout << (d->insert(116)) << std::endl;
e->printPretty();
std::cout << (d->insert(40)) << std::endl;
std::cout << (b->remove(295)) << std::endl;
std::cout << (c->remove(358)) << std::endl;
std::cout << (c->remove(491)) << std::endl;
c->printPretty();
*a=*a;
d->printPretty();
std::cout << (c->insert(295)) << std::endl;
std::cout << (d->remove(295)) << std::endl;
std::cout << (e->insert(134)) << std::endl;
std::cout << (a->remove(79)) << std::endl;
std::cout << (e->insert(295)) << std::endl;
std::cout << (b->insert(40)) << std::endl;
std::cout << (b->remove(40)) << std::endl;
std::cout << (a->remove(426)) << std::endl;
d->printPretty();
b->printPretty();
*b=*c;
std::cout << (b->remove(414)) << std::endl;
std::cout << (d->remove(65)) << std::endl;
std::cout << (a->insert(156)) << std::endl;
std::cout << (c->insert(466)) << std::endl;
std::cout << (b->insert(295)) << std::endl;
std::cout << (e->insert(134)) << std::endl;
std::cout << (a->remove(15)) << std::endl;
b->printPretty();
std::cout << (a->remove(11)) << std::endl;
std::cout << (d->insert(246)) << std::endl;
std::cout << (d->remove(246)) << std::endl;
d->printPretty();
std::cout << (b->remove(260)) << std::endl;
c->printPretty();
b->printPretty();
std::cout << (c->insert(414)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << (a->insert(156)) << std::endl;
std::cout << (c->remove(134)) << std::endl;
std::cout << (a->remove(156)) << std::endl;
a->printPretty();
std::cout << (c->insert(295)) << std::endl;
std::cout << (a->insert(346)) << std::endl;
std::cout << (b->insert(142)) << std::endl;
std::cout << (c->remove(324)) << std::endl;
std::cout << (d->remove(154)) << std::endl;
std::cout << (b->insert(142)) << std::endl;
std::cout << (b->remove(308)) << std::endl;
e->printPretty();
std::cout << (e->insert(403)) << std::endl;
std::cout << (b->remove(18)) << std::endl;
std::cout << (d->insert(116)) << std::endl;
b->printPretty();
std::cout << (e->insert(10)) << std::endl;
std::cout << (d->remove(484)) << std::endl;
std::cout << (c->remove(414)) << std::endl;
b->printPretty();
std::cout << (e->remove(4)) << std::endl;
*b=*d;
*e=*b;
*c=*e;
std::cout << (b->insert(465)) << std::endl;
e->printPretty();
std::cout << (c->remove(457)) << std::endl;
std::cout << (e->remove(223)) << std::endl;
*e=*c;
std::cout << (e->insert(369)) << std::endl;
e->printPretty();
*e=*b;
std::cout << (b->remove(357)) << std::endl;
std::cout << (d->remove(337)) << std::endl;
std::cout << (e->remove(124)) << std::endl;
*a=*c;
d->printPretty();
d->printPretty();
std::cout << (d->insert(116)) << std::endl;
a->printPretty();
std::cout << (c->remove(426)) << std::endl;
a->printPretty();
std::cout << (c->insert(93)) << std::endl;
std::cout << (c->remove(358)) << std::endl;
*d=*b;
*d=*e;
std::cout << (e->remove(410)) << std::endl;
std::cout << (a->remove(280)) << std::endl;
std::cout << (b->remove(106)) << std::endl;
*d=*c;
b->printPretty();
std::cout << (c->remove(149)) << std::endl;
b->printPretty();
std::cout << (a->remove(279)) << std::endl;
std::cout << (d->insert(49)) << std::endl;
std::cout << (c->remove(432)) << std::endl;
std::cout << (e->remove(465)) << std::endl;
std::cout << (d->insert(321)) << std::endl;
*b=*e;
*b=*c;
std::cout << (b->insert(76)) << std::endl;
b->printPretty();
std::cout << (a->remove(116)) << std::endl;
std::cout << (e->remove(274)) << std::endl;
std::cout << (e->insert(116)) << std::endl;
*e=*e;
std::cout << (b->insert(8)) << std::endl;
std::cout << (c->insert(419)) << std::endl;
std::cout << (d->insert(58)) << std::endl;
std::cout << (d->remove(340)) << std::endl;
*d=*a;
std::cout << (b->remove(360)) << std::endl;
std::cout << (e->remove(116)) << std::endl;
std::cout << (b->insert(8)) << std::endl;
std::cout << (a->remove(40)) << std::endl;
std::cout << (b->insert(8)) << std::endl;
*c=*b;
std::cout << (c->insert(40)) << std::endl;
std::cout << (a->insert(345)) << std::endl;
std::cout << (a->remove(345)) << std::endl;
std::cout << (c->insert(286)) << std::endl;
std::cout << (c->insert(153)) << std::endl;
std::cout << (c->insert(375)) << std::endl;
std::cout << (a->remove(500)) << std::endl;
std::cout << (b->insert(491)) << std::endl;
std::cout << (a->remove(32)) << std::endl;
std::cout << (d->remove(40)) << std::endl;
std::cout << (b->insert(24)) << std::endl;
*e=*d;
std::cout << (e->remove(261)) << std::endl;
std::cout << (d->insert(358)) << std::endl;
a->printPretty();
std::cout << (c->remove(284)) << std::endl;
std::cout << (d->remove(54)) << std::endl;
std::cout << (c->remove(88)) << std::endl;
c->printPretty();
b->printPretty();
b->printPretty();
std::cout << (b->remove(40)) << std::endl;
std::cout << (d->remove(358)) << std::endl;
c->printPretty();
*d=*b;
b->printPretty();
std::cout << (d->remove(76)) << std::endl;
*a=*e;
std::cout << (d->insert(8)) << std::endl;
std::cout << (c->insert(93)) << std::endl;
std::cout << (c->insert(76)) << std::endl;
std::cout << (a->remove(484)) << std::endl;
std::cout << (c->insert(125)) << std::endl;
std::cout << (c->remove(76)) << std::endl;
std::cout << (c->insert(12)) << std::endl;
std::cout << (b->insert(93)) << std::endl;
*c=*d;
std::cout << (d->insert(109)) << std::endl;
std::cout << (d->remove(200)) << std::endl;
c->printPretty();
a->printPretty();
e->printPretty();
std::cout << (b->insert(221)) << std::endl;
d->printPretty();
*a=*c;
*b=*b;
*c=*a;
std::cout << (a->insert(55)) << std::endl;
std::cout << (c->insert(24)) << std::endl;
*a=*b;
std::cout << (d->remove(383)) << std::endl;
std::cout << (d->insert(8)) << std::endl;
*c=*c;
std::cout << (c->insert(24)) << std::endl;
*a=*c;
std::cout << (b->insert(457)) << std::endl;
std::cout << (d->remove(99)) << std::endl;
d->printPretty();
a->printPretty();
std::cout << (c->insert(183)) << std::endl;
std::cout << (d->remove(320)) << std::endl;
std::cout << (c->remove(405)) << std::endl;
std::cout << (c->insert(294)) << std::endl;
std::cout << (d->remove(324)) << std::endl;
std::cout << (a->remove(93)) << std::endl;
std::cout << (b->remove(24)) << std::endl;
std::cout << (b->remove(103)) << std::endl;
std::cout << (b->insert(8)) << std::endl;
std::cout << (d->remove(175)) << std::endl;
std::cout << (a->remove(201)) << std::endl;
*b=*d;
std::cout << (e->remove(252)) << std::endl;
std::cout << (e->remove(218)) << std::endl;
*d=*a;
std::cout << (b->insert(457)) << std::endl;
*a=*c;
std::cout << (b->remove(116)) << std::endl;
std::cout << (a->remove(208)) << std::endl;
c->printPretty();
std::cout << (c->remove(93)) << std::endl;
std::cout << (b->remove(356)) << std::endl;
std::cout << (e->remove(193)) << std::endl;
*d=*b;
d->printPretty();
*c=*a;
std::cout << (a->insert(165)) << std::endl;
std::cout << (a->remove(362)) << std::endl;
*d=*d;
c->printPretty();
b->printPretty();
std::cout << (e->remove(357)) << std::endl;
e->printPretty();
*a=*c;
std::cout << (b->remove(339)) << std::endl;
std::cout << (a->insert(122)) << std::endl;
std::cout << (c->insert(24)) << std::endl;
d->printPretty();
std::cout << (c->insert(365)) << std::endl;
c->printPretty();
b->printPretty();
std::cout << (b->remove(8)) << std::endl;
std::cout << (a->remove(479)) << std::endl;
std::cout << (a->insert(116)) << std::endl;
*d=*c;
*b=*b;
std::cout << (b->insert(24)) << std::endl;
*c=*e;
*d=*a;
*d=*b;
std::cout << (b->remove(249)) << std::endl;
*c=*d;
b->printPretty();
std::cout << (b->remove(93)) << std::endl;
e->printPretty();
std::cout << (c->insert(93)) << std::endl;
c->printPretty();
std::cout << (c->insert(491)) << std::endl;
a->printPretty();
*b=*d;
std::cout << (c->remove(190)) << std::endl;
std::cout << (e->remove(21)) << std::endl;
std::cout << (c->insert(457)) << std::endl;
a->printPretty();
std::cout << (a->insert(294)) << std::endl;
std::cout << (b->remove(143)) << std::endl;
c->printPretty();
*e=*e;
std::cout << (d->remove(109)) << std::endl;
std::cout << (a->remove(8)) << std::endl;
std::cout << (d->insert(374)) << std::endl;
*e=*d;
c->printPretty();
std::cout << (a->remove(356)) << std::endl;
*a=*c;
std::cout << (e->insert(159)) << std::endl;
std::cout << (e->insert(144)) << std::endl;
std::cout << (b->remove(457)) << std::endl;
std::cout << (b->remove(318)) << std::endl;
std::cout << (c->remove(93)) << std::endl;
std::cout << (d->insert(374)) << std::endl;
std::cout << (d->remove(73)) << std::endl;
*e=*a;
std::cout << (a->insert(457)) << std::endl;
std::cout << (b->insert(109)) << std::endl;
std::cout << (c->remove(457)) << std::endl;
std::cout << (d->insert(386)) << std::endl;
std::cout << (d->remove(143)) << std::endl;
std::cout << (b->remove(123)) << std::endl;
e->printPretty();
std::cout << (e->insert(470)) << std::endl;
std::cout << (a->remove(100)) << std::endl;
std::cout << (b->remove(93)) << std::endl;
std::cout << (d->remove(491)) << std::endl;
std::cout << (a->insert(117)) << std::endl;
d->printPretty();
b->printPretty();
std::cout << (e->insert(491)) << std::endl;
std::cout << (b->insert(63)) << std::endl;
c->printPretty();
*e=*e;
std::cout << (a->remove(457)) << std::endl;
std::cout << (a->insert(93)) << std::endl;
std::cout << (d->remove(53)) << std::endl;
std::cout << (d->remove(386)) << std::endl;
*c=*d;
*d=*d;
*d=*d;
std::cout << (e->remove(164)) << std::endl;
std::cout << (a->insert(480)) << std::endl;
std::cout << (b->insert(24)) << std::endl;
std::cout << (c->insert(93)) << std::endl;
std::cout << (c->remove(93)) << std::endl;
std::cout << (a->insert(24)) << std::endl;
*e=*a;
e->printPretty();
b->printPretty();
std::cout << (c->remove(165)) << std::endl;
*c=*a;
e->printPretty();
std::cout << (e->remove(229)) << std::endl;
*d=*a;
std::cout << (e->insert(429)) << std::endl;
std::cout << (e->insert(378)) << std::endl;
std::cout << (c->remove(475)) << std::endl;
std::cout << (e->remove(16)) << std::endl;
a->printPretty();
*b=*e;
std::cout << (c->remove(284)) << std::endl;
std::cout << (b->insert(395)) << std::endl;
std::cout << (b->remove(183)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << (a->insert(380)) << std::endl;
std::cout << (b->insert(491)) << std::endl;
std::cout << (a->remove(24)) << std::endl;
e->printPretty();
std::cout << (d->remove(499)) << std::endl;
std::cout << (a->remove(490)) << std::endl;
c->printPretty();
std::cout << (b->insert(432)) << std::endl;
std::cout << (c->insert(117)) << std::endl;
*c=*e;
std::cout << (e->remove(354)) << std::endl;
std::cout << (d->remove(480)) << std::endl;
std::cout << (b->insert(400)) << std::endl;
*a=*c;
std::cout << (b->remove(432)) << std::endl;
c->printPretty();
std::cout << (e->insert(491)) << std::endl;
std::cout << (a->remove(44)) << std::endl;
std::cout << (a->insert(463)) << std::endl;
std::cout << (a->insert(491)) << std::endl;
*d=*c;
a->printPretty();
a->printPretty();
*e=*e;
std::cout << (b->remove(117)) << std::endl;
*b=*c;
std::cout << (d->insert(290)) << std::endl;
*d=*b;
d->printPretty();
*e=*e;
std::cout << (b->insert(378)) << std::endl;
e->printPretty();
std::cout << (b->remove(10)) << std::endl;
*a=*d;
std::cout << (a->remove(117)) << std::endl;
std::cout << (e->remove(477)) << std::endl;
*c=*c;
e->printPretty();
*b=*b;
std::cout << (e->remove(23)) << std::endl;
e->printPretty();
std::cout << (b->insert(429)) << std::endl;
std::cout << (c->insert(376)) << std::endl;
std::cout << (e->remove(21)) << std::endl;
d->printPretty();
c->printPretty();
std::cout << (e->insert(491)) << std::endl;
std::cout << (c->remove(429)) << std::endl;
std::cout << (a->remove(429)) << std::endl;
*b=*b;
e->printPretty();
d->printPretty();
e->printPretty();
e->printPretty();
*b=*d;
*c=*c;
std::cout << (e->remove(378)) << std::endl;
std::cout << (d->insert(114)) << std::endl;
std::cout << (a->insert(218)) << std::endl;
*d=*c;
std::cout << (e->insert(34)) << std::endl;
std::cout << (a->remove(90)) << std::endl;
std::cout << (d->insert(439)) << std::endl;
std::cout << (d->insert(491)) << std::endl;
std::cout << (c->remove(20)) << std::endl;
std::cout << (b->remove(24)) << std::endl;
std::cout << (e->remove(363)) << std::endl;
std::cout << (b->remove(93)) << std::endl;
std::cout << (e->insert(24)) << std::endl;
std::cout << (b->insert(109)) << std::endl;
std::cout << (e->remove(75)) << std::endl;
std::cout << (b->insert(109)) << std::endl;
e->printPretty();
std::cout << (a->remove(312)) << std::endl;
b->printPretty();
*e=*d;
a->printPretty();
std::cout << (b->insert(233)) << std::endl;
std::cout << (d->remove(439)) << std::endl;
std::cout << (b->remove(486)) << std::endl;
std::cout << (d->insert(491)) << std::endl;
std::cout << (b->insert(408)) << std::endl;
c->printPretty();
a->printPretty();
std::cout << (c->remove(273)) << std::endl;
std::cout << (a->remove(24)) << std::endl;
*b=*a;
e->printPretty();
d->printPretty();
std::cout << (c->remove(118)) << std::endl;
std::cout << (b->remove(93)) << std::endl;
std::cout << (a->remove(448)) << std::endl;
std::cout << (e->insert(93)) << std::endl;
std::cout << (c->remove(117)) << std::endl;
std::cout << (c->remove(446)) << std::endl;
std::cout << (b->remove(344)) << std::endl;
std::cout << (d->insert(117)) << std::endl;
*c=*b;
std::cout << (c->insert(378)) << std::endl;
*d=*d;
std::cout << (c->insert(480)) << std::endl;
b->printPretty();
std::cout << (b->insert(480)) << std::endl;
std::cout << (c->insert(480)) << std::endl;
std::cout << (e->remove(155)) << std::endl;
*a=*a;
std::cout << (c->remove(219)) << std::endl;
a->printPretty();
std::cout << (b->remove(480)) << std::endl;
*a=*b;
std::cout << (c->insert(79)) << std::endl;
std::cout << (d->insert(469)) << std::endl;
std::cout << (d->remove(262)) << std::endl;
std::cout << (b->insert(453)) << std::endl;
std::cout << (d->insert(54)) << std::endl;
a->printPretty();
std::cout << (e->insert(433)) << std::endl;
std::cout << (a->remove(265)) << std::endl;
e->printPretty();
d->printPretty();
b->printPretty();
std::cout << (b->insert(218)) << std::endl;
std::cout << (a->remove(218)) << std::endl;
std::cout << (e->insert(218)) << std::endl;
std::cout << (c->remove(109)) << std::endl;
std::cout << (d->insert(376)) << std::endl;
*d=*d;
std::cout << (b->remove(344)) << std::endl;
*a=*a;
std::cout << (c->remove(352)) << std::endl;
std::cout << (d->insert(24)) << std::endl;
std::cout << (e->remove(378)) << std::endl;
e->printPretty();
std::cout << (b->remove(378)) << std::endl;
std::cout << (d->insert(93)) << std::endl;
c->printPretty();
std::cout << (d->insert(491)) << std::endl;
std::cout << (a->remove(370)) << std::endl;
*d=*a;
*d=*a;
std::cout << (b->remove(218)) << std::endl;
e->printPretty();
*e=*c;
std::cout << (a->remove(389)) << std::endl;
std::cout << (b->insert(109)) << std::endl;
*c=*b;
std::cout << (c->insert(28)) << std::endl;
std::cout << (c->insert(338)) << std::endl;
std::cout << (b->insert(453)) << std::endl;
std::cout << (d->insert(303)) << std::endl;
return 0;
}