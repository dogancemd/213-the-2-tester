#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
std::cout << (a->remove(312)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
std::cout << (a->insert(409)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << (a->insert(409)) << std::endl;
std::cout << (a->insert(24)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << (a->insert(49)) << std::endl;
std::cout << (a->insert(416)) << std::endl;
std::cout << (b->remove(71)) << std::endl;
ScapegoatTree<int> *c=new ScapegoatTree<int>;
c->printPretty();
ScapegoatTree<int> *d=new ScapegoatTree<int>(*b);
std::cout << (d->insert(217)) << std::endl;
std::cout << (c->insert(50)) << std::endl;
std::cout << (b->remove(162)) << std::endl;
std::cout << (c->remove(50)) << std::endl;
std::cout << (a->insert(214)) << std::endl;
b->printPretty();
ScapegoatTree<int> *e=new ScapegoatTree<int>;
e->printPretty();
*d=*c;
std::cout << (a->insert(324)) << std::endl;
std::cout << (b->insert(490)) << std::endl;
std::cout << (e->insert(269)) << std::endl;
*c=*e;
std::cout << (e->insert(269)) << std::endl;
a->printPretty();
c->printPretty();
*b=*b;
std::cout << (b->remove(371)) << std::endl;
std::cout << (e->insert(337)) << std::endl;
std::cout << (d->remove(416)) << std::endl;
e->printPretty();
std::cout << (a->remove(337)) << std::endl;
std::cout << (d->insert(25)) << std::endl;
std::cout << (d->remove(391)) << std::endl;
std::cout << (b->remove(128)) << std::endl;
std::cout << (c->remove(269)) << std::endl;
a->printPretty();
*c=*b;
std::cout << (c->remove(344)) << std::endl;
std::cout << (c->insert(490)) << std::endl;
std::cout << (e->insert(248)) << std::endl;
e->printPretty();
b->printPretty();
std::cout << (b->remove(490)) << std::endl;
std::cout << (a->insert(409)) << std::endl;
std::cout << (a->insert(409)) << std::endl;
*a=*a;
*e=*c;
*d=*c;
std::cout << (e->remove(490)) << std::endl;
e->printPretty();
std::cout << (b->remove(179)) << std::endl;
std::cout << (e->insert(18)) << std::endl;
std::cout << (e->remove(18)) << std::endl;
*d=*e;
*c=*b;
*a=*c;
std::cout << (a->remove(93)) << std::endl;
std::cout << (c->insert(55)) << std::endl;
a->printPretty();
*d=*b;
d->printPretty();
std::cout << (d->insert(429)) << std::endl;
e->printPretty();
std::cout << (e->insert(139)) << std::endl;
*e=*e;
std::cout << (e->remove(231)) << std::endl;
std::cout << (e->insert(139)) << std::endl;
std::cout << (e->insert(151)) << std::endl;
*c=*b;
std::cout << (b->remove(453)) << std::endl;
std::cout << (d->insert(429)) << std::endl;
std::cout << (d->remove(429)) << std::endl;
std::cout << (c->insert(347)) << std::endl;
std::cout << (c->remove(347)) << std::endl;
*a=*a;
*d=*d;
std::cout << (b->insert(402)) << std::endl;
std::cout << (b->insert(237)) << std::endl;
std::cout << (b->insert(402)) << std::endl;
std::cout << (c->insert(181)) << std::endl;
*e=*c;
*d=*d;
*b=*c;
std::cout << (e->remove(181)) << std::endl;
std::cout << (c->remove(181)) << std::endl;
std::cout << (d->remove(192)) << std::endl;
std::cout << (b->remove(181)) << std::endl;
*b=*e;
*b=*a;
*a=*a;
*b=*d;
std::cout << (c->remove(159)) << std::endl;
std::cout << (b->insert(275)) << std::endl;
b->printPretty();
std::cout << (c->insert(311)) << std::endl;
std::cout << (e->insert(138)) << std::endl;
*e=*a;
*d=*e;
std::cout << (c->remove(311)) << std::endl;
a->printPretty();
std::cout << (c->remove(321)) << std::endl;
*a=*a;
std::cout << (d->remove(195)) << std::endl;
std::cout << (c->insert(444)) << std::endl;
d->printPretty();
a->printPretty();
e->printPretty();
d->printPretty();
std::cout << (d->insert(441)) << std::endl;
std::cout << (c->insert(376)) << std::endl;
std::cout << (b->insert(443)) << std::endl;
std::cout << (d->insert(441)) << std::endl;
a->printPretty();
std::cout << (d->insert(441)) << std::endl;
std::cout << (b->insert(275)) << std::endl;
std::cout << (e->remove(281)) << std::endl;
*d=*d;
std::cout << (a->insert(446)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << (d->remove(441)) << std::endl;
std::cout << (b->insert(443)) << std::endl;
std::cout << (e->remove(292)) << std::endl;
*a=*d;
*d=*d;
std::cout << (a->remove(165)) << std::endl;
*b=*e;
std::cout << (d->remove(21)) << std::endl;
b->printPretty();
d->printPretty();
*e=*e;
*b=*c;
e->printPretty();
std::cout << (b->insert(439)) << std::endl;
*c=*a;
std::cout << (b->remove(444)) << std::endl;
*d=*a;
std::cout << (b->insert(439)) << std::endl;
std::cout << (d->remove(113)) << std::endl;
std::cout << (b->insert(438)) << std::endl;
std::cout << (e->insert(25)) << std::endl;
*a=*a;
c->printPretty();
*c=*c;
b->printPretty();
std::cout << (c->remove(83)) << std::endl;
std::cout << (d->insert(67)) << std::endl;
c->printPretty();
b->printPretty();
*a=*d;
std::cout << (c->insert(500)) << std::endl;
std::cout << (e->insert(25)) << std::endl;
c->printPretty();
std::cout << (d->remove(57)) << std::endl;
std::cout << (a->insert(67)) << std::endl;
std::cout << (a->insert(161)) << std::endl;
*b=*d;
*d=*c;
std::cout << (a->insert(67)) << std::endl;
*a=*c;
std::cout << (a->insert(500)) << std::endl;
std::cout << (d->remove(500)) << std::endl;
b->printPretty();
std::cout << (e->remove(266)) << std::endl;
std::cout << (a->insert(500)) << std::endl;
std::cout << (d->insert(128)) << std::endl;
std::cout << (a->insert(500)) << std::endl;
d->printPretty();
b->printPretty();
std::cout << (a->remove(500)) << std::endl;
std::cout << (d->remove(219)) << std::endl;
std::cout << (a->remove(49)) << std::endl;
std::cout << (e->remove(431)) << std::endl;
std::cout << (b->insert(67)) << std::endl;
std::cout << (b->insert(431)) << std::endl;
std::cout << (b->remove(431)) << std::endl;
b->printPretty();
*d=*b;
std::cout << (c->insert(500)) << std::endl;
b->printPretty();
std::cout << (d->remove(67)) << std::endl;
b->printPretty();
std::cout << (b->remove(283)) << std::endl;
b->printPretty();
std::cout << (e->remove(25)) << std::endl;
std::cout << (e->remove(454)) << std::endl;
std::cout << (b->remove(169)) << std::endl;
std::cout << (e->remove(489)) << std::endl;
std::cout << (e->insert(490)) << std::endl;
*c=*d;
std::cout << (b->remove(67)) << std::endl;
*a=*d;
*b=*b;
std::cout << (b->remove(313)) << std::endl;
std::cout << (a->remove(243)) << std::endl;
std::cout << (c->insert(54)) << std::endl;
e->printPretty();
std::cout << (a->insert(368)) << std::endl;
std::cout << (e->insert(490)) << std::endl;
*e=*e;
c->printPretty();
*d=*d;
std::cout << (e->remove(182)) << std::endl;
std::cout << (b->insert(148)) << std::endl;
std::cout << (d->remove(212)) << std::endl;
std::cout << (e->remove(490)) << std::endl;
std::cout << (c->insert(241)) << std::endl;
std::cout << (b->remove(135)) << std::endl;
std::cout << (c->insert(31)) << std::endl;
*a=*d;
b->printPretty();
std::cout << (c->insert(230)) << std::endl;
e->printPretty();
std::cout << (d->remove(169)) << std::endl;
std::cout << (a->remove(79)) << std::endl;
c->printPretty();
std::cout << (b->insert(148)) << std::endl;
a->printPretty();
std::cout << (d->insert(180)) << std::endl;
std::cout << (c->remove(241)) << std::endl;
std::cout << (c->insert(54)) << std::endl;
*e=*b;
std::cout << (e->insert(461)) << std::endl;
*a=*b;
std::cout << (c->remove(54)) << std::endl;
std::cout << (e->insert(461)) << std::endl;
std::cout << (d->insert(180)) << std::endl;
std::cout << (a->insert(174)) << std::endl;
std::cout << (c->insert(101)) << std::endl;
std::cout << (c->remove(31)) << std::endl;
std::cout << (b->insert(148)) << std::endl;
std::cout << (d->insert(495)) << std::endl;
std::cout << (c->remove(170)) << std::endl;
a->printPretty();
std::cout << (d->insert(180)) << std::endl;
std::cout << (e->remove(461)) << std::endl;
std::cout << (e->insert(148)) << std::endl;
b->printPretty();
*a=*b;
std::cout << (e->insert(285)) << std::endl;
a->printPretty();
std::cout << (e->remove(397)) << std::endl;
*a=*b;
*b=*c;
std::cout << (b->remove(258)) << std::endl;
*d=*d;
std::cout << (e->remove(285)) << std::endl;
std::cout << (b->insert(230)) << std::endl;
std::cout << (b->remove(101)) << std::endl;
std::cout << (c->remove(481)) << std::endl;
std::cout << (e->remove(173)) << std::endl;
std::cout << (e->insert(180)) << std::endl;
std::cout << (a->insert(480)) << std::endl;
a->printPretty();
std::cout << (d->remove(317)) << std::endl;
*c=*c;
std::cout << (c->insert(472)) << std::endl;
std::cout << (d->remove(251)) << std::endl;
std::cout << (d->remove(180)) << std::endl;
std::cout << (c->remove(421)) << std::endl;
d->printPretty();
std::cout << (d->insert(126)) << std::endl;
b->printPretty();
*c=*b;
std::cout << (a->remove(480)) << std::endl;
std::cout << (c->remove(230)) << std::endl;
b->printPretty();
std::cout << (d->remove(495)) << std::endl;
std::cout << (e->insert(190)) << std::endl;
std::cout << (d->insert(457)) << std::endl;
*b=*c;
*b=*c;
std::cout << (d->remove(126)) << std::endl;
std::cout << (e->remove(295)) << std::endl;
std::cout << (a->remove(43)) << std::endl;
*e=*d;
*a=*b;
e->printPretty();
*a=*d;
std::cout << (e->remove(187)) << std::endl;
std::cout << (e->remove(457)) << std::endl;
*a=*c;
std::cout << (d->remove(5)) << std::endl;
std::cout << (a->insert(194)) << std::endl;
a->printPretty();
std::cout << (a->remove(194)) << std::endl;
std::cout << (e->insert(167)) << std::endl;
*a=*c;
std::cout << (c->insert(24)) << std::endl;
std::cout << (d->insert(457)) << std::endl;
std::cout << (c->insert(130)) << std::endl;
std::cout << (e->remove(366)) << std::endl;
std::cout << (c->insert(24)) << std::endl;
std::cout << (d->remove(457)) << std::endl;
std::cout << (a->insert(473)) << std::endl;
d->printPretty();
d->printPretty();
std::cout << (c->remove(32)) << std::endl;
c->printPretty();
*d=*b;
std::cout << (c->insert(336)) << std::endl;
std::cout << (a->insert(473)) << std::endl;
std::cout << (e->remove(117)) << std::endl;
std::cout << (c->insert(64)) << std::endl;
std::cout << (d->remove(388)) << std::endl;
std::cout << (e->remove(167)) << std::endl;
std::cout << (e->insert(80)) << std::endl;
std::cout << (e->insert(80)) << std::endl;
std::cout << (c->insert(24)) << std::endl;
std::cout << (c->remove(66)) << std::endl;
c->printPretty();
e->printPretty();
a->printPretty();
std::cout << (b->remove(52)) << std::endl;
std::cout << (d->insert(4)) << std::endl;
*b=*a;
std::cout << (b->insert(92)) << std::endl;
std::cout << (b->remove(109)) << std::endl;
e->printPretty();
std::cout << (c->insert(64)) << std::endl;
*a=*c;
std::cout << (c->remove(336)) << std::endl;
std::cout << (c->insert(130)) << std::endl;
e->printPretty();
std::cout << (c->remove(24)) << std::endl;
*e=*e;
*c=*e;
std::cout << (d->remove(149)) << std::endl;
std::cout << (c->remove(391)) << std::endl;
*e=*c;
std::cout << (c->insert(80)) << std::endl;
std::cout << (e->remove(387)) << std::endl;
std::cout << (b->remove(466)) << std::endl;
std::cout << (b->insert(336)) << std::endl;
e->printPretty();
std::cout << (c->remove(80)) << std::endl;
std::cout << (a->insert(130)) << std::endl;
std::cout << (c->remove(94)) << std::endl;
std::cout << (b->remove(485)) << std::endl;
std::cout << (e->remove(488)) << std::endl;
*a=*e;
d->printPretty();
std::cout << (d->insert(4)) << std::endl;
std::cout << (d->insert(417)) << std::endl;
d->printPretty();
e->printPretty();
std::cout << (e->remove(256)) << std::endl;
std::cout << (a->remove(80)) << std::endl;
*c=*e;
*b=*a;
std::cout << (d->remove(4)) << std::endl;
b->printPretty();
std::cout << (b->insert(209)) << std::endl;
std::cout << (e->remove(97)) << std::endl;
std::cout << (b->remove(359)) << std::endl;
std::cout << (d->insert(133)) << std::endl;
std::cout << (b->insert(209)) << std::endl;
std::cout << (d->remove(153)) << std::endl;
std::cout << (d->remove(417)) << std::endl;
a->printPretty();
std::cout << (c->remove(332)) << std::endl;
std::cout << (e->remove(80)) << std::endl;
std::cout << (a->remove(48)) << std::endl;
std::cout << (d->remove(133)) << std::endl;
b->printPretty();
std::cout << (b->remove(103)) << std::endl;
std::cout << (e->remove(79)) << std::endl;
std::cout << (a->remove(301)) << std::endl;
std::cout << (c->insert(156)) << std::endl;
std::cout << (c->remove(289)) << std::endl;
std::cout << (b->remove(209)) << std::endl;
std::cout << (d->insert(323)) << std::endl;
std::cout << (c->insert(89)) << std::endl;
c->printPretty();
e->printPretty();
e->printPretty();
std::cout << (c->remove(139)) << std::endl;
std::cout << (d->remove(445)) << std::endl;
std::cout << (b->insert(114)) << std::endl;
*b=*b;
std::cout << (b->remove(114)) << std::endl;
d->printPretty();
e->printPretty();
a->printPretty();
*c=*c;
std::cout << (c->remove(68)) << std::endl;
a->printPretty();
std::cout << (c->remove(89)) << std::endl;
std::cout << (c->insert(80)) << std::endl;
*e=*c;
*d=*e;
std::cout << (a->insert(244)) << std::endl;
std::cout << (d->insert(81)) << std::endl;
std::cout << (d->remove(191)) << std::endl;
std::cout << (d->insert(156)) << std::endl;
std::cout << (b->insert(55)) << std::endl;
*b=*d;
a->printPretty();
b->printPretty();
std::cout << (a->remove(152)) << std::endl;
std::cout << (d->insert(471)) << std::endl;
std::cout << (d->insert(416)) << std::endl;
d->printPretty();
*e=*d;
std::cout << (b->insert(381)) << std::endl;
std::cout << (c->remove(260)) << std::endl;
std::cout << (a->remove(251)) << std::endl;
std::cout << (a->remove(244)) << std::endl;
b->printPretty();
std::cout << (a->insert(485)) << std::endl;
std::cout << (e->remove(54)) << std::endl;
std::cout << (c->insert(388)) << std::endl;
std::cout << (a->remove(314)) << std::endl;
*c=*a;
*a=*c;
*a=*e;
e->printPretty();
std::cout << (d->insert(477)) << std::endl;
std::cout << (a->insert(69)) << std::endl;
std::cout << (e->insert(92)) << std::endl;
std::cout << (d->remove(461)) << std::endl;
*d=*d;
std::cout << (a->remove(81)) << std::endl;
std::cout << (b->insert(80)) << std::endl;
std::cout << (a->remove(9)) << std::endl;
std::cout << (d->remove(156)) << std::endl;
std::cout << (c->remove(428)) << std::endl;
std::cout << (b->insert(431)) << std::endl;
*d=*c;
std::cout << (d->remove(485)) << std::endl;
e->printPretty();
e->printPretty();
std::cout << (e->remove(126)) << std::endl;
std::cout << (c->insert(320)) << std::endl;
d->printPretty();
std::cout << (b->remove(81)) << std::endl;
c->printPretty();
std::cout << (a->insert(416)) << std::endl;
std::cout << (e->insert(92)) << std::endl;
std::cout << (a->insert(239)) << std::endl;
std::cout << (a->insert(416)) << std::endl;
std::cout << (b->insert(19)) << std::endl;
std::cout << (a->remove(80)) << std::endl;
*e=*e;
std::cout << (c->remove(291)) << std::endl;
*e=*e;
std::cout << (c->insert(268)) << std::endl;
std::cout << (e->remove(184)) << std::endl;
d->printPretty();
std::cout << (e->remove(471)) << std::endl;
std::cout << (b->remove(80)) << std::endl;
std::cout << (b->remove(415)) << std::endl;
std::cout << (c->insert(485)) << std::endl;
*d=*e;
std::cout << (e->remove(86)) << std::endl;
std::cout << (e->remove(81)) << std::endl;
std::cout << (a->insert(69)) << std::endl;
std::cout << (c->insert(95)) << std::endl;
std::cout << (b->insert(19)) << std::endl;
std::cout << (b->insert(320)) << std::endl;
e->printPretty();
std::cout << (e->remove(439)) << std::endl;
std::cout << (d->insert(195)) << std::endl;
std::cout << (e->insert(80)) << std::endl;
*b=*e;
std::cout << (d->insert(81)) << std::endl;
std::cout << (a->remove(416)) << std::endl;
std::cout << (a->insert(239)) << std::endl;
std::cout << (e->remove(92)) << std::endl;
std::cout << (b->remove(416)) << std::endl;
*c=*a;
*c=*b;
std::cout << (d->insert(81)) << std::endl;
std::cout << (e->insert(41)) << std::endl;
std::cout << (d->insert(315)) << std::endl;
std::cout << (c->insert(92)) << std::endl;
std::cout << (e->remove(156)) << std::endl;
std::cout << (c->insert(163)) << std::endl;
std::cout << (d->remove(81)) << std::endl;
std::cout << (e->remove(80)) << std::endl;
*c=*d;
std::cout << (d->insert(195)) << std::endl;
std::cout << (e->insert(352)) << std::endl;
b->printPretty();
b->printPretty();
e->printPretty();
std::cout << (a->remove(29)) << std::endl;
std::cout << (d->remove(156)) << std::endl;
e->printPretty();
c->printPretty();
std::cout << (e->remove(492)) << std::endl;
std::cout << (c->insert(311)) << std::endl;
*a=*e;
*c=*a;
std::cout << (a->insert(416)) << std::endl;
std::cout << (b->insert(366)) << std::endl;
c->printPretty();
std::cout << (d->remove(104)) << std::endl;
std::cout << (b->insert(80)) << std::endl;
*b=*b;
std::cout << (d->insert(80)) << std::endl;
c->printPretty();
c->printPretty();
*d=*d;
std::cout << (e->insert(154)) << std::endl;
std::cout << (c->remove(233)) << std::endl;
std::cout << (b->insert(92)) << std::endl;
std::cout << (e->remove(163)) << std::endl;
std::cout << (a->remove(41)) << std::endl;
std::cout << (c->insert(352)) << std::endl;
*d=*c;
std::cout << (d->insert(452)) << std::endl;
std::cout << (c->remove(121)) << std::endl;
std::cout << (c->remove(322)) << std::endl;
std::cout << (d->remove(336)) << std::endl;
*d=*d;
std::cout << (c->insert(352)) << std::endl;
std::cout << (c->insert(472)) << std::endl;
std::cout << (b->insert(366)) << std::endl;
std::cout << (c->remove(352)) << std::endl;
std::cout << (b->insert(366)) << std::endl;
std::cout << (c->insert(472)) << std::endl;
*c=*e;
std::cout << (c->remove(484)) << std::endl;
std::cout << (c->remove(416)) << std::endl;
std::cout << (d->insert(452)) << std::endl;
std::cout << (b->insert(304)) << std::endl;
std::cout << (e->insert(352)) << std::endl;
*e=*c;
b->printPretty();
std::cout << (e->remove(41)) << std::endl;
std::cout << (c->insert(353)) << std::endl;
*a=*b;
*b=*b;
std::cout << (b->insert(425)) << std::endl;
std::cout << (a->remove(440)) << std::endl;
std::cout << (b->remove(304)) << std::endl;
std::cout << (e->insert(154)) << std::endl;
std::cout << (c->insert(41)) << std::endl;
std::cout << (a->remove(156)) << std::endl;
std::cout << (b->remove(378)) << std::endl;
std::cout << (c->remove(352)) << std::endl;
std::cout << (e->insert(241)) << std::endl;
*b=*d;
d->printPretty();
std::cout << (d->remove(256)) << std::endl;
std::cout << (a->remove(80)) << std::endl;
*d=*c;
std::cout << (c->insert(154)) << std::endl;
std::cout << (e->insert(496)) << std::endl;
*b=*c;
std::cout << (a->insert(366)) << std::endl;
std::cout << (a->remove(94)) << std::endl;
c->printPretty();
e->printPretty();
std::cout << (c->remove(41)) << std::endl;
std::cout << (c->remove(154)) << std::endl;
e->printPretty();
std::cout << (e->insert(352)) << std::endl;
c->printPretty();
std::cout << (e->insert(241)) << std::endl;
*c=*b;
std::cout << (b->insert(154)) << std::endl;
std::cout << (e->insert(352)) << std::endl;
std::cout << (d->insert(41)) << std::endl;
std::cout << (c->remove(276)) << std::endl;
b->printPretty();
std::cout << (d->remove(381)) << std::endl;
std::cout << (d->insert(22)) << std::endl;
std::cout << (b->remove(353)) << std::endl;
e->printPretty();
std::cout << (a->remove(357)) << std::endl;
std::cout << (c->remove(154)) << std::endl;
std::cout << (e->remove(241)) << std::endl;
std::cout << (d->remove(389)) << std::endl;
std::cout << (b->insert(41)) << std::endl;
std::cout << (d->insert(178)) << std::endl;
std::cout << (c->remove(41)) << std::endl;
*e=*d;
std::cout << (a->remove(92)) << std::endl;
*b=*d;
std::cout << (b->insert(41)) << std::endl;
std::cout << (b->insert(158)) << std::endl;
std::cout << (a->insert(119)) << std::endl;
std::cout << (d->remove(71)) << std::endl;
c->printPretty();
a->printPretty();
std::cout << (b->remove(162)) << std::endl;
std::cout << (a->remove(353)) << std::endl;
std::cout << (e->insert(154)) << std::endl;
std::cout << (a->remove(249)) << std::endl;
b->printPretty();
*d=*c;
std::cout << (c->insert(200)) << std::endl;
std::cout << (e->insert(22)) << std::endl;
d->printPretty();
std::cout << (d->insert(353)) << std::endl;
c->printPretty();
std::cout << (a->insert(303)) << std::endl;
d->printPretty();
std::cout << (d->remove(353)) << std::endl;
std::cout << (d->insert(182)) << std::endl;
c->printPretty();
a->printPretty();
std::cout << (b->remove(41)) << std::endl;
std::cout << (c->remove(353)) << std::endl;
std::cout << (b->insert(353)) << std::endl;
std::cout << (d->insert(498)) << std::endl;
std::cout << (e->insert(178)) << std::endl;
std::cout << (b->insert(276)) << std::endl;
std::cout << (a->remove(132)) << std::endl;
std::cout << (b->insert(353)) << std::endl;
a->printPretty();
std::cout << (b->insert(188)) << std::endl;
std::cout << (e->insert(178)) << std::endl;
std::cout << (c->insert(200)) << std::endl;
std::cout << (d->remove(479)) << std::endl;
b->printPretty();
std::cout << (e->insert(164)) << std::endl;
d->printPretty();
std::cout << (a->insert(303)) << std::endl;
std::cout << (c->insert(83)) << std::endl;
std::cout << (d->insert(182)) << std::endl;
b->printPretty();
std::cout << (c->remove(200)) << std::endl;
*c=*e;
std::cout << (b->remove(154)) << std::endl;
std::cout << (e->insert(409)) << std::endl;
std::cout << (c->remove(164)) << std::endl;
std::cout << (b->insert(488)) << std::endl;
std::cout << (b->remove(353)) << std::endl;
c->printPretty();
std::cout << (e->remove(141)) << std::endl;
*a=*c;
std::cout << (c->insert(178)) << std::endl;
d->printPretty();
b->printPretty();
std::cout << (c->insert(178)) << std::endl;
std::cout << (b->insert(158)) << std::endl;
std::cout << (a->insert(243)) << std::endl;
*c=*d;
std::cout << (e->insert(164)) << std::endl;
std::cout << (a->remove(154)) << std::endl;
d->printPretty();
std::cout << (b->remove(158)) << std::endl;
std::cout << (b->insert(113)) << std::endl;
std::cout << (d->insert(498)) << std::endl;
std::cout << (c->insert(182)) << std::endl;
std::cout << (c->remove(6)) << std::endl;
std::cout << (d->insert(463)) << std::endl;
std::cout << (e->insert(164)) << std::endl;
std::cout << (c->remove(324)) << std::endl;
std::cout << (e->remove(407)) << std::endl;
std::cout << (e->remove(443)) << std::endl;
std::cout << (e->insert(41)) << std::endl;
std::cout << (d->remove(265)) << std::endl;
c->printPretty();
*a=*d;
std::cout << (b->insert(178)) << std::endl;
std::cout << (c->insert(31)) << std::endl;
std::cout << (c->remove(99)) << std::endl;
e->printPretty();
std::cout << (b->insert(15)) << std::endl;
std::cout << (d->remove(122)) << std::endl;
std::cout << (c->insert(404)) << std::endl;
std::cout << (c->remove(404)) << std::endl;
std::cout << (b->insert(182)) << std::endl;
std::cout << (d->remove(498)) << std::endl;
std::cout << (c->remove(182)) << std::endl;
std::cout << (b->insert(188)) << std::endl;
*a=*d;
std::cout << (c->insert(31)) << std::endl;
std::cout << (b->remove(22)) << std::endl;
std::cout << (b->insert(276)) << std::endl;
std::cout << (c->insert(31)) << std::endl;
std::cout << (d->remove(252)) << std::endl;
std::cout << (c->insert(423)) << std::endl;
*c=*b;
std::cout << (e->remove(273)) << std::endl;
std::cout << (b->remove(488)) << std::endl;
std::cout << (a->remove(465)) << std::endl;
*c=*e;
std::cout << (e->insert(164)) << std::endl;
d->printPretty();
std::cout << (d->remove(327)) << std::endl;
std::cout << (e->insert(353)) << std::endl;
std::cout << (a->remove(463)) << std::endl;
std::cout << (c->insert(41)) << std::endl;
std::cout << (a->insert(85)) << std::endl;
std::cout << (b->insert(447)) << std::endl;
std::cout << (d->remove(349)) << std::endl;
c->printPretty();
std::cout << (b->remove(178)) << std::endl;
std::cout << (b->insert(188)) << std::endl;
return 0;
}
