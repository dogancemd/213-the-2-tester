#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
std::cout << (a->remove(217)) << std::endl;
a->printPretty();
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << (a->remove(220)) << std::endl;
ScapegoatTree<int> *c=new ScapegoatTree<int>(*a);
std::cout << (c->insert(350)) << std::endl;
ScapegoatTree<int> *d=new ScapegoatTree<int>;
*c=*a;
std::cout << (c->insert(407)) << std::endl;
std::cout << (c->insert(494)) << std::endl;
std::cout << (a->insert(395)) << std::endl;
d->printPretty();
*c=*b;
ScapegoatTree<int> *e=new ScapegoatTree<int>(*d);
*a=*a;
*e=*a;
*e=*e;
std::cout << (a->remove(395)) << std::endl;
std::cout << (d->insert(454)) << std::endl;
std::cout << (b->insert(311)) << std::endl;
std::cout << (a->remove(243)) << std::endl;
std::cout << (d->remove(384)) << std::endl;
std::cout << (e->remove(241)) << std::endl;
std::cout << (e->remove(395)) << std::endl;
std::cout << (d->remove(386)) << std::endl;
std::cout << (d->remove(444)) << std::endl;
*b=*c;
*e=*a;
std::cout << (b->insert(443)) << std::endl;
std::cout << (b->remove(443)) << std::endl;
std::cout << (a->insert(72)) << std::endl;
std::cout << (a->remove(72)) << std::endl;
std::cout << (d->insert(74)) << std::endl;
std::cout << (a->remove(412)) << std::endl;
std::cout << (e->insert(392)) << std::endl;
std::cout << (c->insert(255)) << std::endl;
*c=*a;
a->printPretty();
a->printPretty();
*e=*d;
std::cout << (e->insert(494)) << std::endl;
*e=*c;
*a=*d;
a->printPretty();
*e=*a;
std::cout << (a->insert(134)) << std::endl;
*d=*e;
a->printPretty();
c->printPretty();
std::cout << (b->remove(28)) << std::endl;
std::cout << (d->insert(454)) << std::endl;
std::cout << (e->remove(268)) << std::endl;
std::cout << (c->insert(474)) << std::endl;
d->printPretty();
a->printPretty();
std::cout << (c->insert(391)) << std::endl;
std::cout << (d->insert(462)) << std::endl;
std::cout << (e->insert(454)) << std::endl;
c->printPretty();
std::cout << (c->remove(303)) << std::endl;
std::cout << (e->remove(94)) << std::endl;
std::cout << (c->insert(397)) << std::endl;
std::cout << (d->insert(233)) << std::endl;
c->printPretty();
std::cout << (a->remove(74)) << std::endl;
std::cout << (d->remove(442)) << std::endl;
std::cout << (e->insert(234)) << std::endl;
std::cout << (d->remove(454)) << std::endl;
*d=*c;
std::cout << (e->insert(292)) << std::endl;
std::cout << (a->remove(454)) << std::endl;
std::cout << (b->remove(334)) << std::endl;
std::cout << (c->insert(245)) << std::endl;
std::cout << (d->insert(474)) << std::endl;
b->printPretty();
std::cout << (d->insert(244)) << std::endl;
*d=*a;
std::cout << (a->remove(52)) << std::endl;
*d=*e;
std::cout << (d->remove(34)) << std::endl;
std::cout << (a->insert(209)) << std::endl;
std::cout << (d->insert(74)) << std::endl;
b->printPretty();
d->printPretty();
std::cout << (b->insert(187)) << std::endl;
std::cout << (e->insert(454)) << std::endl;
b->printPretty();
std::cout << (a->insert(134)) << std::endl;
std::cout << (b->remove(187)) << std::endl;
std::cout << (a->insert(134)) << std::endl;
*e=*a;
std::cout << (d->insert(454)) << std::endl;
std::cout << (a->insert(209)) << std::endl;
e->printPretty();
std::cout << (c->insert(140)) << std::endl;
b->printPretty();
std::cout << (a->insert(435)) << std::endl;
*c=*a;
std::cout << (e->insert(134)) << std::endl;
std::cout << (c->insert(413)) << std::endl;
std::cout << (b->insert(56)) << std::endl;
std::cout << (e->insert(330)) << std::endl;
std::cout << (c->remove(209)) << std::endl;
std::cout << (d->insert(292)) << std::endl;
std::cout << (a->insert(435)) << std::endl;
std::cout << (e->insert(209)) << std::endl;
std::cout << (a->insert(209)) << std::endl;
std::cout << (c->remove(435)) << std::endl;
*b=*b;
std::cout << (b->insert(388)) << std::endl;
std::cout << (b->remove(418)) << std::endl;
*c=*b;
std::cout << (c->remove(365)) << std::endl;
std::cout << (e->insert(134)) << std::endl;
std::cout << (e->remove(276)) << std::endl;
*e=*c;
std::cout << (c->insert(162)) << std::endl;
*e=*a;
std::cout << (b->remove(388)) << std::endl;
std::cout << (d->remove(290)) << std::endl;
std::cout << (d->insert(74)) << std::endl;
std::cout << (e->remove(281)) << std::endl;
d->printPretty();
std::cout << (b->insert(56)) << std::endl;
std::cout << (e->remove(134)) << std::endl;
std::cout << (c->remove(162)) << std::endl;
std::cout << (b->insert(56)) << std::endl;
std::cout << (e->remove(257)) << std::endl;
std::cout << (a->remove(209)) << std::endl;
std::cout << (c->insert(388)) << std::endl;
std::cout << (e->remove(209)) << std::endl;
std::cout << (c->insert(155)) << std::endl;
std::cout << (d->remove(361)) << std::endl;
std::cout << (b->insert(56)) << std::endl;
std::cout << (b->remove(56)) << std::endl;
a->printPretty();
a->printPretty();
a->printPretty();
std::cout << (d->insert(17)) << std::endl;
std::cout << (d->insert(74)) << std::endl;
b->printPretty();
std::cout << (e->insert(133)) << std::endl;
std::cout << (d->remove(74)) << std::endl;
b->printPretty();
std::cout << (b->insert(185)) << std::endl;
std::cout << (a->remove(205)) << std::endl;
std::cout << (d->insert(292)) << std::endl;
*a=*a;
std::cout << (c->insert(299)) << std::endl;
std::cout << (d->remove(166)) << std::endl;
c->printPretty();
std::cout << (e->remove(133)) << std::endl;
std::cout << (a->insert(253)) << std::endl;
std::cout << (a->insert(148)) << std::endl;
std::cout << (e->remove(210)) << std::endl;
*e=*e;
e->printPretty();
std::cout << (b->insert(37)) << std::endl;
std::cout << (e->insert(283)) << std::endl;
*a=*c;
std::cout << (a->remove(464)) << std::endl;
b->printPretty();
*e=*e;
a->printPretty();
a->printPretty();
*e=*c;
std::cout << (d->insert(454)) << std::endl;
std::cout << (d->remove(234)) << std::endl;
*a=*d;
std::cout << (c->insert(191)) << std::endl;
std::cout << (c->remove(56)) << std::endl;
std::cout << (a->insert(334)) << std::endl;
std::cout << (c->remove(155)) << std::endl;
std::cout << (c->insert(300)) << std::endl;
std::cout << (c->remove(191)) << std::endl;
std::cout << (b->remove(185)) << std::endl;
std::cout << (a->insert(148)) << std::endl;
std::cout << (d->insert(292)) << std::endl;
*b=*d;
e->printPretty();
std::cout << (d->insert(120)) << std::endl;
std::cout << (d->remove(159)) << std::endl;
std::cout << (d->insert(304)) << std::endl;
std::cout << (b->remove(286)) << std::endl;
std::cout << (c->insert(248)) << std::endl;
*a=*b;
std::cout << (a->insert(454)) << std::endl;
std::cout << (d->remove(174)) << std::endl;
std::cout << (b->remove(358)) << std::endl;
*c=*b;
b->printPretty();
std::cout << (e->remove(299)) << std::endl;
std::cout << (a->remove(454)) << std::endl;
std::cout << (a->remove(411)) << std::endl;
std::cout << (c->insert(90)) << std::endl;
std::cout << (a->insert(17)) << std::endl;
*d=*d;
std::cout << (e->insert(155)) << std::endl;
std::cout << (e->remove(146)) << std::endl;
b->printPretty();
std::cout << (b->insert(7)) << std::endl;
c->printPretty();
std::cout << (a->insert(166)) << std::endl;
b->printPretty();
std::cout << (d->insert(88)) << std::endl;
std::cout << (c->insert(477)) << std::endl;
std::cout << (a->insert(5)) << std::endl;
std::cout << (b->insert(369)) << std::endl;
a->printPretty();
std::cout << (e->insert(153)) << std::endl;
std::cout << (e->remove(388)) << std::endl;
std::cout << (b->insert(255)) << std::endl;
std::cout << (d->insert(473)) << std::endl;
*b=*b;
std::cout << (d->insert(101)) << std::endl;
d->printPretty();
std::cout << (e->insert(249)) << std::endl;
std::cout << (b->insert(400)) << std::endl;
*e=*c;
std::cout << (c->remove(210)) << std::endl;
std::cout << (a->remove(5)) << std::endl;
d->printPretty();
std::cout << (e->insert(23)) << std::endl;
*b=*e;
d->printPretty();
std::cout << (d->insert(279)) << std::endl;
std::cout << (b->remove(477)) << std::endl;
std::cout << (e->insert(454)) << std::endl;
a->printPretty();
b->printPretty();
*a=*d;
a->printPretty();
std::cout << (c->remove(292)) << std::endl;
*c=*a;
std::cout << (b->remove(17)) << std::endl;
d->printPretty();
std::cout << (a->remove(441)) << std::endl;
std::cout << (d->insert(388)) << std::endl;
std::cout << (d->remove(456)) << std::endl;
std::cout << (d->insert(84)) << std::endl;
*a=*b;
std::cout << (e->remove(454)) << std::endl;
*b=*c;
std::cout << (b->remove(106)) << std::endl;
e->printPretty();
*a=*d;
*a=*d;
*e=*a;
*c=*a;
*a=*e;
std::cout << (a->insert(84)) << std::endl;
std::cout << (c->remove(120)) << std::endl;
std::cout << (a->insert(17)) << std::endl;
std::cout << (c->remove(250)) << std::endl;
std::cout << (a->remove(88)) << std::endl;
std::cout << (b->insert(170)) << std::endl;
std::cout << (d->remove(17)) << std::endl;
std::cout << (c->remove(279)) << std::endl;
*d=*a;
e->printPretty();
std::cout << (a->insert(246)) << std::endl;
std::cout << (a->insert(227)) << std::endl;
std::cout << (b->remove(120)) << std::endl;
*a=*c;
std::cout << (a->insert(388)) << std::endl;
std::cout << (a->insert(266)) << std::endl;
std::cout << (a->remove(58)) << std::endl;
std::cout << (d->insert(304)) << std::endl;
c->printPretty();
*d=*a;
std::cout << (a->remove(304)) << std::endl;
std::cout << (c->remove(21)) << std::endl;
d->printPretty();
*d=*a;
std::cout << (e->insert(301)) << std::endl;
std::cout << (c->remove(304)) << std::endl;
std::cout << (d->remove(154)) << std::endl;
*b=*b;
std::cout << (d->remove(473)) << std::endl;
std::cout << (d->insert(168)) << std::endl;
std::cout << (d->remove(167)) << std::endl;
std::cout << (d->insert(346)) << std::endl;
std::cout << (a->remove(454)) << std::endl;
std::cout << (c->remove(84)) << std::endl;
std::cout << (a->remove(372)) << std::endl;
*b=*c;
*a=*d;
d->printPretty();
std::cout << (c->insert(75)) << std::endl;
c->printPretty();
*e=*a;
*c=*c;
std::cout << (a->insert(402)) << std::endl;
b->printPretty();
*a=*c;
std::cout << (a->remove(127)) << std::endl;
std::cout << (a->remove(454)) << std::endl;
std::cout << (a->insert(276)) << std::endl;
e->printPretty();
a->printPretty();
std::cout << (d->insert(430)) << std::endl;
*e=*a;
std::cout << (c->insert(292)) << std::endl;
std::cout << (a->remove(88)) << std::endl;
a->printPretty();
c->printPretty();
std::cout << (b->remove(292)) << std::endl;
b->printPretty();
std::cout << (d->remove(348)) << std::endl;
std::cout << (e->insert(66)) << std::endl;
std::cout << (d->remove(376)) << std::endl;
std::cout << (e->remove(445)) << std::endl;
*b=*e;
std::cout << (a->insert(74)) << std::endl;
std::cout << (e->insert(66)) << std::endl;
std::cout << (c->insert(473)) << std::endl;
std::cout << (b->remove(101)) << std::endl;
std::cout << (d->insert(238)) << std::endl;
b->printPretty();
std::cout << (a->remove(75)) << std::endl;
std::cout << (c->remove(39)) << std::endl;
e->printPretty();
std::cout << (a->remove(206)) << std::endl;
std::cout << (b->remove(401)) << std::endl;
std::cout << (d->insert(454)) << std::endl;
std::cout << (c->insert(394)) << std::endl;
*b=*d;
*e=*b;
std::cout << (e->remove(217)) << std::endl;
std::cout << (c->insert(304)) << std::endl;
e->printPretty();
std::cout << (e->insert(493)) << std::endl;
std::cout << (b->remove(266)) << std::endl;
d->printPretty();
std::cout << (c->remove(293)) << std::endl;
*b=*d;
c->printPretty();
*c=*d;
c->printPretty();
a->printPretty();
std::cout << (e->insert(25)) << std::endl;
b->printPretty();
std::cout << (b->remove(276)) << std::endl;
std::cout << (e->remove(473)) << std::endl;
std::cout << (c->insert(494)) << std::endl;
std::cout << (e->remove(479)) << std::endl;
e->printPretty();
std::cout << (c->insert(266)) << std::endl;
*d=*b;
std::cout << (d->insert(108)) << std::endl;
std::cout << (a->remove(292)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << (b->remove(281)) << std::endl;
std::cout << (e->remove(388)) << std::endl;
std::cout << (e->insert(292)) << std::endl;
std::cout << (a->remove(101)) << std::endl;
a->printPretty();
*d=*d;
std::cout << (c->remove(101)) << std::endl;
std::cout << (a->insert(152)) << std::endl;
std::cout << (d->insert(238)) << std::endl;
std::cout << (b->insert(485)) << std::endl;
std::cout << (e->remove(346)) << std::endl;
d->printPretty();
std::cout << (d->remove(17)) << std::endl;
c->printPretty();
*a=*c;
std::cout << (e->insert(454)) << std::endl;
*e=*b;
std::cout << (e->insert(454)) << std::endl;
std::cout << (e->insert(485)) << std::endl;
*d=*d;
std::cout << (b->insert(194)) << std::endl;
*c=*c;
c->printPretty();
*b=*d;
std::cout << (b->insert(98)) << std::endl;
std::cout << (a->remove(88)) << std::endl;
std::cout << (c->remove(44)) << std::endl;
std::cout << (d->insert(145)) << std::endl;
std::cout << (b->insert(325)) << std::endl;
std::cout << (a->remove(454)) << std::endl;
std::cout << (a->remove(298)) << std::endl;
e->printPretty();
std::cout << (b->remove(58)) << std::endl;
std::cout << (a->insert(132)) << std::endl;
*c=*a;
std::cout << (c->insert(494)) << std::endl;
std::cout << (d->remove(101)) << std::endl;
std::cout << (a->insert(84)) << std::endl;
std::cout << (a->remove(388)) << std::endl;
std::cout << (a->remove(415)) << std::endl;
*c=*c;
std::cout << (c->insert(226)) << std::endl;
b->printPretty();
std::cout << (a->remove(266)) << std::endl;
std::cout << (d->insert(266)) << std::endl;
std::cout << (d->remove(292)) << std::endl;
e->printPretty();
std::cout << (c->remove(266)) << std::endl;
std::cout << (c->remove(132)) << std::endl;
std::cout << (a->insert(430)) << std::endl;
std::cout << (c->insert(298)) << std::endl;
std::cout << (c->remove(346)) << std::endl;
std::cout << (d->remove(108)) << std::endl;
d->printPretty();
*a=*c;
d->printPretty();
std::cout << (e->remove(388)) << std::endl;
*b=*e;
std::cout << (b->insert(266)) << std::endl;
std::cout << (c->remove(181)) << std::endl;
std::cout << (a->insert(388)) << std::endl;
*e=*b;
std::cout << (b->insert(84)) << std::endl;
d->printPretty();
std::cout << (b->remove(286)) << std::endl;
std::cout << (c->insert(292)) << std::endl;
std::cout << (d->remove(145)) << std::endl;
c->printPretty();
std::cout << (d->remove(238)) << std::endl;
e->printPretty();
std::cout << (d->insert(84)) << std::endl;
std::cout << (e->insert(243)) << std::endl;
std::cout << (c->insert(238)) << std::endl;
std::cout << (c->remove(430)) << std::endl;
std::cout << (a->insert(226)) << std::endl;
*a=*d;
std::cout << (e->insert(490)) << std::endl;
std::cout << (e->remove(101)) << std::endl;
std::cout << (c->insert(324)) << std::endl;
std::cout << (d->insert(168)) << std::endl;
std::cout << (a->insert(50)) << std::endl;
b->printPretty();
std::cout << (e->remove(317)) << std::endl;
std::cout << (b->remove(486)) << std::endl;
std::cout << (c->insert(349)) << std::endl;
std::cout << (e->insert(130)) << std::endl;
*a=*e;
a->printPretty();
std::cout << (e->remove(243)) << std::endl;
a->printPretty();
std::cout << (e->insert(346)) << std::endl;
*a=*a;
std::cout << (b->insert(84)) << std::endl;
std::cout << (a->remove(454)) << std::endl;
std::cout << (e->remove(130)) << std::endl;
b->printPretty();
std::cout << (a->insert(238)) << std::endl;
std::cout << (b->insert(238)) << std::endl;
std::cout << (a->remove(292)) << std::endl;
std::cout << (d->insert(84)) << std::endl;
std::cout << (b->remove(292)) << std::endl;
*d=*a;
std::cout << (c->insert(238)) << std::endl;
std::cout << (b->insert(346)) << std::endl;
std::cout << (a->insert(88)) << std::endl;
std::cout << (d->insert(418)) << std::endl;
std::cout << (e->remove(430)) << std::endl;
std::cout << (a->insert(84)) << std::endl;
std::cout << (b->insert(135)) << std::endl;
a->printPretty();
std::cout << (d->remove(321)) << std::endl;
std::cout << (a->remove(266)) << std::endl;
std::cout << (b->remove(135)) << std::endl;
std::cout << (c->insert(226)) << std::endl;
std::cout << (a->remove(346)) << std::endl;
std::cout << (a->remove(168)) << std::endl;
c->printPretty();
std::cout << (a->remove(88)) << std::endl;
d->printPretty();
*d=*b;
std::cout << (d->remove(447)) << std::endl;
d->printPretty();
d->printPretty();
std::cout << (b->remove(485)) << std::endl;
std::cout << (d->remove(295)) << std::endl;
std::cout << (d->remove(114)) << std::endl;
std::cout << (b->insert(266)) << std::endl;
c->printPretty();
std::cout << (e->remove(485)) << std::endl;
std::cout << (e->insert(53)) << std::endl;
std::cout << (d->remove(454)) << std::endl;
b->printPretty();
*a=*a;
std::cout << (c->remove(490)) << std::endl;
*d=*a;
b->printPretty();
std::cout << (e->remove(58)) << std::endl;
b->printPretty();
std::cout << (c->remove(264)) << std::endl;
std::cout << (d->remove(498)) << std::endl;
d->printPretty();
std::cout << (b->remove(426)) << std::endl;
std::cout << (a->insert(172)) << std::endl;
a->printPretty();
d->printPretty();
std::cout << (d->remove(243)) << std::endl;
std::cout << (e->insert(266)) << std::endl;
std::cout << (c->insert(365)) << std::endl;
std::cout << (a->insert(130)) << std::endl;
*e=*d;
std::cout << (a->insert(172)) << std::endl;
std::cout << (e->insert(425)) << std::endl;
*a=*b;
*c=*c;
*a=*c;
a->printPretty();
std::cout << (a->insert(349)) << std::endl;
std::cout << (d->remove(447)) << std::endl;
*a=*e;
*c=*c;
std::cout << (d->remove(485)) << std::endl;
std::cout << (c->remove(84)) << std::endl;
std::cout << (b->insert(266)) << std::endl;
*d=*a;
a->printPretty();
e->printPretty();
std::cout << (a->insert(130)) << std::endl;
b->printPretty();
e->printPretty();
std::cout << (c->insert(292)) << std::endl;
std::cout << (e->insert(121)) << std::endl;
std::cout << (c->insert(207)) << std::endl;
std::cout << (b->remove(88)) << std::endl;
std::cout << (d->insert(349)) << std::endl;
std::cout << (d->remove(84)) << std::endl;
std::cout << (d->insert(425)) << std::endl;
std::cout << (c->insert(125)) << std::endl;
std::cout << (a->remove(13)) << std::endl;
*e=*b;
std::cout << (d->insert(363)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << (d->remove(5)) << std::endl;
a->printPretty();
*d=*c;
std::cout << (a->insert(130)) << std::endl;
std::cout << (b->insert(64)) << std::endl;
*b=*d;
b->printPretty();
*a=*e;
std::cout << (e->insert(101)) << std::endl;
std::cout << (b->remove(125)) << std::endl;
d->printPretty();
std::cout << (b->remove(349)) << std::endl;
*e=*a;
std::cout << (b->remove(168)) << std::endl;
std::cout << (c->remove(226)) << std::endl;
std::cout << (b->remove(207)) << std::endl;
std::cout << (d->remove(365)) << std::endl;
std::cout << (b->insert(365)) << std::endl;
std::cout << (b->remove(324)) << std::endl;
std::cout << (a->remove(101)) << std::endl;
std::cout << (a->remove(110)) << std::endl;
std::cout << (e->insert(333)) << std::endl;
std::cout << (b->insert(388)) << std::endl;
std::cout << (b->insert(292)) << std::endl;
e->printPretty();
*a=*e;
std::cout << (d->remove(292)) << std::endl;
std::cout << (e->insert(238)) << std::endl;
*e=*b;
*a=*c;
std::cout << (e->insert(17)) << std::endl;
*e=*b;
*a=*a;
*c=*d;
std::cout << (d->insert(227)) << std::endl;
std::cout << (c->insert(168)) << std::endl;
a->printPretty();
a->printPretty();
*e=*a;
d->printPretty();
std::cout << (c->insert(73)) << std::endl;
std::cout << (a->remove(73)) << std::endl;
std::cout << (c->insert(168)) << std::endl;
std::cout << (b->insert(307)) << std::endl;
std::cout << (c->remove(226)) << std::endl;
std::cout << (e->insert(388)) << std::endl;
std::cout << (a->insert(156)) << std::endl;
std::cout << (a->insert(324)) << std::endl;
std::cout << (a->remove(352)) << std::endl;
std::cout << (a->remove(17)) << std::endl;
std::cout << (e->insert(90)) << std::endl;
e->printPretty();
c->printPretty();
b->printPretty();
std::cout << (b->insert(466)) << std::endl;
std::cout << (e->remove(193)) << std::endl;
std::cout << (a->insert(388)) << std::endl;
*d=*c;
*e=*e;
std::cout << (c->remove(349)) << std::endl;
std::cout << (c->insert(17)) << std::endl;
std::cout << (e->insert(442)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << (e->remove(418)) << std::endl;
*c=*c;
a->printPretty();
std::cout << (c->remove(207)) << std::endl;
d->printPretty();
a->printPretty();
std::cout << (d->remove(427)) << std::endl;
std::cout << (a->insert(168)) << std::endl;
std::cout << (e->remove(168)) << std::endl;
std::cout << (d->insert(238)) << std::endl;
std::cout << (b->remove(385)) << std::endl;
std::cout << (d->insert(125)) << std::endl;
d->printPretty();
std::cout << (e->remove(494)) << std::endl;
std::cout << (e->insert(90)) << std::endl;
std::cout << (d->remove(324)) << std::endl;
std::cout << (a->remove(213)) << std::endl;
std::cout << (b->remove(365)) << std::endl;
std::cout << (e->insert(190)) << std::endl;
c->printPretty();
std::cout << (d->remove(478)) << std::endl;
std::cout << (b->insert(94)) << std::endl;
std::cout << (b->remove(419)) << std::endl;
std::cout << (a->insert(292)) << std::endl;
std::cout << (a->remove(292)) << std::endl;
*b=*c;
std::cout << (a->insert(238)) << std::endl;
std::cout << (b->insert(70)) << std::endl;
std::cout << (b->insert(448)) << std::endl;
std::cout << (e->insert(85)) << std::endl;
*e=*b;
*b=*b;
std::cout << (c->remove(370)) << std::endl;
std::cout << (b->insert(168)) << std::endl;
*e=*a;
c->printPretty();
e->printPretty();
c->printPretty();
*b=*c;
std::cout << (d->insert(238)) << std::endl;
std::cout << (c->remove(177)) << std::endl;
std::cout << (e->remove(298)) << std::endl;
std::cout << (b->remove(157)) << std::endl;
b->printPretty();
std::cout << (a->insert(168)) << std::endl;
e->printPretty();
e->printPretty();
a->printPretty();
std::cout << (c->remove(168)) << std::endl;
std::cout << (d->insert(125)) << std::endl;
e->printPretty();
*a=*c;
std::cout << (e->insert(168)) << std::endl;
std::cout << (a->insert(276)) << std::endl;
std::cout << (e->insert(388)) << std::endl;
std::cout << (c->remove(238)) << std::endl;
*d=*d;
a->printPretty();
std::cout << (b->remove(252)) << std::endl;
std::cout << (d->insert(476)) << std::endl;
std::cout << (c->remove(111)) << std::endl;
std::cout << (a->insert(168)) << std::endl;
std::cout << (c->remove(388)) << std::endl;
std::cout << (d->insert(476)) << std::endl;
std::cout << (e->remove(347)) << std::endl;
std::cout << (d->remove(168)) << std::endl;
std::cout << (c->remove(26)) << std::endl;
*a=*e;
std::cout << (d->remove(179)) << std::endl;
std::cout << (e->insert(143)) << std::endl;
std::cout << (e->insert(33)) << std::endl;
std::cout << (c->insert(472)) << std::endl;
std::cout << (b->insert(329)) << std::endl;
std::cout << (c->insert(472)) << std::endl;
std::cout << (a->remove(494)) << std::endl;
std::cout << (b->insert(407)) << std::endl;
std::cout << (d->remove(470)) << std::endl;
std::cout << (e->remove(156)) << std::endl;
std::cout << (e->remove(349)) << std::endl;
std::cout << (a->insert(133)) << std::endl;
std::cout << (d->insert(494)) << std::endl;
e->printPretty();
std::cout << (a->remove(255)) << std::endl;
*b=*e;
std::cout << (d->remove(494)) << std::endl;
*b=*b;
a->printPretty();
std::cout << (a->insert(388)) << std::endl;
std::cout << (e->insert(106)) << std::endl;
*b=*a;
std::cout << (d->insert(118)) << std::endl;
std::cout << (d->remove(388)) << std::endl;
std::cout << (a->insert(228)) << std::endl;
std::cout << (e->insert(169)) << std::endl;
std::cout << (e->remove(411)) << std::endl;
d->printPretty();
std::cout << (e->insert(168)) << std::endl;
e->printPretty();
std::cout << (a->remove(394)) << std::endl;
std::cout << (d->remove(381)) << std::endl;
*b=*b;
*b=*c;
std::cout << (b->insert(149)) << std::endl;
std::cout << (a->insert(44)) << std::endl;
d->printPretty();
std::cout << (c->remove(17)) << std::endl;
std::cout << (d->insert(268)) << std::endl;
std::cout << (a->insert(121)) << std::endl;
std::cout << (b->remove(204)) << std::endl;
std::cout << (d->remove(336)) << std::endl;
std::cout << (b->insert(17)) << std::endl;
std::cout << (b->remove(73)) << std::endl;
std::cout << (d->remove(2)) << std::endl;
std::cout << (c->remove(73)) << std::endl;
std::cout << (b->insert(168)) << std::endl;
std::cout << (d->insert(331)) << std::endl;
std::cout << (a->remove(388)) << std::endl;
*d=*d;
std::cout << (c->remove(113)) << std::endl;
std::cout << (b->insert(149)) << std::endl;
std::cout << (a->remove(207)) << std::endl;
std::cout << (d->remove(118)) << std::endl;
std::cout << (b->remove(133)) << std::endl;
std::cout << (d->remove(476)) << std::endl;
std::cout << (e->insert(207)) << std::endl;
std::cout << (e->insert(25)) << std::endl;
std::cout << (d->remove(298)) << std::endl;
d->printPretty();
std::cout << (b->remove(472)) << std::endl;
std::cout << (d->insert(268)) << std::endl;
std::cout << (c->insert(125)) << std::endl;
std::cout << (d->insert(130)) << std::endl;
std::cout << (c->remove(480)) << std::endl;
*a=*d;
std::cout << (b->insert(244)) << std::endl;
std::cout << (e->insert(20)) << std::endl;
std::cout << (c->insert(158)) << std::endl;
std::cout << (a->remove(233)) << std::endl;
std::cout << (b->insert(115)) << std::endl;
d->printPretty();
std::cout << (e->insert(207)) << std::endl;
*e=*a;
*c=*c;
std::cout << (c->remove(37)) << std::endl;
std::cout << (d->remove(323)) << std::endl;
b->printPretty();
return 0;
}
