#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << (a->insert(335)) << std::endl;
std::cout << (a->remove(129)) << std::endl;
std::cout << (a->remove(335)) << std::endl;
std::cout << (a->remove(18)) << std::endl;
std::cout << (a->insert(425)) << std::endl;
a->printPretty();
ScapegoatTree<int> *b=new ScapegoatTree<int>;
std::cout << (a->remove(425)) << std::endl;
std::cout << (b->insert(325)) << std::endl;
std::cout << (a->remove(411)) << std::endl;
ScapegoatTree<int> *c=new ScapegoatTree<int>(*a);
ScapegoatTree<int> *d=new ScapegoatTree<int>;
std::cout << (d->insert(326)) << std::endl;
std::cout << (b->remove(143)) << std::endl;
ScapegoatTree<int> *e=new ScapegoatTree<int>;
std::cout << (b->remove(325)) << std::endl;
*a=*b;
std::cout << (d->remove(326)) << std::endl;
std::cout << (e->remove(465)) << std::endl;
std::cout << (e->insert(266)) << std::endl;
std::cout << (e->insert(266)) << std::endl;
std::cout << (e->insert(221)) << std::endl;
a->printPretty();
std::cout << (e->insert(70)) << std::endl;
b->printPretty();
std::cout << (c->remove(473)) << std::endl;
*e=*b;
std::cout << (b->insert(152)) << std::endl;
std::cout << (b->insert(39)) << std::endl;
e->printPretty();
std::cout << (b->insert(152)) << std::endl;
std::cout << (d->remove(440)) << std::endl;
*b=*c;
std::cout << (a->insert(227)) << std::endl;
c->printPretty();
*d=*b;
std::cout << (a->insert(227)) << std::endl;
a->printPretty();
d->printPretty();
d->printPretty();
std::cout << (c->remove(136)) << std::endl;
*c=*a;
d->printPretty();
std::cout << (b->insert(369)) << std::endl;
b->printPretty();
std::cout << (a->insert(96)) << std::endl;
c->printPretty();
a->printPretty();
std::cout << (d->insert(112)) << std::endl;
*b=*e;
std::cout << (e->insert(318)) << std::endl;
std::cout << (b->remove(270)) << std::endl;
std::cout << (d->insert(311)) << std::endl;
b->printPretty();
*e=*c;
std::cout << (d->remove(466)) << std::endl;
e->printPretty();
*e=*d;
std::cout << (c->insert(227)) << std::endl;
std::cout << (c->insert(227)) << std::endl;
std::cout << (e->remove(112)) << std::endl;
c->printPretty();
std::cout << (e->remove(381)) << std::endl;
std::cout << (d->insert(370)) << std::endl;
std::cout << (a->insert(112)) << std::endl;
std::cout << (a->insert(94)) << std::endl;
std::cout << (d->insert(370)) << std::endl;
std::cout << (b->remove(136)) << std::endl;
a->printPretty();
std::cout << (e->remove(269)) << std::endl;
e->printPretty();
std::cout << (a->remove(10)) << std::endl;
std::cout << (a->insert(448)) << std::endl;
std::cout << (d->insert(380)) << std::endl;
*e=*a;
*c=*a;
std::cout << (b->remove(167)) << std::endl;
std::cout << (d->insert(112)) << std::endl;
*e=*d;
d->printPretty();
std::cout << (d->insert(57)) << std::endl;
std::cout << (d->insert(168)) << std::endl;
std::cout << (b->remove(440)) << std::endl;
*b=*a;
std::cout << (e->insert(263)) << std::endl;
*c=*a;
std::cout << (e->remove(263)) << std::endl;
std::cout << (c->remove(321)) << std::endl;
*b=*e;
std::cout << (b->insert(189)) << std::endl;
std::cout << (e->insert(311)) << std::endl;
*b=*c;
std::cout << (b->insert(227)) << std::endl;
std::cout << (b->insert(96)) << std::endl;
std::cout << (d->insert(131)) << std::endl;
std::cout << (c->remove(375)) << std::endl;
*d=*e;
*b=*b;
*c=*e;
a->printPretty();
std::cout << (c->remove(380)) << std::endl;
std::cout << (b->remove(112)) << std::endl;
d->printPretty();
std::cout << (d->insert(385)) << std::endl;
*a=*a;
std::cout << (d->remove(311)) << std::endl;
a->printPretty();
std::cout << (b->remove(29)) << std::endl;
std::cout << (a->insert(227)) << std::endl;
*e=*c;
*a=*c;
*d=*e;
std::cout << (b->insert(372)) << std::endl;
std::cout << (c->insert(311)) << std::endl;
e->printPretty();
c->printPretty();
std::cout << (c->insert(454)) << std::endl;
std::cout << (a->remove(370)) << std::endl;
*d=*e;
std::cout << (d->remove(112)) << std::endl;
*b=*a;
d->printPretty();
*a=*b;
b->printPretty();
std::cout << (a->insert(155)) << std::endl;
*d=*a;
*a=*d;
std::cout << (b->insert(112)) << std::endl;
std::cout << (d->remove(408)) << std::endl;
std::cout << (e->remove(370)) << std::endl;
d->printPretty();
e->printPretty();
*d=*a;
std::cout << (e->remove(311)) << std::endl;
*d=*d;
*a=*a;
*a=*d;
std::cout << (e->insert(112)) << std::endl;
std::cout << (d->remove(112)) << std::endl;
*c=*b;
std::cout << (d->remove(311)) << std::endl;
std::cout << (b->remove(360)) << std::endl;
std::cout << (b->remove(311)) << std::endl;
*b=*c;
*c=*d;
std::cout << (c->insert(155)) << std::endl;
std::cout << (d->remove(155)) << std::endl;
d->printPretty();
std::cout << (d->insert(298)) << std::endl;
std::cout << (e->insert(112)) << std::endl;
std::cout << (d->remove(463)) << std::endl;
std::cout << (c->remove(155)) << std::endl;
std::cout << (e->remove(12)) << std::endl;
std::cout << (a->insert(112)) << std::endl;
std::cout << (b->remove(112)) << std::endl;
std::cout << (d->remove(452)) << std::endl;
std::cout << (a->remove(112)) << std::endl;
c->printPretty();
e->printPretty();
std::cout << (a->insert(311)) << std::endl;
std::cout << (c->remove(121)) << std::endl;
*d=*c;
e->printPretty();
b->printPretty();
c->printPretty();
std::cout << (b->remove(311)) << std::endl;
*b=*c;
b->printPretty();
std::cout << (d->insert(169)) << std::endl;
std::cout << (a->remove(223)) << std::endl;
*a=*e;
a->printPretty();
std::cout << (a->insert(112)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << (a->remove(248)) << std::endl;
std::cout << (c->remove(153)) << std::endl;
std::cout << (a->insert(112)) << std::endl;
std::cout << (d->remove(169)) << std::endl;
std::cout << (c->insert(244)) << std::endl;
std::cout << (a->remove(428)) << std::endl;
c->printPretty();
std::cout << (c->remove(369)) << std::endl;
std::cout << (e->insert(277)) << std::endl;
std::cout << (e->remove(170)) << std::endl;
std::cout << (d->insert(11)) << std::endl;
std::cout << (c->remove(244)) << std::endl;
std::cout << (e->remove(112)) << std::endl;
c->printPretty();
std::cout << (a->insert(112)) << std::endl;
std::cout << (a->remove(112)) << std::endl;
a->printPretty();
std::cout << (e->remove(277)) << std::endl;
*b=*b;
std::cout << (e->insert(355)) << std::endl;
a->printPretty();
std::cout << (e->remove(355)) << std::endl;
c->printPretty();
*c=*b;
std::cout << (c->insert(362)) << std::endl;
std::cout << (b->remove(244)) << std::endl;
std::cout << (a->remove(407)) << std::endl;
*c=*e;
std::cout << (c->remove(264)) << std::endl;
std::cout << (a->insert(319)) << std::endl;
std::cout << (b->remove(88)) << std::endl;
std::cout << (b->remove(340)) << std::endl;
std::cout << (d->insert(118)) << std::endl;
std::cout << (c->insert(101)) << std::endl;
*d=*e;
std::cout << (c->remove(478)) << std::endl;
std::cout << (c->insert(101)) << std::endl;
std::cout << (c->insert(441)) << std::endl;
d->printPretty();
std::cout << (a->remove(319)) << std::endl;
std::cout << (c->insert(60)) << std::endl;
b->printPretty();
std::cout << (e->remove(412)) << std::endl;
*d=*b;
std::cout << (d->insert(356)) << std::endl;
d->printPretty();
*c=*d;
std::cout << (b->remove(222)) << std::endl;
std::cout << (c->insert(462)) << std::endl;
std::cout << (c->insert(462)) << std::endl;
a->printPretty();
e->printPretty();
*e=*c;
std::cout << (c->insert(431)) << std::endl;
c->printPretty();
b->printPretty();
std::cout << (a->insert(129)) << std::endl;
std::cout << (a->remove(129)) << std::endl;
d->printPretty();
b->printPretty();
*b=*b;
std::cout << (e->insert(49)) << std::endl;
*e=*e;
std::cout << (a->remove(92)) << std::endl;
d->printPretty();
std::cout << (d->insert(356)) << std::endl;
std::cout << (d->remove(356)) << std::endl;
std::cout << (d->remove(371)) << std::endl;
std::cout << (c->remove(151)) << std::endl;
a->printPretty();
*e=*c;
std::cout << (c->remove(222)) << std::endl;
std::cout << (e->remove(356)) << std::endl;
std::cout << (c->insert(462)) << std::endl;
*b=*a;
std::cout << (e->insert(431)) << std::endl;
*d=*e;
std::cout << (e->insert(279)) << std::endl;
*d=*a;
std::cout << (c->insert(356)) << std::endl;
std::cout << (c->insert(356)) << std::endl;
std::cout << (c->remove(111)) << std::endl;
std::cout << (d->insert(215)) << std::endl;
std::cout << (d->remove(215)) << std::endl;
std::cout << (e->insert(25)) << std::endl;
std::cout << (e->insert(215)) << std::endl;
std::cout << (e->insert(462)) << std::endl;
*d=*a;
c->printPretty();
std::cout << (e->insert(25)) << std::endl;
*a=*e;
std::cout << (b->insert(184)) << std::endl;
e->printPretty();
std::cout << (a->insert(431)) << std::endl;
c->printPretty();
*e=*c;
*e=*a;
e->printPretty();
std::cout << (d->remove(40)) << std::endl;
std::cout << (b->insert(487)) << std::endl;
*a=*b;
std::cout << (c->insert(431)) << std::endl;
std::cout << (d->insert(2)) << std::endl;
std::cout << (b->insert(184)) << std::endl;
std::cout << (e->remove(417)) << std::endl;
*a=*a;
std::cout << (c->remove(37)) << std::endl;
d->printPretty();
std::cout << (b->insert(25)) << std::endl;
std::cout << (d->remove(353)) << std::endl;
std::cout << (d->remove(2)) << std::endl;
e->printPretty();
std::cout << (a->remove(184)) << std::endl;
e->printPretty();
a->printPretty();
std::cout << (b->insert(176)) << std::endl;
std::cout << (e->insert(264)) << std::endl;
*b=*a;
*d=*d;
*c=*b;
std::cout << (e->remove(279)) << std::endl;
std::cout << (b->insert(487)) << std::endl;
c->printPretty();
std::cout << (c->insert(288)) << std::endl;
std::cout << (a->remove(487)) << std::endl;
std::cout << (c->remove(404)) << std::endl;
std::cout << (e->insert(385)) << std::endl;
std::cout << (e->insert(133)) << std::endl;
b->printPretty();
std::cout << (b->insert(183)) << std::endl;
std::cout << (c->remove(133)) << std::endl;
std::cout << (d->remove(423)) << std::endl;
*a=*a;
std::cout << (c->insert(487)) << std::endl;
std::cout << (e->insert(25)) << std::endl;
std::cout << (b->insert(388)) << std::endl;
*e=*a;
c->printPretty();
std::cout << (c->insert(126)) << std::endl;
std::cout << (e->insert(101)) << std::endl;
std::cout << (b->remove(487)) << std::endl;
std::cout << (c->insert(487)) << std::endl;
std::cout << (d->remove(109)) << std::endl;
std::cout << (b->insert(388)) << std::endl;
a->printPretty();
std::cout << (c->remove(51)) << std::endl;
std::cout << (d->insert(346)) << std::endl;
c->printPretty();
std::cout << (d->remove(294)) << std::endl;
std::cout << (c->insert(487)) << std::endl;
c->printPretty();
std::cout << (a->insert(294)) << std::endl;
std::cout << (d->insert(346)) << std::endl;
a->printPretty();
*e=*c;
std::cout << (e->insert(48)) << std::endl;
*c=*e;
*c=*a;
*b=*e;
std::cout << (d->remove(13)) << std::endl;
std::cout << (b->insert(126)) << std::endl;
std::cout << (a->insert(380)) << std::endl;
std::cout << (b->remove(126)) << std::endl;
std::cout << (e->remove(386)) << std::endl;
std::cout << (d->remove(237)) << std::endl;
std::cout << (e->insert(487)) << std::endl;
std::cout << (e->remove(81)) << std::endl;
std::cout << (a->remove(76)) << std::endl;
std::cout << (b->remove(48)) << std::endl;
std::cout << (c->insert(294)) << std::endl;
*e=*d;
std::cout << (c->insert(294)) << std::endl;
std::cout << (a->remove(380)) << std::endl;
std::cout << (c->remove(464)) << std::endl;
std::cout << (a->insert(294)) << std::endl;
std::cout << (a->insert(367)) << std::endl;
std::cout << (c->insert(294)) << std::endl;
*a=*e;
std::cout << (d->remove(346)) << std::endl;
e->printPretty();
c->printPretty();
a->printPretty();
std::cout << (a->insert(213)) << std::endl;
std::cout << (c->insert(304)) << std::endl;
std::cout << (d->remove(121)) << std::endl;
std::cout << (c->remove(304)) << std::endl;
e->printPretty();
b->printPretty();
std::cout << (c->insert(294)) << std::endl;
std::cout << (a->remove(346)) << std::endl;
b->printPretty();
std::cout << (c->insert(397)) << std::endl;
*b=*d;
*b=*b;
std::cout << (e->remove(346)) << std::endl;
*d=*a;
a->printPretty();
std::cout << (a->remove(178)) << std::endl;
std::cout << (a->remove(461)) << std::endl;
std::cout << (a->remove(213)) << std::endl;
std::cout << (d->remove(24)) << std::endl;
std::cout << (b->remove(96)) << std::endl;
std::cout << (c->remove(294)) << std::endl;
std::cout << (c->remove(153)) << std::endl;
std::cout << (d->remove(213)) << std::endl;
a->printPretty();
d->printPretty();
*a=*e;
std::cout << (c->insert(397)) << std::endl;
a->printPretty();
std::cout << (b->insert(23)) << std::endl;
std::cout << (e->remove(286)) << std::endl;
*d=*a;
std::cout << (b->insert(23)) << std::endl;
std::cout << (b->remove(181)) << std::endl;
std::cout << (b->insert(23)) << std::endl;
*d=*b;
a->printPretty();
std::cout << (d->remove(23)) << std::endl;
*b=*b;
c->printPretty();
std::cout << (c->insert(397)) << std::endl;
*c=*a;
*c=*e;
std::cout << (a->insert(371)) << std::endl;
a->printPretty();
*a=*b;
std::cout << (b->insert(491)) << std::endl;
std::cout << (a->remove(404)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << (d->insert(353)) << std::endl;
std::cout << (b->insert(98)) << std::endl;
*d=*e;
b->printPretty();
std::cout << (c->remove(432)) << std::endl;
std::cout << (b->insert(98)) << std::endl;
*b=*d;
d->printPretty();
*b=*e;
*e=*d;
std::cout << (d->remove(457)) << std::endl;
std::cout << (e->insert(398)) << std::endl;
*d=*e;
std::cout << (b->insert(378)) << std::endl;
std::cout << (d->insert(18)) << std::endl;
std::cout << (e->insert(398)) << std::endl;
std::cout << (e->insert(398)) << std::endl;
std::cout << (d->insert(398)) << std::endl;
std::cout << (e->insert(398)) << std::endl;
*c=*e;
std::cout << (d->insert(377)) << std::endl;
std::cout << (e->remove(136)) << std::endl;
std::cout << (a->insert(23)) << std::endl;
std::cout << (c->remove(398)) << std::endl;
std::cout << (e->insert(398)) << std::endl;
std::cout << (a->insert(147)) << std::endl;
b->printPretty();
std::cout << (c->remove(372)) << std::endl;
std::cout << (c->insert(450)) << std::endl;
std::cout << (e->insert(470)) << std::endl;
std::cout << (a->insert(457)) << std::endl;
std::cout << (e->remove(158)) << std::endl;
*c=*b;
std::cout << (c->insert(268)) << std::endl;
e->printPretty();
b->printPretty();
std::cout << (c->remove(268)) << std::endl;
std::cout << (b->remove(256)) << std::endl;
b->printPretty();
*d=*b;
std::cout << (b->insert(5)) << std::endl;
std::cout << (e->remove(470)) << std::endl;
std::cout << (e->insert(188)) << std::endl;
d->printPretty();
b->printPretty();
std::cout << (d->remove(378)) << std::endl;
*b=*a;
*e=*d;
std::cout << (c->insert(308)) << std::endl;
a->printPretty();
a->printPretty();
*c=*a;
std::cout << (e->insert(474)) << std::endl;
std::cout << (c->remove(95)) << std::endl;
std::cout << (b->remove(147)) << std::endl;
*c=*d;
std::cout << (e->insert(443)) << std::endl;
std::cout << (a->insert(457)) << std::endl;
*a=*d;
*d=*d;
*e=*c;
std::cout << (c->insert(93)) << std::endl;
d->printPretty();
c->printPretty();
a->printPretty();
*d=*e;
c->printPretty();
e->printPretty();
std::cout << (b->insert(23)) << std::endl;
std::cout << (b->insert(23)) << std::endl;
std::cout << (a->insert(228)) << std::endl;
*b=*e;
std::cout << (a->insert(228)) << std::endl;
std::cout << (a->insert(91)) << std::endl;
*e=*e;
std::cout << (c->insert(489)) << std::endl;
std::cout << (d->remove(59)) << std::endl;
*b=*a;
std::cout << (d->insert(353)) << std::endl;
std::cout << (b->remove(228)) << std::endl;
d->printPretty();
d->printPretty();
std::cout << (c->remove(489)) << std::endl;
*a=*b;
*c=*d;
*e=*c;
std::cout << (b->insert(63)) << std::endl;
*b=*a;
std::cout << (a->remove(91)) << std::endl;
std::cout << (c->insert(381)) << std::endl;
std::cout << (b->insert(110)) << std::endl;
a->printPretty();
std::cout << (d->insert(353)) << std::endl;
std::cout << (b->remove(492)) << std::endl;
*b=*b;
std::cout << (c->remove(120)) << std::endl;
std::cout << (c->remove(353)) << std::endl;
*d=*c;
std::cout << (d->remove(133)) << std::endl;
std::cout << (b->remove(413)) << std::endl;
*e=*a;
std::cout << (d->remove(37)) << std::endl;
std::cout << (b->insert(110)) << std::endl;
a->printPretty();
*e=*a;
std::cout << (e->insert(418)) << std::endl;
std::cout << (b->remove(110)) << std::endl;
std::cout << (d->remove(338)) << std::endl;
b->printPretty();
*d=*a;
std::cout << (b->remove(364)) << std::endl;
d->printPretty();
std::cout << (a->insert(79)) << std::endl;
std::cout << (a->remove(79)) << std::endl;
e->printPretty();
std::cout << (d->insert(260)) << std::endl;
std::cout << (b->insert(91)) << std::endl;
std::cout << (d->remove(124)) << std::endl;
std::cout << (c->remove(381)) << std::endl;
b->printPretty();
std::cout << (e->insert(418)) << std::endl;
std::cout << (c->remove(230)) << std::endl;
*d=*d;
b->printPretty();
d->printPretty();
std::cout << (e->remove(418)) << std::endl;
*d=*d;
std::cout << (b->remove(302)) << std::endl;
*c=*b;
std::cout << (c->insert(359)) << std::endl;
std::cout << (d->insert(260)) << std::endl;
d->printPretty();
*b=*a;
std::cout << (c->insert(145)) << std::endl;
std::cout << (c->insert(91)) << std::endl;
e->printPretty();
*b=*b;
std::cout << (b->insert(119)) << std::endl;
std::cout << (a->remove(447)) << std::endl;
*e=*d;
std::cout << (b->remove(119)) << std::endl;
std::cout << (b->remove(399)) << std::endl;
a->printPretty();
e->printPretty();
std::cout << (e->insert(260)) << std::endl;
std::cout << (e->remove(205)) << std::endl;
std::cout << (a->insert(212)) << std::endl;
*d=*d;
std::cout << (b->remove(281)) << std::endl;
d->printPretty();
*a=*e;
std::cout << (b->insert(491)) << std::endl;
std::cout << (a->insert(189)) << std::endl;
std::cout << (a->remove(290)) << std::endl;
std::cout << (b->remove(491)) << std::endl;
c->printPretty();
std::cout << (d->insert(260)) << std::endl;
*a=*d;
std::cout << (b->remove(146)) << std::endl;
*c=*b;
std::cout << (d->insert(260)) << std::endl;
*b=*b;
*e=*e;
std::cout << (b->remove(98)) << std::endl;
e->printPretty();
std::cout << (c->remove(482)) << std::endl;
std::cout << (a->remove(274)) << std::endl;
c->printPretty();
std::cout << (d->remove(260)) << std::endl;
std::cout << (a->remove(132)) << std::endl;
*e=*e;
std::cout << (a->insert(260)) << std::endl;
std::cout << (a->insert(400)) << std::endl;
*d=*a;
std::cout << (d->remove(400)) << std::endl;
std::cout << (b->insert(453)) << std::endl;
std::cout << (b->remove(261)) << std::endl;
std::cout << (a->insert(400)) << std::endl;
std::cout << (e->remove(302)) << std::endl;
std::cout << (c->remove(14)) << std::endl;
std::cout << (a->remove(308)) << std::endl;
std::cout << (b->remove(453)) << std::endl;
c->printPretty();
*b=*c;
a->printPretty();
a->printPretty();
*c=*b;
e->printPretty();
c->printPretty();
std::cout << (d->remove(96)) << std::endl;
std::cout << (a->insert(400)) << std::endl;
std::cout << (a->insert(260)) << std::endl;
std::cout << (e->remove(260)) << std::endl;
*e=*d;
std::cout << (d->remove(196)) << std::endl;
b->printPretty();
e->printPretty();
b->printPretty();
std::cout << (d->insert(260)) << std::endl;
std::cout << (a->insert(233)) << std::endl;
*a=*a;
std::cout << (a->insert(359)) << std::endl;
*a=*a;
e->printPretty();
std::cout << (d->insert(25)) << std::endl;
std::cout << (a->remove(359)) << std::endl;
c->printPretty();
std::cout << (e->remove(280)) << std::endl;
std::cout << (e->remove(339)) << std::endl;
*b=*d;
std::cout << (a->insert(62)) << std::endl;
std::cout << (b->insert(221)) << std::endl;
*b=*e;
d->printPretty();
*e=*d;
std::cout << (b->remove(260)) << std::endl;
std::cout << (d->remove(260)) << std::endl;
std::cout << (e->remove(25)) << std::endl;
std::cout << (c->insert(452)) << std::endl;
std::cout << (c->remove(452)) << std::endl;
std::cout << (c->insert(8)) << std::endl;
std::cout << (a->insert(348)) << std::endl;
std::cout << (b->insert(172)) << std::endl;
std::cout << (d->remove(311)) << std::endl;
*b=*c;
*a=*c;
*d=*b;
std::cout << (e->insert(42)) << std::endl;
std::cout << (b->remove(8)) << std::endl;
std::cout << (a->remove(479)) << std::endl;
std::cout << (b->insert(215)) << std::endl;
std::cout << (c->insert(223)) << std::endl;
std::cout << (c->remove(300)) << std::endl;
std::cout << (b->remove(442)) << std::endl;
std::cout << (a->insert(102)) << std::endl;
*e=*c;
*c=*e;
*a=*c;
*e=*d;
std::cout << (d->insert(8)) << std::endl;
std::cout << (e->insert(8)) << std::endl;
std::cout << (e->insert(8)) << std::endl;
*e=*d;
std::cout << (c->insert(147)) << std::endl;
std::cout << (b->insert(100)) << std::endl;
std::cout << (d->insert(8)) << std::endl;
std::cout << (e->insert(98)) << std::endl;
std::cout << (d->remove(306)) << std::endl;
*e=*c;
std::cout << (e->insert(341)) << std::endl;
std::cout << (e->remove(341)) << std::endl;
*e=*c;
std::cout << (d->insert(279)) << std::endl;
std::cout << (b->insert(214)) << std::endl;
std::cout << (a->remove(8)) << std::endl;
std::cout << (b->remove(85)) << std::endl;
*c=*e;
*b=*b;
std::cout << (a->insert(223)) << std::endl;
std::cout << (a->insert(223)) << std::endl;
*c=*b;
std::cout << (c->remove(352)) << std::endl;
e->printPretty();
*c=*d;
std::cout << (e->remove(449)) << std::endl;
std::cout << (c->insert(266)) << std::endl;
*a=*d;
c->printPretty();
std::cout << (e->insert(304)) << std::endl;
std::cout << (e->insert(147)) << std::endl;
std::cout << (b->remove(215)) << std::endl;
std::cout << (a->insert(199)) << std::endl;
std::cout << (b->insert(104)) << std::endl;
std::cout << (e->insert(223)) << std::endl;
std::cout << (a->remove(279)) << std::endl;
std::cout << (e->insert(474)) << std::endl;
std::cout << (d->insert(45)) << std::endl;
std::cout << (a->remove(105)) << std::endl;
return 0;
}
