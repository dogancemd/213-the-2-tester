#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << (a->insert(26)) << std::endl;
std::cout << (a->insert(26)) << std::endl;
a->printPretty();
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << (a->insert(200)) << std::endl;
std::cout << (b->remove(240)) << std::endl;
ScapegoatTree<int> *c=new ScapegoatTree<int>;
c->printPretty();
*b=*a;
*a=*c;
ScapegoatTree<int> *d=new ScapegoatTree<int>;
std::cout << (b->remove(200)) << std::endl;
c->printPretty();
std::cout << (d->remove(496)) << std::endl;
a->printPretty();
*b=*d;
std::cout << (c->insert(455)) << std::endl;
c->printPretty();
ScapegoatTree<int> *e=new ScapegoatTree<int>(*c);
e->printPretty();
std::cout << (e->remove(345)) << std::endl;
std::cout << (e->insert(455)) << std::endl;
std::cout << (e->remove(455)) << std::endl;
e->printPretty();
std::cout << (d->insert(316)) << std::endl;
std::cout << (b->insert(429)) << std::endl;
std::cout << (c->remove(455)) << std::endl;
std::cout << (d->remove(316)) << std::endl;
std::cout << (a->insert(175)) << std::endl;
std::cout << (b->insert(496)) << std::endl;
std::cout << (e->remove(5)) << std::endl;
*c=*d;
std::cout << (b->remove(298)) << std::endl;
std::cout << (a->remove(187)) << std::endl;
std::cout << (b->remove(139)) << std::endl;
std::cout << (b->insert(496)) << std::endl;
*d=*b;
std::cout << (a->insert(220)) << std::endl;
std::cout << (e->insert(435)) << std::endl;
b->printPretty();
std::cout << (e->insert(435)) << std::endl;
std::cout << (c->remove(495)) << std::endl;
std::cout << (c->insert(353)) << std::endl;
std::cout << (d->remove(380)) << std::endl;
std::cout << (c->remove(70)) << std::endl;
b->printPretty();
std::cout << (a->remove(175)) << std::endl;
std::cout << (e->insert(68)) << std::endl;
std::cout << (d->remove(429)) << std::endl;
std::cout << (d->remove(496)) << std::endl;
std::cout << (e->remove(435)) << std::endl;
*b=*e;
std::cout << (d->remove(116)) << std::endl;
b->printPretty();
std::cout << (c->insert(353)) << std::endl;
std::cout << (c->remove(353)) << std::endl;
std::cout << (e->insert(68)) << std::endl;
std::cout << (b->insert(371)) << std::endl;
std::cout << (e->insert(205)) << std::endl;
std::cout << (e->insert(68)) << std::endl;
a->printPretty();
e->printPretty();
std::cout << (a->insert(29)) << std::endl;
e->printPretty();
std::cout << (b->insert(466)) << std::endl;
b->printPretty();
std::cout << (b->insert(68)) << std::endl;
std::cout << (a->insert(302)) << std::endl;
a->printPretty();
std::cout << (e->insert(306)) << std::endl;
std::cout << (c->remove(374)) << std::endl;
std::cout << (c->remove(31)) << std::endl;
std::cout << (c->remove(83)) << std::endl;
std::cout << (a->remove(386)) << std::endl;
std::cout << (b->insert(371)) << std::endl;
b->printPretty();
std::cout << (d->remove(244)) << std::endl;
std::cout << (d->remove(497)) << std::endl;
std::cout << (a->remove(386)) << std::endl;
std::cout << (d->insert(91)) << std::endl;
*a=*d;
std::cout << (d->insert(91)) << std::endl;
*e=*a;
std::cout << (c->insert(75)) << std::endl;
std::cout << (e->remove(91)) << std::endl;
std::cout << (d->insert(91)) << std::endl;
std::cout << (d->remove(91)) << std::endl;
std::cout << (b->insert(289)) << std::endl;
*c=*a;
std::cout << (c->remove(91)) << std::endl;
e->printPretty();
std::cout << (c->remove(216)) << std::endl;
std::cout << (d->remove(5)) << std::endl;
std::cout << (a->remove(91)) << std::endl;
std::cout << (b->insert(25)) << std::endl;
a->printPretty();
std::cout << (d->insert(197)) << std::endl;
c->printPretty();
*c=*e;
std::cout << (b->remove(360)) << std::endl;
*e=*a;
*e=*a;
std::cout << (b->remove(381)) << std::endl;
std::cout << (e->insert(105)) << std::endl;
*e=*b;
e->printPretty();
std::cout << (d->insert(165)) << std::endl;
std::cout << (d->remove(331)) << std::endl;
std::cout << (a->remove(175)) << std::endl;
std::cout << (b->insert(289)) << std::endl;
std::cout << (d->insert(473)) << std::endl;
*e=*d;
std::cout << (a->remove(45)) << std::endl;
std::cout << (e->insert(473)) << std::endl;
std::cout << (e->insert(473)) << std::endl;
std::cout << (e->remove(197)) << std::endl;
e->printPretty();
*b=*a;
c->printPretty();
*b=*b;
std::cout << (d->remove(420)) << std::endl;
std::cout << (c->remove(414)) << std::endl;
std::cout << (e->remove(293)) << std::endl;
std::cout << (d->remove(105)) << std::endl;
c->printPretty();
std::cout << (c->remove(219)) << std::endl;
std::cout << (d->insert(165)) << std::endl;
std::cout << (a->insert(96)) << std::endl;
*e=*d;
std::cout << (e->insert(165)) << std::endl;
*e=*d;
std::cout << (b->remove(459)) << std::endl;
std::cout << (e->remove(2)) << std::endl;
std::cout << (a->insert(96)) << std::endl;
std::cout << (e->remove(197)) << std::endl;
a->printPretty();
*a=*e;
std::cout << (d->remove(322)) << std::endl;
std::cout << (d->insert(473)) << std::endl;
std::cout << (d->remove(412)) << std::endl;
std::cout << (a->insert(473)) << std::endl;
std::cout << (a->insert(473)) << std::endl;
c->printPretty();
std::cout << (a->remove(157)) << std::endl;
*b=*b;
std::cout << (b->insert(418)) << std::endl;
std::cout << (c->remove(310)) << std::endl;
*b=*c;
c->printPretty();
std::cout << (d->remove(434)) << std::endl;
std::cout << (a->insert(161)) << std::endl;
*b=*c;
std::cout << (d->insert(473)) << std::endl;
std::cout << (c->insert(379)) << std::endl;
std::cout << (a->insert(141)) << std::endl;
std::cout << (c->insert(223)) << std::endl;
std::cout << (d->insert(165)) << std::endl;
std::cout << (b->insert(473)) << std::endl;
b->printPretty();
c->printPretty();
std::cout << (b->remove(473)) << std::endl;
b->printPretty();
std::cout << (a->insert(461)) << std::endl;
std::cout << (d->remove(459)) << std::endl;
std::cout << (c->remove(223)) << std::endl;
d->printPretty();
std::cout << (e->insert(475)) << std::endl;
std::cout << (d->insert(435)) << std::endl;
*e=*c;
std::cout << (d->insert(43)) << std::endl;
std::cout << (d->insert(43)) << std::endl;
std::cout << (c->insert(163)) << std::endl;
std::cout << (e->remove(166)) << std::endl;
std::cout << (c->insert(379)) << std::endl;
std::cout << (b->remove(236)) << std::endl;
d->printPretty();
d->printPretty();
d->printPretty();
std::cout << (d->remove(411)) << std::endl;
std::cout << (a->remove(313)) << std::endl;
std::cout << (a->remove(139)) << std::endl;
a->printPretty();
std::cout << (c->remove(93)) << std::endl;
std::cout << (b->insert(444)) << std::endl;
std::cout << (a->remove(141)) << std::endl;
b->printPretty();
std::cout << (e->insert(379)) << std::endl;
*d=*d;
a->printPretty();
std::cout << (b->remove(165)) << std::endl;
std::cout << (e->remove(314)) << std::endl;
std::cout << (a->remove(132)) << std::endl;
std::cout << (b->remove(343)) << std::endl;
std::cout << (a->insert(461)) << std::endl;
std::cout << (b->insert(444)) << std::endl;
std::cout << (d->insert(176)) << std::endl;
c->printPretty();
*c=*d;
std::cout << (a->insert(473)) << std::endl;
*c=*d;
std::cout << (b->remove(444)) << std::endl;
c->printPretty();
*a=*a;
d->printPretty();
std::cout << (e->remove(109)) << std::endl;
std::cout << (a->remove(384)) << std::endl;
std::cout << (e->remove(283)) << std::endl;
std::cout << (d->insert(43)) << std::endl;
std::cout << (b->insert(9)) << std::endl;
std::cout << (c->insert(176)) << std::endl;
std::cout << (d->remove(43)) << std::endl;
std::cout << (b->remove(9)) << std::endl;
*a=*e;
std::cout << (e->remove(34)) << std::endl;
std::cout << (a->remove(422)) << std::endl;
std::cout << (b->insert(199)) << std::endl;
d->printPretty();
std::cout << (a->remove(379)) << std::endl;
*b=*e;
std::cout << (d->insert(245)) << std::endl;
*b=*a;
std::cout << (d->remove(435)) << std::endl;
*c=*e;
std::cout << (e->insert(379)) << std::endl;
std::cout << (d->insert(197)) << std::endl;
std::cout << (b->remove(274)) << std::endl;
std::cout << (c->insert(461)) << std::endl;
std::cout << (a->remove(290)) << std::endl;
c->printPretty();
a->printPretty();
d->printPretty();
*d=*d;
*d=*a;
*b=*e;
std::cout << (e->insert(450)) << std::endl;
std::cout << (e->remove(379)) << std::endl;
b->printPretty();
std::cout << (d->remove(59)) << std::endl;
a->printPretty();
e->printPretty();
*e=*b;
std::cout << (b->remove(106)) << std::endl;
std::cout << (c->remove(379)) << std::endl;
std::cout << (c->remove(461)) << std::endl;
*b=*a;
*e=*c;
std::cout << (c->remove(313)) << std::endl;
c->printPretty();
a->printPretty();
*e=*d;
std::cout << (d->remove(32)) << std::endl;
e->printPretty();
std::cout << (d->remove(341)) << std::endl;
e->printPretty();
std::cout << (a->remove(10)) << std::endl;
e->printPretty();
std::cout << (d->remove(353)) << std::endl;
a->printPretty();
std::cout << (a->remove(53)) << std::endl;
std::cout << (b->insert(241)) << std::endl;
*a=*d;
std::cout << (b->remove(241)) << std::endl;
std::cout << (e->remove(12)) << std::endl;
std::cout << (a->remove(39)) << std::endl;
b->printPretty();
c->printPretty();
d->printPretty();
std::cout << (c->insert(284)) << std::endl;
a->printPretty();
e->printPretty();
std::cout << (e->insert(217)) << std::endl;
std::cout << (e->insert(107)) << std::endl;
*a=*c;
std::cout << (b->remove(303)) << std::endl;
b->printPretty();
std::cout << (e->remove(217)) << std::endl;
*c=*d;
e->printPretty();
std::cout << (c->insert(238)) << std::endl;
e->printPretty();
*e=*c;
b->printPretty();
*a=*a;
*c=*b;
*d=*b;
*d=*b;
std::cout << (d->insert(397)) << std::endl;
std::cout << (a->insert(165)) << std::endl;
*b=*e;
std::cout << (b->remove(485)) << std::endl;
e->printPretty();
std::cout << (a->insert(469)) << std::endl;
std::cout << (b->remove(238)) << std::endl;
std::cout << (a->remove(284)) << std::endl;
*b=*a;
*d=*b;
std::cout << (b->remove(363)) << std::endl;
std::cout << (e->remove(238)) << std::endl;
std::cout << (d->insert(469)) << std::endl;
std::cout << (d->insert(293)) << std::endl;
*d=*e;
*d=*d;
*e=*e;
e->printPretty();
std::cout << (a->remove(469)) << std::endl;
a->printPretty();
c->printPretty();
*c=*b;
std::cout << (b->insert(165)) << std::endl;
c->printPretty();
c->printPretty();
std::cout << (c->remove(469)) << std::endl;
a->printPretty();
std::cout << (c->remove(165)) << std::endl;
c->printPretty();
std::cout << (a->remove(216)) << std::endl;
*d=*c;
std::cout << (c->remove(242)) << std::endl;
a->printPretty();
*c=*a;
std::cout << (b->insert(469)) << std::endl;
*b=*e;
std::cout << (a->insert(165)) << std::endl;
std::cout << (e->insert(234)) << std::endl;
e->printPretty();
std::cout << (c->remove(165)) << std::endl;
std::cout << (a->remove(279)) << std::endl;
std::cout << (d->remove(476)) << std::endl;
std::cout << (e->remove(398)) << std::endl;
std::cout << (e->remove(234)) << std::endl;
std::cout << (d->remove(267)) << std::endl;
e->printPretty();
std::cout << (d->remove(172)) << std::endl;
std::cout << (b->remove(311)) << std::endl;
e->printPretty();
e->printPretty();
std::cout << (a->remove(162)) << std::endl;
std::cout << (a->remove(165)) << std::endl;
*c=*c;
std::cout << (a->remove(163)) << std::endl;
std::cout << (d->remove(226)) << std::endl;
std::cout << (e->insert(359)) << std::endl;
std::cout << (e->remove(173)) << std::endl;
b->printPretty();
std::cout << (a->insert(160)) << std::endl;
std::cout << (c->insert(243)) << std::endl;
*a=*e;
*b=*e;
c->printPretty();
std::cout << (c->remove(302)) << std::endl;
std::cout << (b->insert(359)) << std::endl;
std::cout << (d->remove(22)) << std::endl;
*b=*a;
d->printPretty();
*e=*a;
e->printPretty();
std::cout << (c->insert(320)) << std::endl;
c->printPretty();
a->printPretty();
std::cout << (d->insert(87)) << std::endl;
*c=*a;
std::cout << (b->remove(359)) << std::endl;
d->printPretty();
std::cout << (c->insert(359)) << std::endl;
std::cout << (c->insert(359)) << std::endl;
std::cout << (c->insert(26)) << std::endl;
*b=*d;
*b=*a;
std::cout << (c->insert(26)) << std::endl;
std::cout << (a->insert(359)) << std::endl;
std::cout << (d->remove(87)) << std::endl;
b->printPretty();
std::cout << (e->insert(359)) << std::endl;
std::cout << (e->insert(144)) << std::endl;
std::cout << (e->insert(359)) << std::endl;
b->printPretty();
std::cout << (b->remove(359)) << std::endl;
std::cout << (b->insert(86)) << std::endl;
b->printPretty();
std::cout << (a->remove(110)) << std::endl;
std::cout << (b->remove(286)) << std::endl;
std::cout << (d->insert(120)) << std::endl;
std::cout << (e->insert(359)) << std::endl;
*a=*d;
std::cout << (b->insert(353)) << std::endl;
std::cout << (e->insert(140)) << std::endl;
std::cout << (e->remove(311)) << std::endl;
std::cout << (d->remove(500)) << std::endl;
std::cout << (e->insert(448)) << std::endl;
std::cout << (b->remove(353)) << std::endl;
std::cout << (d->remove(208)) << std::endl;
*b=*c;
*e=*d;
*c=*e;
std::cout << (e->remove(462)) << std::endl;
std::cout << (e->insert(125)) << std::endl;
std::cout << (c->insert(120)) << std::endl;
std::cout << (c->remove(120)) << std::endl;
*c=*a;
std::cout << (e->remove(120)) << std::endl;
*a=*d;
std::cout << (a->remove(120)) << std::endl;
d->printPretty();
std::cout << (b->remove(359)) << std::endl;
std::cout << (e->remove(125)) << std::endl;
std::cout << (d->insert(202)) << std::endl;
a->printPretty();
d->printPretty();
d->printPretty();
std::cout << (b->insert(482)) << std::endl;
std::cout << (d->remove(120)) << std::endl;
*d=*c;
std::cout << (c->remove(364)) << std::endl;
std::cout << (c->insert(172)) << std::endl;
*d=*d;
*b=*d;
*e=*b;
*e=*b;
std::cout << (c->remove(120)) << std::endl;
*d=*d;
std::cout << (b->remove(186)) << std::endl;
std::cout << (e->insert(120)) << std::endl;
a->printPretty();
std::cout << (e->insert(120)) << std::endl;
std::cout << (e->insert(15)) << std::endl;
b->printPretty();
std::cout << (b->remove(120)) << std::endl;
std::cout << (d->insert(68)) << std::endl;
std::cout << (c->insert(149)) << std::endl;
std::cout << (e->insert(15)) << std::endl;
d->printPretty();
std::cout << (a->insert(423)) << std::endl;
*e=*a;
std::cout << (d->remove(11)) << std::endl;
*c=*d;
*d=*d;
std::cout << (c->insert(68)) << std::endl;
*d=*c;
*e=*d;
*e=*d;
std::cout << (e->remove(68)) << std::endl;
*d=*e;
std::cout << (b->insert(264)) << std::endl;
std::cout << (a->insert(461)) << std::endl;
std::cout << (c->insert(431)) << std::endl;
std::cout << (a->insert(30)) << std::endl;
std::cout << (b->remove(264)) << std::endl;
e->printPretty();
std::cout << (d->insert(120)) << std::endl;
std::cout << (e->insert(120)) << std::endl;
e->printPretty();
std::cout << (e->remove(183)) << std::endl;
d->printPretty();
std::cout << (e->remove(382)) << std::endl;
e->printPretty();
e->printPretty();
std::cout << (d->insert(120)) << std::endl;
*d=*e;
std::cout << (b->insert(323)) << std::endl;
std::cout << (d->remove(120)) << std::endl;
c->printPretty();
std::cout << (c->remove(120)) << std::endl;
std::cout << (b->remove(323)) << std::endl;
*a=*c;
d->printPretty();
std::cout << (a->insert(431)) << std::endl;
std::cout << (c->remove(68)) << std::endl;
std::cout << (d->remove(430)) << std::endl;
std::cout << (e->remove(120)) << std::endl;
std::cout << (a->remove(410)) << std::endl;
*e=*b;
std::cout << (c->insert(431)) << std::endl;
c->printPretty();
std::cout << (c->insert(46)) << std::endl;
std::cout << (e->remove(376)) << std::endl;
std::cout << (a->remove(431)) << std::endl;
a->printPretty();
std::cout << (c->remove(198)) << std::endl;
std::cout << (d->remove(445)) << std::endl;
std::cout << (c->insert(217)) << std::endl;
e->printPretty();
*b=*d;
c->printPretty();
std::cout << (a->insert(381)) << std::endl;
std::cout << (d->insert(140)) << std::endl;
std::cout << (c->insert(431)) << std::endl;
std::cout << (c->insert(437)) << std::endl;
std::cout << (c->remove(267)) << std::endl;
std::cout << (d->insert(140)) << std::endl;
std::cout << (b->insert(372)) << std::endl;
std::cout << (e->insert(402)) << std::endl;
std::cout << (d->insert(313)) << std::endl;
std::cout << (d->insert(117)) << std::endl;
std::cout << (a->remove(68)) << std::endl;
std::cout << (b->remove(366)) << std::endl;
c->printPretty();
*b=*d;
std::cout << (a->insert(381)) << std::endl;
b->printPretty();
e->printPretty();
a->printPretty();
std::cout << (a->insert(381)) << std::endl;
*a=*c;
std::cout << (e->insert(66)) << std::endl;
std::cout << (c->insert(437)) << std::endl;
std::cout << (e->remove(402)) << std::endl;
std::cout << (b->remove(313)) << std::endl;
std::cout << (c->insert(345)) << std::endl;
std::cout << (e->remove(66)) << std::endl;
std::cout << (a->insert(147)) << std::endl;
b->printPretty();
*d=*a;
std::cout << (e->remove(292)) << std::endl;
*c=*e;
std::cout << (b->remove(171)) << std::endl;
*a=*e;
std::cout << (e->remove(284)) << std::endl;
e->printPretty();
std::cout << (b->insert(392)) << std::endl;
d->printPretty();
*a=*d;
*b=*d;
std::cout << (d->remove(211)) << std::endl;
std::cout << (a->insert(393)) << std::endl;
std::cout << (d->insert(46)) << std::endl;
std::cout << (d->remove(259)) << std::endl;
*a=*e;
c->printPretty();
*d=*e;
std::cout << (b->remove(494)) << std::endl;
*c=*b;
std::cout << (d->insert(183)) << std::endl;
std::cout << (c->insert(403)) << std::endl;
b->printPretty();
c->printPretty();
std::cout << (d->insert(425)) << std::endl;
std::cout << (b->remove(411)) << std::endl;
std::cout << (b->insert(357)) << std::endl;
std::cout << (b->insert(437)) << std::endl;
*b=*d;
d->printPretty();
e->printPretty();
*c=*b;
std::cout << (a->insert(333)) << std::endl;
std::cout << (b->insert(218)) << std::endl;
*a=*e;
std::cout << (a->insert(6)) << std::endl;
std::cout << (b->remove(183)) << std::endl;
std::cout << (d->insert(295)) << std::endl;
std::cout << (b->insert(425)) << std::endl;
std::cout << (d->remove(69)) << std::endl;
*b=*e;
b->printPretty();
e->printPretty();
std::cout << (a->insert(60)) << std::endl;
std::cout << (e->remove(142)) << std::endl;
std::cout << (d->remove(15)) << std::endl;
std::cout << (b->remove(438)) << std::endl;
std::cout << (d->insert(295)) << std::endl;
*e=*b;
std::cout << (d->remove(295)) << std::endl;
std::cout << (b->insert(33)) << std::endl;
d->printPretty();
std::cout << (d->insert(359)) << std::endl;
*a=*a;
std::cout << (d->insert(216)) << std::endl;
*c=*a;
std::cout << (c->remove(6)) << std::endl;
*b=*a;
std::cout << (c->insert(203)) << std::endl;
std::cout << (a->remove(230)) << std::endl;
std::cout << (a->remove(206)) << std::endl;
c->printPretty();
std::cout << (c->remove(203)) << std::endl;
std::cout << (a->insert(260)) << std::endl;
std::cout << (d->insert(183)) << std::endl;
std::cout << (e->insert(352)) << std::endl;
std::cout << (d->insert(183)) << std::endl;
std::cout << (a->insert(6)) << std::endl;
*d=*e;
*d=*c;
*b=*c;
std::cout << (b->remove(15)) << std::endl;
std::cout << (b->remove(60)) << std::endl;
d->printPretty();
*a=*c;
*b=*c;
std::cout << (d->remove(60)) << std::endl;
std::cout << (d->remove(286)) << std::endl;
std::cout << (c->insert(60)) << std::endl;
std::cout << (c->remove(79)) << std::endl;
std::cout << (c->insert(60)) << std::endl;
*d=*b;
std::cout << (c->remove(267)) << std::endl;
std::cout << (d->insert(60)) << std::endl;
std::cout << (c->remove(179)) << std::endl;
std::cout << (a->remove(60)) << std::endl;
*b=*b;
*a=*b;
std::cout << (e->remove(352)) << std::endl;
std::cout << (e->remove(16)) << std::endl;
std::cout << (b->insert(60)) << std::endl;
*d=*b;
std::cout << (a->remove(260)) << std::endl;
std::cout << (c->insert(60)) << std::endl;
std::cout << (d->remove(60)) << std::endl;
std::cout << (e->insert(213)) << std::endl;
std::cout << (a->insert(313)) << std::endl;
*c=*b;
*b=*e;
std::cout << (e->remove(283)) << std::endl;
*d=*e;
d->printPretty();
std::cout << (c->remove(60)) << std::endl;
std::cout << (e->remove(200)) << std::endl;
*a=*d;
*e=*c;
std::cout << (e->remove(73)) << std::endl;
std::cout << (a->insert(213)) << std::endl;
*e=*a;
a->printPretty();
std::cout << (a->insert(213)) << std::endl;
b->printPretty();
std::cout << (a->remove(477)) << std::endl;
std::cout << (d->remove(213)) << std::endl;
std::cout << (d->insert(52)) << std::endl;
std::cout << (e->remove(213)) << std::endl;
std::cout << (d->insert(392)) << std::endl;
std::cout << (a->remove(213)) << std::endl;
*c=*b;
std::cout << (d->remove(28)) << std::endl;
d->printPretty();
std::cout << (b->remove(213)) << std::endl;
std::cout << (b->insert(305)) << std::endl;
std::cout << (b->remove(308)) << std::endl;
std::cout << (c->remove(12)) << std::endl;
std::cout << (c->remove(213)) << std::endl;
*b=*d;
*c=*a;
c->printPretty();
d->printPretty();
std::cout << (a->remove(497)) << std::endl;
a->printPretty();
*d=*a;
*a=*e;
*d=*d;
std::cout << (e->remove(218)) << std::endl;
std::cout << (b->remove(392)) << std::endl;
std::cout << (a->remove(337)) << std::endl;
std::cout << (e->remove(376)) << std::endl;
std::cout << (e->remove(284)) << std::endl;
std::cout << (d->insert(156)) << std::endl;
std::cout << (b->remove(343)) << std::endl;
std::cout << (d->remove(277)) << std::endl;
std::cout << (a->remove(129)) << std::endl;
std::cout << (a->remove(24)) << std::endl;
*d=*a;
std::cout << (e->insert(193)) << std::endl;
std::cout << (c->remove(85)) << std::endl;
std::cout << (e->insert(193)) << std::endl;
std::cout << (e->remove(386)) << std::endl;
std::cout << (e->insert(262)) << std::endl;
*c=*c;
std::cout << (c->insert(191)) << std::endl;
std::cout << (e->insert(193)) << std::endl;
std::cout << (e->remove(262)) << std::endl;
std::cout << (b->insert(50)) << std::endl;
return 0;
}