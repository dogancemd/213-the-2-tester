#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
ScapegoatTree<int> *c=new ScapegoatTree<int>;
*c=*b;
ScapegoatTree<int> *d=new ScapegoatTree<int>;
a->printPretty();
b->printPretty();
std::cout << (c->insert(245)) << std::endl;
std::cout << (c->insert(245)) << std::endl;
a->printPretty();
std::cout << (c->insert(407)) << std::endl;
std::cout << (b->remove(426)) << std::endl;
b->printPretty();
ScapegoatTree<int> *e=new ScapegoatTree<int>;
std::cout << (d->remove(341)) << std::endl;
std::cout << (c->remove(245)) << std::endl;
std::cout << (c->insert(416)) << std::endl;
*a=*c;
c->printPretty();
*c=*e;
std::cout << (b->insert(149)) << std::endl;
std::cout << (a->remove(387)) << std::endl;
*e=*c;
d->printPretty();
std::cout << (a->remove(349)) << std::endl;
std::cout << (a->remove(416)) << std::endl;
std::cout << (b->insert(149)) << std::endl;
std::cout << (b->remove(149)) << std::endl;
std::cout << (c->remove(346)) << std::endl;
std::cout << (b->insert(264)) << std::endl;
std::cout << (a->remove(483)) << std::endl;
std::cout << (b->remove(95)) << std::endl;
std::cout << (d->remove(457)) << std::endl;
std::cout << (b->insert(24)) << std::endl;
std::cout << (c->insert(98)) << std::endl;
*a=*e;
*a=*d;
std::cout << (b->insert(264)) << std::endl;
c->printPretty();
e->printPretty();
std::cout << (c->insert(98)) << std::endl;
std::cout << (a->remove(83)) << std::endl;
*b=*b;
std::cout << (d->remove(30)) << std::endl;
std::cout << (b->remove(24)) << std::endl;
std::cout << (c->remove(98)) << std::endl;
*d=*d;
std::cout << (c->remove(318)) << std::endl;
std::cout << (e->insert(361)) << std::endl;
std::cout << (d->remove(169)) << std::endl;
*a=*c;
std::cout << (b->remove(261)) << std::endl;
std::cout << (e->insert(339)) << std::endl;
*d=*e;
d->printPretty();
std::cout << (d->remove(392)) << std::endl;
std::cout << (e->remove(201)) << std::endl;
std::cout << (d->insert(32)) << std::endl;
std::cout << (b->remove(264)) << std::endl;
c->printPretty();
d->printPretty();
std::cout << (e->remove(339)) << std::endl;
std::cout << (a->remove(104)) << std::endl;
std::cout << (d->insert(392)) << std::endl;
std::cout << (d->remove(339)) << std::endl;
std::cout << (b->remove(474)) << std::endl;
a->printPretty();
c->printPretty();
*d=*d;
std::cout << (b->insert(413)) << std::endl;
std::cout << (d->insert(32)) << std::endl;
std::cout << (d->remove(32)) << std::endl;
std::cout << (c->insert(425)) << std::endl;
a->printPretty();
std::cout << (c->remove(425)) << std::endl;
c->printPretty();
*e=*a;
std::cout << (c->insert(423)) << std::endl;
*c=*a;
a->printPretty();
std::cout << (a->remove(393)) << std::endl;
std::cout << (d->insert(120)) << std::endl;
std::cout << (b->insert(302)) << std::endl;
c->printPretty();
std::cout << (c->insert(347)) << std::endl;
*c=*b;
std::cout << (a->remove(26)) << std::endl;
e->printPretty();
c->printPretty();
std::cout << (b->insert(413)) << std::endl;
*a=*a;
*e=*b;
std::cout << (b->insert(302)) << std::endl;
*c=*b;
std::cout << (b->insert(413)) << std::endl;
*b=*d;
*b=*a;
std::cout << (e->remove(413)) << std::endl;
std::cout << (d->insert(322)) << std::endl;
b->printPretty();
d->printPretty();
std::cout << (e->remove(302)) << std::endl;
std::cout << (a->insert(25)) << std::endl;
c->printPretty();
std::cout << (d->remove(36)) << std::endl;
std::cout << (a->insert(348)) << std::endl;
std::cout << (c->insert(321)) << std::endl;
std::cout << (c->remove(302)) << std::endl;
std::cout << (e->insert(433)) << std::endl;
*e=*d;
std::cout << (c->insert(413)) << std::endl;
std::cout << (a->insert(25)) << std::endl;
std::cout << (c->remove(413)) << std::endl;
std::cout << (c->remove(185)) << std::endl;
std::cout << (a->remove(96)) << std::endl;
std::cout << (d->remove(318)) << std::endl;
std::cout << (d->insert(472)) << std::endl;
std::cout << (e->insert(91)) << std::endl;
std::cout << (e->insert(361)) << std::endl;
std::cout << (d->remove(5)) << std::endl;
*b=*a;
std::cout << (c->insert(333)) << std::endl;
*a=*d;
std::cout << (d->insert(472)) << std::endl;
*c=*d;
std::cout << (d->remove(380)) << std::endl;
std::cout << (a->remove(216)) << std::endl;
std::cout << (c->insert(362)) << std::endl;
std::cout << (d->remove(29)) << std::endl;
std::cout << (b->insert(348)) << std::endl;
std::cout << (b->insert(104)) << std::endl;
d->printPretty();
std::cout << (c->remove(323)) << std::endl;
*b=*c;
std::cout << (d->insert(120)) << std::endl;
std::cout << (b->remove(196)) << std::endl;
std::cout << (b->insert(417)) << std::endl;
*a=*c;
*e=*e;
std::cout << (d->insert(322)) << std::endl;
a->printPretty();
std::cout << (c->remove(392)) << std::endl;
std::cout << (b->insert(114)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << (c->insert(168)) << std::endl;
*a=*b;
std::cout << (e->insert(23)) << std::endl;
std::cout << (d->remove(198)) << std::endl;
std::cout << (d->insert(472)) << std::endl;
std::cout << (e->insert(278)) << std::endl;
std::cout << (c->insert(322)) << std::endl;
std::cout << (a->insert(161)) << std::endl;
*c=*a;
a->printPretty();
std::cout << (a->insert(114)) << std::endl;
std::cout << (d->remove(120)) << std::endl;
*d=*c;
std::cout << (b->remove(246)) << std::endl;
std::cout << (b->insert(67)) << std::endl;
e->printPretty();
std::cout << (a->insert(167)) << std::endl;
*d=*a;
*a=*e;
*e=*c;
std::cout << (c->remove(496)) << std::endl;
d->printPretty();
std::cout << (d->remove(362)) << std::endl;
std::cout << (e->insert(392)) << std::endl;
*c=*d;
std::cout << (d->insert(323)) << std::endl;
std::cout << (b->remove(169)) << std::endl;
std::cout << (a->insert(23)) << std::endl;
*b=*b;
std::cout << (c->insert(417)) << std::endl;
*d=*c;
std::cout << (c->remove(113)) << std::endl;
std::cout << (c->insert(313)) << std::endl;
std::cout << (e->remove(398)) << std::endl;
std::cout << (b->remove(89)) << std::endl;
std::cout << (e->insert(392)) << std::endl;
*c=*c;
e->printPretty();
std::cout << (a->insert(57)) << std::endl;
*d=*e;
std::cout << (d->insert(110)) << std::endl;
std::cout << (e->remove(322)) << std::endl;
*b=*b;
d->printPretty();
std::cout << (a->remove(120)) << std::endl;
std::cout << (c->insert(117)) << std::endl;
std::cout << (e->insert(362)) << std::endl;
std::cout << (e->remove(378)) << std::endl;
std::cout << (d->remove(200)) << std::endl;
a->printPretty();
std::cout << (c->insert(417)) << std::endl;
e->printPretty();
b->printPretty();
d->printPretty();
a->printPretty();
std::cout << (d->remove(402)) << std::endl;
a->printPretty();
*e=*e;
std::cout << (a->insert(361)) << std::endl;
b->printPretty();
std::cout << (d->remove(170)) << std::endl;
std::cout << (b->insert(361)) << std::endl;
std::cout << (a->remove(254)) << std::endl;
e->printPretty();
d->printPretty();
d->printPretty();
*d=*c;
a->printPretty();
std::cout << (d->insert(74)) << std::endl;
std::cout << (a->remove(159)) << std::endl;
*a=*c;
c->printPretty();
std::cout << (c->insert(81)) << std::endl;
std::cout << (a->insert(161)) << std::endl;
std::cout << (d->insert(392)) << std::endl;
b->printPretty();
std::cout << (c->insert(317)) << std::endl;
c->printPretty();
std::cout << (b->remove(362)) << std::endl;
std::cout << (a->remove(117)) << std::endl;
std::cout << (d->remove(129)) << std::endl;
std::cout << (e->remove(362)) << std::endl;
b->printPretty();
std::cout << (a->insert(387)) << std::endl;
*c=*a;
c->printPretty();
*e=*b;
std::cout << (b->remove(385)) << std::endl;
std::cout << (b->insert(342)) << std::endl;
std::cout << (e->remove(2)) << std::endl;
std::cout << (d->insert(322)) << std::endl;
std::cout << (e->insert(365)) << std::endl;
*d=*b;
std::cout << (e->remove(120)) << std::endl;
std::cout << (e->remove(211)) << std::endl;
std::cout << (c->insert(392)) << std::endl;
std::cout << (b->insert(120)) << std::endl;
std::cout << (c->insert(65)) << std::endl;
*b=*c;
std::cout << (e->insert(437)) << std::endl;
std::cout << (d->insert(472)) << std::endl;
std::cout << (d->remove(120)) << std::endl;
std::cout << (d->remove(392)) << std::endl;
std::cout << (c->insert(387)) << std::endl;
std::cout << (a->remove(195)) << std::endl;
a->printPretty();
std::cout << (a->remove(361)) << std::endl;
std::cout << (e->insert(477)) << std::endl;
*b=*e;
std::cout << (c->remove(167)) << std::endl;
std::cout << (a->remove(294)) << std::endl;
*d=*a;
std::cout << (e->insert(114)) << std::endl;
std::cout << (d->insert(322)) << std::endl;
d->printPretty();
std::cout << (b->insert(93)) << std::endl;
std::cout << (d->remove(316)) << std::endl;
*c=*a;
std::cout << (c->insert(228)) << std::endl;
*c=*e;
*e=*a;
a->printPretty();
std::cout << (b->insert(166)) << std::endl;
std::cout << (a->insert(313)) << std::endl;
std::cout << (e->remove(401)) << std::endl;
std::cout << (b->insert(477)) << std::endl;
std::cout << (c->remove(392)) << std::endl;
std::cout << (d->insert(417)) << std::endl;
*a=*e;
std::cout << (b->remove(392)) << std::endl;
e->printPretty();
std::cout << (e->insert(469)) << std::endl;
d->printPretty();
*d=*c;
std::cout << (e->remove(358)) << std::endl;
c->printPretty();
std::cout << (e->insert(387)) << std::endl;
std::cout << (c->insert(255)) << std::endl;
std::cout << (d->insert(55)) << std::endl;
std::cout << (c->remove(361)) << std::endl;
std::cout << (e->remove(161)) << std::endl;
*e=*c;
std::cout << (d->insert(361)) << std::endl;
*c=*b;
std::cout << (d->remove(472)) << std::endl;
std::cout << (b->remove(491)) << std::endl;
std::cout << (b->remove(255)) << std::endl;
*e=*c;
d->printPretty();
c->printPretty();
std::cout << (e->insert(355)) << std::endl;
d->printPretty();
*c=*b;
std::cout << (b->insert(417)) << std::endl;
std::cout << (e->remove(154)) << std::endl;
*a=*c;
a->printPretty();
std::cout << (c->insert(477)) << std::endl;
std::cout << (a->insert(150)) << std::endl;
*d=*e;
std::cout << (a->remove(190)) << std::endl;
*e=*b;
c->printPretty();
std::cout << (a->remove(93)) << std::endl;
b->printPretty();
std::cout << (d->insert(322)) << std::endl;
std::cout << (b->insert(93)) << std::endl;
std::cout << (c->insert(437)) << std::endl;
std::cout << (a->insert(150)) << std::endl;
*b=*a;
std::cout << (a->insert(424)) << std::endl;
std::cout << (a->remove(322)) << std::endl;
std::cout << (d->remove(93)) << std::endl;
c->printPretty();
std::cout << (b->insert(166)) << std::endl;
*e=*d;
std::cout << (d->remove(355)) << std::endl;
*a=*b;
*e=*d;
std::cout << (c->remove(365)) << std::endl;
std::cout << (a->insert(76)) << std::endl;
std::cout << (a->remove(365)) << std::endl;
std::cout << (c->remove(114)) << std::endl;
std::cout << (d->remove(322)) << std::endl;
std::cout << (c->remove(401)) << std::endl;
std::cout << (a->remove(16)) << std::endl;
std::cout << (c->remove(67)) << std::endl;
std::cout << (c->remove(417)) << std::endl;
std::cout << (c->remove(64)) << std::endl;
e->printPretty();
std::cout << (a->remove(415)) << std::endl;
std::cout << (e->insert(290)) << std::endl;
e->printPretty();
std::cout << (b->insert(365)) << std::endl;
std::cout << (c->insert(93)) << std::endl;
std::cout << (c->remove(477)) << std::endl;
std::cout << (c->remove(437)) << std::endl;
d->printPretty();
std::cout << (b->remove(417)) << std::endl;
std::cout << (c->insert(443)) << std::endl;
std::cout << (a->remove(76)) << std::endl;
e->printPretty();
*d=*e;
*d=*e;
*b=*e;
*b=*e;
std::cout << (b->remove(417)) << std::endl;
std::cout << (d->insert(322)) << std::endl;
std::cout << (d->remove(417)) << std::endl;
std::cout << (c->insert(130)) << std::endl;
std::cout << (e->remove(260)) << std::endl;
*c=*a;
std::cout << (b->remove(187)) << std::endl;
c->printPretty();
std::cout << (a->remove(266)) << std::endl;
std::cout << (d->insert(67)) << std::endl;
std::cout << (c->insert(489)) << std::endl;
std::cout << (d->insert(67)) << std::endl;
std::cout << (b->insert(322)) << std::endl;
std::cout << (c->insert(166)) << std::endl;
d->printPretty();
std::cout << (c->insert(183)) << std::endl;
std::cout << (d->insert(437)) << std::endl;
std::cout << (e->remove(322)) << std::endl;
std::cout << (e->insert(267)) << std::endl;
c->printPretty();
*b=*c;
std::cout << (c->insert(119)) << std::endl;
std::cout << (d->insert(312)) << std::endl;
std::cout << (d->insert(496)) << std::endl;
*b=*d;
std::cout << (e->remove(363)) << std::endl;
std::cout << (c->insert(42)) << std::endl;
*b=*d;
std::cout << (e->insert(365)) << std::endl;
std::cout << (e->remove(328)) << std::endl;
*b=*e;
*d=*e;
e->printPretty();
std::cout << (a->insert(391)) << std::endl;
d->printPretty();
*b=*b;
std::cout << (d->insert(361)) << std::endl;
*e=*b;
std::cout << (d->insert(477)) << std::endl;
std::cout << (a->remove(417)) << std::endl;
std::cout << (b->remove(100)) << std::endl;
*b=*c;
std::cout << (d->remove(490)) << std::endl;
std::cout << (c->insert(279)) << std::endl;
*e=*d;
std::cout << (d->remove(1)) << std::endl;
c->printPretty();
*a=*b;
std::cout << (c->remove(322)) << std::endl;
std::cout << (a->remove(137)) << std::endl;
std::cout << (e->insert(290)) << std::endl;
std::cout << (c->remove(42)) << std::endl;
c->printPretty();
std::cout << (a->remove(322)) << std::endl;
e->printPretty();
b->printPretty();
std::cout << (d->remove(267)) << std::endl;
std::cout << (b->insert(458)) << std::endl;
std::cout << (c->remove(417)) << std::endl;
*c=*b;
std::cout << (d->insert(220)) << std::endl;
std::cout << (e->remove(477)) << std::endl;
std::cout << (c->insert(489)) << std::endl;
std::cout << (d->insert(114)) << std::endl;
std::cout << (d->remove(245)) << std::endl;
e->printPretty();
*e=*e;
c->printPretty();
std::cout << (a->remove(122)) << std::endl;
std::cout << (e->insert(342)) << std::endl;
*c=*a;
*c=*c;
std::cout << (b->insert(130)) << std::endl;
std::cout << (d->remove(476)) << std::endl;
*b=*e;
std::cout << (c->insert(417)) << std::endl;
std::cout << (e->remove(147)) << std::endl;
*d=*c;
std::cout << (d->remove(477)) << std::endl;
std::cout << (b->remove(114)) << std::endl;
e->printPretty();
std::cout << (c->insert(477)) << std::endl;
a->printPretty();
std::cout << (d->remove(437)) << std::endl;
std::cout << (e->insert(417)) << std::endl;
std::cout << (e->insert(267)) << std::endl;
*d=*a;
c->printPretty();
*a=*c;
d->printPretty();
a->printPretty();
std::cout << (d->remove(79)) << std::endl;
std::cout << (b->insert(224)) << std::endl;
*e=*b;
std::cout << (e->insert(348)) << std::endl;
std::cout << (d->remove(417)) << std::endl;
std::cout << (a->insert(42)) << std::endl;
std::cout << (d->insert(361)) << std::endl;
*e=*a;
a->printPretty();
std::cout << (d->remove(353)) << std::endl;
*e=*c;
*c=*e;
*b=*c;
*c=*a;
e->printPretty();
c->printPretty();
std::cout << (a->remove(42)) << std::endl;
std::cout << (b->insert(455)) << std::endl;
*d=*c;
std::cout << (e->insert(397)) << std::endl;
std::cout << (e->remove(477)) << std::endl;
std::cout << (b->remove(119)) << std::endl;
*b=*e;
std::cout << (b->remove(183)) << std::endl;
std::cout << (a->insert(489)) << std::endl;
e->printPretty();
a->printPretty();
std::cout << (d->insert(241)) << std::endl;
e->printPretty();
std::cout << (b->remove(274)) << std::endl;
std::cout << (d->insert(67)) << std::endl;
std::cout << (e->remove(41)) << std::endl;
std::cout << (c->insert(142)) << std::endl;
c->printPretty();
std::cout << (a->remove(19)) << std::endl;
std::cout << (e->remove(119)) << std::endl;
d->printPretty();
std::cout << (c->insert(144)) << std::endl;
std::cout << (e->insert(489)) << std::endl;
std::cout << (a->remove(168)) << std::endl;
*d=*e;
std::cout << (d->insert(114)) << std::endl;
*e=*b;
std::cout << (b->insert(2)) << std::endl;
*b=*a;
std::cout << (b->remove(482)) << std::endl;
std::cout << (a->insert(118)) << std::endl;
*b=*d;
std::cout << (a->insert(417)) << std::endl;
std::cout << (d->insert(114)) << std::endl;
std::cout << (d->remove(113)) << std::endl;
std::cout << (e->insert(119)) << std::endl;
std::cout << (c->remove(221)) << std::endl;
e->printPretty();
std::cout << (c->remove(417)) << std::endl;
d->printPretty();
std::cout << (e->insert(166)) << std::endl;
std::cout << (d->insert(417)) << std::endl;
*b=*c;
*c=*a;
std::cout << (e->remove(303)) << std::endl;
std::cout << (a->remove(58)) << std::endl;
std::cout << (a->remove(353)) << std::endl;
std::cout << (d->remove(430)) << std::endl;
c->printPretty();
d->printPretty();
std::cout << (d->remove(166)) << std::endl;
*c=*c;
std::cout << (c->remove(437)) << std::endl;
std::cout << (d->insert(472)) << std::endl;
std::cout << (b->insert(119)) << std::endl;
std::cout << (a->insert(486)) << std::endl;
std::cout << (b->insert(170)) << std::endl;
std::cout << (c->insert(304)) << std::endl;
std::cout << (a->insert(67)) << std::endl;
*a=*b;
std::cout << (e->remove(135)) << std::endl;
std::cout << (a->remove(121)) << std::endl;
*d=*c;
std::cout << (c->remove(416)) << std::endl;
*c=*d;
std::cout << (b->insert(377)) << std::endl;
std::cout << (c->remove(118)) << std::endl;
*a=*c;
*a=*a;
std::cout << (a->insert(338)) << std::endl;
std::cout << (d->insert(371)) << std::endl;
c->printPretty();
std::cout << (b->remove(142)) << std::endl;
std::cout << (d->remove(31)) << std::endl;
d->printPretty();
*d=*c;
c->printPretty();
std::cout << (c->insert(166)) << std::endl;
std::cout << (b->remove(95)) << std::endl;
e->printPretty();
d->printPretty();
*c=*a;
std::cout << (e->insert(166)) << std::endl;
b->printPretty();
*c=*a;
b->printPretty();
std::cout << (a->insert(240)) << std::endl;
std::cout << (e->insert(475)) << std::endl;
std::cout << (c->insert(77)) << std::endl;
*b=*b;
e->printPretty();
std::cout << (b->remove(158)) << std::endl;
std::cout << (e->remove(42)) << std::endl;
std::cout << (a->remove(119)) << std::endl;
std::cout << (a->insert(332)) << std::endl;
std::cout << (c->insert(361)) << std::endl;
*c=*a;
std::cout << (e->remove(361)) << std::endl;
*b=*a;
std::cout << (a->insert(332)) << std::endl;
std::cout << (b->remove(361)) << std::endl;
a->printPretty();
std::cout << (a->remove(91)) << std::endl;
a->printPretty();
std::cout << (d->insert(114)) << std::endl;
std::cout << (b->insert(380)) << std::endl;
std::cout << (a->insert(231)) << std::endl;
*d=*b;
*e=*e;
std::cout << (b->insert(10)) << std::endl;
*a=*b;
std::cout << (b->insert(10)) << std::endl;
std::cout << (c->remove(304)) << std::endl;
std::cout << (b->insert(230)) << std::endl;
std::cout << (a->remove(166)) << std::endl;
std::cout << (c->remove(449)) << std::endl;
a->printPretty();
std::cout << (d->insert(304)) << std::endl;
std::cout << (b->remove(472)) << std::endl;
std::cout << (e->remove(149)) << std::endl;
std::cout << (c->insert(339)) << std::endl;
std::cout << (e->insert(114)) << std::endl;
std::cout << (e->remove(294)) << std::endl;
std::cout << (e->remove(166)) << std::endl;
std::cout << (d->insert(353)) << std::endl;
std::cout << (d->remove(385)) << std::endl;
*a=*e;
std::cout << (d->remove(332)) << std::endl;
std::cout << (b->insert(126)) << std::endl;
*d=*a;
std::cout << (d->insert(38)) << std::endl;
b->printPretty();
std::cout << (b->insert(380)) << std::endl;
std::cout << (b->insert(150)) << std::endl;
std::cout << (c->remove(381)) << std::endl;
std::cout << (b->insert(67)) << std::endl;
*c=*a;
std::cout << (a->remove(74)) << std::endl;
std::cout << (b->remove(332)) << std::endl;
std::cout << (b->insert(183)) << std::endl;
std::cout << (e->remove(141)) << std::endl;
*e=*e;
*d=*e;
std::cout << (a->remove(70)) << std::endl;
std::cout << (a->remove(114)) << std::endl;
*c=*a;
a->printPretty();
d->printPretty();
std::cout << (d->insert(417)) << std::endl;
std::cout << (b->insert(380)) << std::endl;
*a=*e;
*b=*e;
std::cout << (e->insert(384)) << std::endl;
a->printPretty();
std::cout << (d->remove(412)) << std::endl;
std::cout << (a->insert(67)) << std::endl;
*d=*b;
*b=*b;
std::cout << (c->remove(475)) << std::endl;
d->printPretty();
*b=*d;
a->printPretty();
std::cout << (c->remove(119)) << std::endl;
*e=*d;
std::cout << (d->remove(439)) << std::endl;
std::cout << (d->remove(397)) << std::endl;
d->printPretty();
*c=*d;
e->printPretty();
std::cout << (b->insert(417)) << std::endl;
std::cout << (c->remove(417)) << std::endl;
std::cout << (d->remove(437)) << std::endl;
std::cout << (c->remove(488)) << std::endl;
*c=*c;
std::cout << (d->insert(417)) << std::endl;
std::cout << (b->insert(489)) << std::endl;
c->printPretty();
*c=*e;
*e=*d;
std::cout << (d->remove(119)) << std::endl;
std::cout << (e->remove(470)) << std::endl;
std::cout << (a->insert(150)) << std::endl;
std::cout << (a->insert(362)) << std::endl;
std::cout << (b->remove(313)) << std::endl;
std::cout << (b->remove(119)) << std::endl;
std::cout << (d->insert(67)) << std::endl;
d->printPretty();
std::cout << (a->insert(480)) << std::endl;
e->printPretty();
std::cout << (c->insert(315)) << std::endl;
*a=*e;
d->printPretty();
*e=*e;
std::cout << (a->insert(417)) << std::endl;
*e=*e;
std::cout << (d->remove(67)) << std::endl;
std::cout << (d->insert(417)) << std::endl;
std::cout << (d->insert(158)) << std::endl;
*e=*c;
std::cout << (d->insert(150)) << std::endl;
*d=*a;
*c=*d;
*e=*e;
std::cout << (c->insert(244)) << std::endl;
std::cout << (a->remove(261)) << std::endl;
*c=*c;
std::cout << (d->remove(406)) << std::endl;
e->printPretty();
std::cout << (c->insert(315)) << std::endl;
std::cout << (b->remove(150)) << std::endl;
std::cout << (d->remove(74)) << std::endl;
d->printPretty();
std::cout << (c->insert(119)) << std::endl;
std::cout << (e->insert(437)) << std::endl;
b->printPretty();
std::cout << (d->insert(417)) << std::endl;
std::cout << (e->insert(114)) << std::endl;
std::cout << (a->remove(197)) << std::endl;
std::cout << (b->insert(437)) << std::endl;
std::cout << (e->insert(474)) << std::endl;
*a=*c;
std::cout << (c->insert(315)) << std::endl;
a->printPretty();
e->printPretty();
std::cout << (e->remove(366)) << std::endl;
std::cout << (b->remove(93)) << std::endl;
std::cout << (c->remove(473)) << std::endl;
std::cout << (e->remove(114)) << std::endl;
std::cout << (d->insert(114)) << std::endl;
*b=*c;
*e=*b;
std::cout << (d->remove(125)) << std::endl;
std::cout << (e->insert(417)) << std::endl;
std::cout << (e->remove(315)) << std::endl;
std::cout << (b->remove(21)) << std::endl;
std::cout << (d->insert(372)) << std::endl;
std::cout << (b->insert(150)) << std::endl;
std::cout << (e->insert(343)) << std::endl;
c->printPretty();
std::cout << (b->remove(119)) << std::endl;
std::cout << (d->remove(196)) << std::endl;
std::cout << (e->remove(25)) << std::endl;
e->printPretty();
std::cout << (c->insert(244)) << std::endl;
c->printPretty();
std::cout << (c->remove(417)) << std::endl;
*a=*d;
std::cout << (e->remove(478)) << std::endl;
std::cout << (a->insert(67)) << std::endl;
*d=*c;
b->printPretty();
std::cout << (e->insert(67)) << std::endl;
*a=*a;
std::cout << (d->insert(33)) << std::endl;
std::cout << (a->remove(50)) << std::endl;
d->printPretty();
std::cout << (a->insert(119)) << std::endl;
std::cout << (e->remove(150)) << std::endl;
d->printPretty();
std::cout << (c->remove(244)) << std::endl;
std::cout << (d->insert(447)) << std::endl;
std::cout << (e->remove(244)) << std::endl;
std::cout << (c->insert(468)) << std::endl;
std::cout << (b->insert(475)) << std::endl;
*b=*a;
std::cout << (d->remove(119)) << std::endl;
std::cout << (a->insert(119)) << std::endl;
std::cout << (c->remove(114)) << std::endl;
*a=*a;
e->printPretty();
*c=*d;
std::cout << (e->remove(414)) << std::endl;
std::cout << (a->remove(114)) << std::endl;
a->printPretty();
*c=*a;
std::cout << (a->remove(119)) << std::endl;
std::cout << (c->remove(150)) << std::endl;
a->printPretty();
std::cout << (d->remove(72)) << std::endl;
std::cout << (b->insert(472)) << std::endl;
*e=*e;
std::cout << (d->remove(447)) << std::endl;
std::cout << (a->insert(215)) << std::endl;
std::cout << (d->remove(475)) << std::endl;
*c=*b;
d->printPretty();
*e=*c;
return 0;
}
