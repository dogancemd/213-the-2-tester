#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
std::cout << (b->remove(159)) << std::endl;
b->printPretty();
ScapegoatTree<int> *c=new ScapegoatTree<int>(*b);
ScapegoatTree<int> *d=new ScapegoatTree<int>(*b);
std::cout << (c->insert(380)) << std::endl;
std::cout << (b->remove(386)) << std::endl;
ScapegoatTree<int> *e=new ScapegoatTree<int>(*b);
*b=*d;
b->printPretty();
std::cout << (c->insert(149)) << std::endl;
*a=*c;
d->printPretty();
std::cout << (a->remove(380)) << std::endl;
std::cout << (b->remove(135)) << std::endl;
std::cout << (d->remove(402)) << std::endl;
std::cout << (c->remove(487)) << std::endl;
e->printPretty();
std::cout << (b->remove(369)) << std::endl;
std::cout << (a->remove(301)) << std::endl;
std::cout << (c->remove(380)) << std::endl;
b->printPretty();
std::cout << (c->remove(3)) << std::endl;
std::cout << (a->insert(321)) << std::endl;
*d=*e;
std::cout << (d->remove(134)) << std::endl;
std::cout << (e->remove(320)) << std::endl;
*a=*a;
std::cout << (e->remove(304)) << std::endl;
b->printPretty();
std::cout << (b->insert(453)) << std::endl;
d->printPretty();
*c=*b;
std::cout << (d->insert(204)) << std::endl;
std::cout << (c->insert(22)) << std::endl;
std::cout << (d->remove(204)) << std::endl;
std::cout << (c->remove(453)) << std::endl;
std::cout << (e->insert(234)) << std::endl;
*c=*d;
std::cout << (c->remove(449)) << std::endl;
a->printPretty();
c->printPretty();
std::cout << (e->remove(125)) << std::endl;
std::cout << (d->insert(185)) << std::endl;
std::cout << (b->remove(453)) << std::endl;
std::cout << (e->insert(344)) << std::endl;
std::cout << (e->remove(282)) << std::endl;
std::cout << (e->insert(234)) << std::endl;
std::cout << (e->insert(234)) << std::endl;
std::cout << (d->insert(475)) << std::endl;
std::cout << (b->remove(473)) << std::endl;
std::cout << (e->insert(444)) << std::endl;
c->printPretty();
std::cout << (d->remove(304)) << std::endl;
c->printPretty();
b->printPretty();
e->printPretty();
b->printPretty();
std::cout << (d->remove(475)) << std::endl;
std::cout << (e->remove(488)) << std::endl;
std::cout << (e->remove(234)) << std::endl;
*d=*c;
*d=*b;
e->printPretty();
d->printPretty();
a->printPretty();
std::cout << (b->insert(299)) << std::endl;
std::cout << (c->insert(492)) << std::endl;
a->printPretty();
*d=*e;
std::cout << (a->insert(71)) << std::endl;
std::cout << (d->insert(344)) << std::endl;
std::cout << (d->remove(444)) << std::endl;
std::cout << (c->insert(492)) << std::endl;
b->printPretty();
std::cout << (a->remove(71)) << std::endl;
*c=*c;
std::cout << (e->insert(444)) << std::endl;
std::cout << (c->insert(492)) << std::endl;
c->printPretty();
*a=*e;
std::cout << (e->insert(344)) << std::endl;
std::cout << (c->insert(492)) << std::endl;
std::cout << (a->remove(449)) << std::endl;
std::cout << (e->remove(240)) << std::endl;
std::cout << (a->remove(444)) << std::endl;
std::cout << (c->insert(313)) << std::endl;
std::cout << (a->remove(136)) << std::endl;
std::cout << (d->remove(348)) << std::endl;
std::cout << (a->remove(344)) << std::endl;
std::cout << (d->remove(344)) << std::endl;
std::cout << (b->insert(299)) << std::endl;
std::cout << (b->insert(299)) << std::endl;
e->printPretty();
std::cout << (c->insert(313)) << std::endl;
std::cout << (e->insert(344)) << std::endl;
*b=*c;
std::cout << (d->remove(396)) << std::endl;
std::cout << (b->insert(398)) << std::endl;
*d=*c;
a->printPretty();
*c=*b;
b->printPretty();
*e=*c;
std::cout << (b->remove(313)) << std::endl;
std::cout << (e->remove(492)) << std::endl;
*a=*a;
std::cout << (a->remove(419)) << std::endl;
std::cout << (a->remove(56)) << std::endl;
std::cout << (b->insert(485)) << std::endl;
std::cout << (c->insert(344)) << std::endl;
d->printPretty();
std::cout << (b->insert(408)) << std::endl;
std::cout << (c->remove(284)) << std::endl;
std::cout << (d->insert(492)) << std::endl;
std::cout << (b->insert(408)) << std::endl;
*d=*e;
c->printPretty();
*e=*e;
*c=*c;
*e=*d;
std::cout << (b->remove(492)) << std::endl;
std::cout << (e->remove(378)) << std::endl;
std::cout << (d->remove(458)) << std::endl;
std::cout << (b->remove(408)) << std::endl;
std::cout << (c->insert(344)) << std::endl;
*c=*d;
std::cout << (d->remove(313)) << std::endl;
std::cout << (e->insert(473)) << std::endl;
std::cout << (b->insert(348)) << std::endl;
std::cout << (b->remove(402)) << std::endl;
std::cout << (b->remove(485)) << std::endl;
std::cout << (d->remove(379)) << std::endl;
std::cout << (a->remove(248)) << std::endl;
*d=*a;
a->printPretty();
c->printPretty();
std::cout << (b->remove(348)) << std::endl;
std::cout << (a->insert(479)) << std::endl;
std::cout << (d->remove(75)) << std::endl;
std::cout << (a->insert(352)) << std::endl;
std::cout << (a->remove(441)) << std::endl;
std::cout << (a->remove(392)) << std::endl;
std::cout << (a->insert(412)) << std::endl;
*c=*b;
std::cout << (e->insert(313)) << std::endl;
std::cout << (c->remove(178)) << std::endl;
*b=*d;
*e=*d;
std::cout << (c->remove(428)) << std::endl;
*b=*e;
std::cout << (c->remove(398)) << std::endl;
*d=*c;
c->printPretty();
std::cout << (a->insert(352)) << std::endl;
*b=*d;
d->printPretty();
a->printPretty();
std::cout << (a->remove(367)) << std::endl;
std::cout << (b->insert(289)) << std::endl;
std::cout << (a->remove(352)) << std::endl;
std::cout << (a->insert(33)) << std::endl;
std::cout << (d->insert(316)) << std::endl;
std::cout << (b->remove(289)) << std::endl;
*a=*b;
std::cout << (c->insert(175)) << std::endl;
e->printPretty();
*a=*a;
std::cout << (a->insert(63)) << std::endl;
*e=*a;
std::cout << (e->insert(63)) << std::endl;
c->printPretty();
std::cout << (e->remove(63)) << std::endl;
std::cout << (c->insert(291)) << std::endl;
std::cout << (a->remove(63)) << std::endl;
std::cout << (d->insert(115)) << std::endl;
std::cout << (c->remove(175)) << std::endl;
b->printPretty();
std::cout << (a->insert(487)) << std::endl;
std::cout << (d->insert(316)) << std::endl;
std::cout << (c->remove(291)) << std::endl;
d->printPretty();
std::cout << (b->remove(347)) << std::endl;
std::cout << (e->remove(174)) << std::endl;
b->printPretty();
std::cout << (a->insert(431)) << std::endl;
a->printPretty();
std::cout << (d->insert(115)) << std::endl;
std::cout << (a->insert(431)) << std::endl;
std::cout << (d->remove(387)) << std::endl;
a->printPretty();
*a=*c;
std::cout << (e->insert(42)) << std::endl;
*d=*c;
std::cout << (b->remove(440)) << std::endl;
*c=*b;
e->printPretty();
std::cout << (d->remove(322)) << std::endl;
std::cout << (e->remove(42)) << std::endl;
std::cout << (e->insert(158)) << std::endl;
std::cout << (e->remove(158)) << std::endl;
a->printPretty();
std::cout << (b->insert(103)) << std::endl;
std::cout << (b->insert(80)) << std::endl;
*c=*b;
*a=*c;
std::cout << (e->remove(84)) << std::endl;
d->printPretty();
std::cout << (a->remove(69)) << std::endl;
std::cout << (d->insert(472)) << std::endl;
std::cout << (c->remove(80)) << std::endl;
c->printPretty();
*e=*e;
std::cout << (d->insert(241)) << std::endl;
std::cout << (a->remove(80)) << std::endl;
std::cout << (c->remove(103)) << std::endl;
std::cout << (d->remove(360)) << std::endl;
std::cout << (b->insert(434)) << std::endl;
std::cout << (c->remove(105)) << std::endl;
std::cout << (b->insert(103)) << std::endl;
std::cout << (b->remove(80)) << std::endl;
c->printPretty();
*d=*b;
std::cout << (b->insert(436)) << std::endl;
c->printPretty();
std::cout << (d->insert(434)) << std::endl;
std::cout << (d->remove(434)) << std::endl;
c->printPretty();
std::cout << (c->insert(96)) << std::endl;
std::cout << (c->insert(225)) << std::endl;
std::cout << (b->remove(103)) << std::endl;
std::cout << (a->insert(4)) << std::endl;
std::cout << (c->remove(303)) << std::endl;
*a=*e;
b->printPretty();
std::cout << (d->remove(103)) << std::endl;
std::cout << (c->remove(225)) << std::endl;
*d=*e;
*b=*d;
std::cout << (b->insert(378)) << std::endl;
c->printPretty();
std::cout << (b->remove(167)) << std::endl;
std::cout << (c->insert(96)) << std::endl;
std::cout << (c->insert(96)) << std::endl;
std::cout << (c->insert(96)) << std::endl;
*b=*d;
std::cout << (d->remove(296)) << std::endl;
std::cout << (c->insert(96)) << std::endl;
*c=*b;
std::cout << (e->remove(272)) << std::endl;
*b=*d;
*a=*e;
*a=*c;
std::cout << (e->insert(302)) << std::endl;
b->printPretty();
*a=*e;
*b=*e;
std::cout << (b->insert(457)) << std::endl;
std::cout << (b->remove(497)) << std::endl;
*a=*c;
std::cout << (b->remove(302)) << std::endl;
std::cout << (c->insert(262)) << std::endl;
std::cout << (d->remove(357)) << std::endl;
*d=*b;
std::cout << (d->remove(369)) << std::endl;
std::cout << (b->insert(457)) << std::endl;
a->printPretty();
std::cout << (c->insert(262)) << std::endl;
std::cout << (e->remove(302)) << std::endl;
a->printPretty();
std::cout << (c->insert(228)) << std::endl;
std::cout << (b->insert(180)) << std::endl;
*d=*e;
std::cout << (c->remove(228)) << std::endl;
std::cout << (b->remove(180)) << std::endl;
*c=*d;
std::cout << (c->insert(208)) << std::endl;
std::cout << (c->remove(208)) << std::endl;
*b=*d;
d->printPretty();
std::cout << (a->insert(335)) << std::endl;
*a=*b;
e->printPretty();
*e=*e;
*c=*a;
std::cout << (d->remove(365)) << std::endl;
a->printPretty();
std::cout << (a->remove(392)) << std::endl;
*d=*e;
*b=*d;
std::cout << (c->insert(69)) << std::endl;
std::cout << (c->insert(69)) << std::endl;
e->printPretty();
*b=*b;
*d=*b;
b->printPretty();
b->printPretty();
std::cout << (d->remove(488)) << std::endl;
std::cout << (d->remove(401)) << std::endl;
d->printPretty();
std::cout << (c->insert(69)) << std::endl;
std::cout << (b->insert(34)) << std::endl;
e->printPretty();
std::cout << (d->remove(310)) << std::endl;
a->printPretty();
d->printPretty();
std::cout << (d->insert(329)) << std::endl;
std::cout << (b->remove(436)) << std::endl;
std::cout << (c->insert(69)) << std::endl;
*e=*c;
std::cout << (d->remove(329)) << std::endl;
*c=*e;
*a=*d;
e->printPretty();
d->printPretty();
std::cout << (c->insert(69)) << std::endl;
std::cout << (e->insert(153)) << std::endl;
*d=*b;
std::cout << (e->insert(69)) << std::endl;
b->printPretty();
std::cout << (d->remove(204)) << std::endl;
std::cout << (b->insert(401)) << std::endl;
std::cout << (b->remove(34)) << std::endl;
*c=*b;
std::cout << (d->insert(298)) << std::endl;
d->printPretty();
std::cout << (a->insert(445)) << std::endl;
std::cout << (c->remove(109)) << std::endl;
std::cout << (c->remove(258)) << std::endl;
*d=*e;
std::cout << (c->remove(21)) << std::endl;
std::cout << (e->remove(53)) << std::endl;
std::cout << (a->insert(445)) << std::endl;
e->printPretty();
std::cout << (a->insert(212)) << std::endl;
std::cout << (e->remove(69)) << std::endl;
std::cout << (a->insert(212)) << std::endl;
std::cout << (c->remove(140)) << std::endl;
*d=*c;
c->printPretty();
std::cout << (b->insert(401)) << std::endl;
*c=*e;
*a=*d;
std::cout << (c->remove(290)) << std::endl;
d->printPretty();
std::cout << (a->remove(401)) << std::endl;
std::cout << (c->insert(153)) << std::endl;
std::cout << (e->remove(8)) << std::endl;
std::cout << (c->remove(118)) << std::endl;
std::cout << (e->remove(153)) << std::endl;
*e=*c;
b->printPretty();
std::cout << (c->insert(304)) << std::endl;
std::cout << (e->remove(77)) << std::endl;
std::cout << (d->remove(341)) << std::endl;
std::cout << (b->insert(14)) << std::endl;
e->printPretty();
std::cout << (a->remove(440)) << std::endl;
std::cout << (b->remove(401)) << std::endl;
std::cout << (e->remove(262)) << std::endl;
std::cout << (c->remove(153)) << std::endl;
std::cout << (b->remove(14)) << std::endl;
a->printPretty();
std::cout << (a->insert(71)) << std::endl;
std::cout << (d->insert(131)) << std::endl;
std::cout << (c->remove(409)) << std::endl;
std::cout << (e->insert(355)) << std::endl;
std::cout << (d->remove(402)) << std::endl;
std::cout << (e->insert(153)) << std::endl;
*d=*e;
std::cout << (b->remove(283)) << std::endl;
*c=*a;
c->printPretty();
*e=*a;
*e=*e;
std::cout << (e->insert(437)) << std::endl;
std::cout << (d->remove(145)) << std::endl;
std::cout << (e->insert(329)) << std::endl;
std::cout << (a->remove(348)) << std::endl;
std::cout << (b->remove(429)) << std::endl;
*c=*c;
std::cout << (d->insert(315)) << std::endl;
c->printPretty();
std::cout << (b->remove(289)) << std::endl;
d->printPretty();
b->printPretty();
c->printPretty();
std::cout << (a->insert(246)) << std::endl;
std::cout << (c->insert(63)) << std::endl;
std::cout << (e->remove(437)) << std::endl;
*c=*c;
e->printPretty();
*d=*c;
std::cout << (d->insert(397)) << std::endl;
std::cout << (c->insert(216)) << std::endl;
std::cout << (a->remove(24)) << std::endl;
*e=*a;
c->printPretty();
std::cout << (c->remove(241)) << std::endl;
std::cout << (e->remove(71)) << std::endl;
e->printPretty();
c->printPretty();
*e=*e;
std::cout << (d->remove(63)) << std::endl;
std::cout << (e->remove(246)) << std::endl;
*c=*d;
std::cout << (a->remove(71)) << std::endl;
std::cout << (c->insert(397)) << std::endl;
std::cout << (e->remove(235)) << std::endl;
std::cout << (b->remove(273)) << std::endl;
std::cout << (c->insert(71)) << std::endl;
*c=*a;
std::cout << (a->remove(246)) << std::endl;
*b=*d;
std::cout << (c->remove(246)) << std::endl;
*d=*e;
std::cout << (d->insert(22)) << std::endl;
std::cout << (d->remove(265)) << std::endl;
std::cout << (b->remove(276)) << std::endl;
std::cout << (c->insert(242)) << std::endl;
b->printPretty();
std::cout << (b->remove(355)) << std::endl;
std::cout << (c->remove(369)) << std::endl;
std::cout << (b->insert(369)) << std::endl;
std::cout << (b->remove(365)) << std::endl;
std::cout << (b->insert(20)) << std::endl;
d->printPretty();
a->printPretty();
std::cout << (e->insert(100)) << std::endl;
b->printPretty();
std::cout << (e->remove(100)) << std::endl;
std::cout << (d->remove(22)) << std::endl;
std::cout << (c->remove(217)) << std::endl;
std::cout << (a->insert(337)) << std::endl;
std::cout << (a->insert(157)) << std::endl;
*d=*e;
std::cout << (b->remove(309)) << std::endl;
std::cout << (d->remove(127)) << std::endl;
*c=*a;
std::cout << (a->insert(337)) << std::endl;
std::cout << (a->insert(105)) << std::endl;
a->printPretty();
std::cout << (a->insert(105)) << std::endl;
*b=*c;
*b=*a;
std::cout << (c->insert(478)) << std::endl;
std::cout << (b->remove(52)) << std::endl;
std::cout << (c->insert(478)) << std::endl;
d->printPretty();
*e=*d;
std::cout << (a->remove(497)) << std::endl;
std::cout << (c->insert(337)) << std::endl;
std::cout << (a->insert(364)) << std::endl;
std::cout << (e->remove(51)) << std::endl;
std::cout << (e->insert(137)) << std::endl;
*b=*c;
a->printPretty();
*a=*c;
std::cout << (c->remove(338)) << std::endl;
c->printPretty();
std::cout << (b->insert(337)) << std::endl;
std::cout << (c->insert(157)) << std::endl;
*c=*b;
c->printPretty();
b->printPretty();
*b=*d;
std::cout << (c->remove(455)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << (e->insert(137)) << std::endl;
*e=*a;
std::cout << (e->remove(42)) << std::endl;
std::cout << (c->remove(157)) << std::endl;
c->printPretty();
std::cout << (b->insert(338)) << std::endl;
c->printPretty();
std::cout << (c->insert(186)) << std::endl;
std::cout << (e->insert(478)) << std::endl;
c->printPretty();
std::cout << (e->remove(225)) << std::endl;
std::cout << (c->remove(478)) << std::endl;
std::cout << (d->insert(300)) << std::endl;
std::cout << (a->insert(157)) << std::endl;
std::cout << (e->remove(337)) << std::endl;
std::cout << (e->insert(465)) << std::endl;
std::cout << (e->insert(478)) << std::endl;
e->printPretty();
c->printPretty();
std::cout << (a->remove(94)) << std::endl;
std::cout << (c->insert(480)) << std::endl;
d->printPretty();
e->printPretty();
std::cout << (a->remove(101)) << std::endl;
b->printPretty();
std::cout << (e->remove(478)) << std::endl;
std::cout << (d->insert(449)) << std::endl;
e->printPretty();
std::cout << (d->insert(449)) << std::endl;
c->printPretty();
std::cout << (c->remove(480)) << std::endl;
std::cout << (c->insert(337)) << std::endl;
std::cout << (c->insert(186)) << std::endl;
std::cout << (d->insert(328)) << std::endl;
*c=*b;
std::cout << (c->remove(350)) << std::endl;
std::cout << (d->insert(194)) << std::endl;
std::cout << (c->remove(338)) << std::endl;
*b=*b;
*b=*c;
e->printPretty();
e->printPretty();
*e=*a;
c->printPretty();
std::cout << (b->insert(432)) << std::endl;
b->printPretty();
std::cout << (a->remove(484)) << std::endl;
std::cout << (b->remove(432)) << std::endl;
std::cout << (c->insert(370)) << std::endl;
std::cout << (d->insert(125)) << std::endl;
b->printPretty();
std::cout << (c->remove(370)) << std::endl;
std::cout << (d->remove(125)) << std::endl;
a->printPretty();
std::cout << (d->remove(300)) << std::endl;
std::cout << (a->remove(157)) << std::endl;
*b=*d;
std::cout << (b->insert(328)) << std::endl;
*e=*e;
std::cout << (e->remove(263)) << std::endl;
std::cout << (e->insert(392)) << std::endl;
std::cout << (d->remove(449)) << std::endl;
std::cout << (d->remove(328)) << std::endl;
std::cout << (a->remove(136)) << std::endl;
std::cout << (d->insert(202)) << std::endl;
*c=*a;
std::cout << (e->insert(430)) << std::endl;
std::cout << (b->insert(194)) << std::endl;
std::cout << (e->remove(91)) << std::endl;
std::cout << (e->remove(237)) << std::endl;
std::cout << (a->insert(337)) << std::endl;
std::cout << (c->insert(478)) << std::endl;
b->printPretty();
d->printPretty();
*e=*c;
std::cout << (b->insert(194)) << std::endl;
a->printPretty();
std::cout << (b->insert(194)) << std::endl;
std::cout << (b->insert(194)) << std::endl;
std::cout << (a->insert(478)) << std::endl;
*a=*d;
std::cout << (d->insert(202)) << std::endl;
std::cout << (d->remove(194)) << std::endl;
*d=*b;
*c=*c;
std::cout << (c->remove(174)) << std::endl;
std::cout << (a->remove(194)) << std::endl;
std::cout << (b->insert(328)) << std::endl;
std::cout << (c->insert(337)) << std::endl;
d->printPretty();
a->printPretty();
std::cout << (e->remove(331)) << std::endl;
std::cout << (d->remove(194)) << std::endl;
std::cout << (e->remove(226)) << std::endl;
*b=*e;
std::cout << (e->insert(337)) << std::endl;
std::cout << (e->remove(364)) << std::endl;
a->printPretty();
*e=*b;
std::cout << (e->remove(487)) << std::endl;
std::cout << (c->remove(399)) << std::endl;
std::cout << (b->remove(478)) << std::endl;
a->printPretty();
std::cout << (d->remove(328)) << std::endl;
std::cout << (d->remove(261)) << std::endl;
d->printPretty();
*c=*b;
std::cout << (e->remove(337)) << std::endl;
std::cout << (c->insert(189)) << std::endl;
b->printPretty();
std::cout << (b->insert(337)) << std::endl;
std::cout << (a->remove(202)) << std::endl;
std::cout << (d->remove(460)) << std::endl;
std::cout << (b->remove(337)) << std::endl;
std::cout << (e->insert(404)) << std::endl;
e->printPretty();
std::cout << (d->insert(449)) << std::endl;
std::cout << (e->insert(454)) << std::endl;
std::cout << (c->insert(156)) << std::endl;
a->printPretty();
std::cout << (d->insert(260)) << std::endl;
d->printPretty();
a->printPretty();
*a=*a;
c->printPretty();
std::cout << (e->insert(454)) << std::endl;
std::cout << (c->remove(337)) << std::endl;
std::cout << (e->remove(232)) << std::endl;
std::cout << (c->remove(156)) << std::endl;
std::cout << (a->insert(481)) << std::endl;
std::cout << (a->remove(321)) << std::endl;
std::cout << (e->remove(377)) << std::endl;
d->printPretty();
std::cout << (c->insert(189)) << std::endl;
std::cout << (b->remove(144)) << std::endl;
*b=*d;
b->printPretty();
std::cout << (e->insert(478)) << std::endl;
std::cout << (d->insert(260)) << std::endl;
std::cout << (c->insert(189)) << std::endl;
std::cout << (a->insert(481)) << std::endl;
std::cout << (c->insert(189)) << std::endl;
d->printPretty();
*b=*a;
std::cout << (e->remove(285)) << std::endl;
c->printPretty();
std::cout << (a->remove(277)) << std::endl;
*d=*d;
std::cout << (c->remove(189)) << std::endl;
std::cout << (e->insert(404)) << std::endl;
std::cout << (d->remove(264)) << std::endl;
std::cout << (a->insert(481)) << std::endl;
std::cout << (e->insert(404)) << std::endl;
std::cout << (a->remove(475)) << std::endl;
std::cout << (c->insert(471)) << std::endl;
std::cout << (a->insert(481)) << std::endl;
std::cout << (d->insert(260)) << std::endl;
std::cout << (d->insert(424)) << std::endl;
std::cout << (a->remove(370)) << std::endl;
e->printPretty();
*d=*e;
std::cout << (e->remove(478)) << std::endl;
c->printPretty();
std::cout << (a->remove(481)) << std::endl;
std::cout << (b->insert(481)) << std::endl;
*b=*b;
std::cout << (c->insert(302)) << std::endl;
*a=*e;
std::cout << (d->insert(478)) << std::endl;
std::cout << (a->remove(404)) << std::endl;
std::cout << (a->insert(454)) << std::endl;
std::cout << (a->remove(404)) << std::endl;
std::cout << (d->remove(404)) << std::endl;
std::cout << (a->insert(205)) << std::endl;
b->printPretty();
std::cout << (e->insert(454)) << std::endl;
std::cout << (b->insert(481)) << std::endl;
std::cout << (c->insert(172)) << std::endl;
*a=*a;
std::cout << (d->remove(454)) << std::endl;
*e=*d;
std::cout << (c->remove(172)) << std::endl;
std::cout << (a->insert(205)) << std::endl;
std::cout << (e->insert(478)) << std::endl;
std::cout << (a->remove(205)) << std::endl;
std::cout << (a->insert(274)) << std::endl;
*a=*e;
std::cout << (e->remove(478)) << std::endl;
std::cout << (c->remove(471)) << std::endl;
std::cout << (a->insert(394)) << std::endl;
std::cout << (b->insert(77)) << std::endl;
*c=*c;
std::cout << (c->remove(302)) << std::endl;
*c=*a;
std::cout << (c->remove(338)) << std::endl;
return 0;
}