
// input12ax7_neg_table generated by DK/circ_table_gen.py -- do not modify manually

 // variables used
 // --sig_max  -1.500000
 // --table_div  20.270230
 // --table_op  0.250000

struct tableinput12ax7_neg { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct tableinput12ax7_neg_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator tableinput12ax7_neg&() const { return *(tableinput12ax7_neg*)this; }
};

 static tableinput12ax7_neg_imp<2048> input12ax7_neg_table __rt_data = {
	0,0.783755,341.167,2048, {
	0.000000000000,0.000605224955,0.001210164651,0.001814819210,0.002419188754,
	0.003023273409,0.003627073297,0.004230588542,0.004833819266,0.005436765595,
	0.006039427650,0.006641805556,0.007243899434,0.007845709409,0.008447235604,
	0.009048478141,0.009649437144,0.010250112735,0.010850505037,0.011450614173,
	0.012050440267,0.012649983439,0.013249243814,0.013848221514,0.014446916661,
	0.015045329377,0.015643459786,0.016241308009,0.016838874169,0.017436158388,
	0.018033160788,0.018629881492,0.019226320621,0.019822478297,0.020418354643,
	0.021013949781,0.021609263831,0.022204296917,0.022799049159,0.023393520680,
	0.023987711602,0.024581622044,0.025175252131,0.025768601982,0.026361671719,
	0.026954461463,0.027546971337,0.028139201461,0.028731151956,0.029322822943,
	0.029914214544,0.030505326880,0.031096160071,0.031686714239,0.032276989504,
	0.032866985988,0.033456703810,0.034046143093,0.034635303955,0.035224186519,
	0.035812790904,0.036401117231,0.036989165621,0.037576936194,0.038164429070,
	0.038751644369,0.039338582212,0.039925242719,0.040511626010,0.041097732205,
	0.041683561424,0.042269113787,0.042854389414,0.043439388425,0.044024110939,
	0.044608557077,0.045192726958,0.045776620701,0.046360238427,0.046943580254,
	0.047526646302,0.048109436691,0.048691951540,0.049274190969,0.049856155096,
	0.050437844040,0.051019257921,0.051600396859,0.052181260971,0.052761850378,
	0.053342165197,0.053922205548,0.054501971550,0.055081463321,0.055660680980,
	0.056239624646,0.056818294437,0.057396690472,0.057974812870,0.058552661749,
	0.059130237226,0.059707539422,0.060284568453,0.060861324439,0.061437807496,
	0.062014017745,0.062589955301,0.063165620285,0.063741012813,0.064316133003,
	0.064890980973,0.065465556842,0.066039860726,0.066613892745,0.067187653014,
	0.067761141652,0.068334358776,0.068907304504,0.069479978954,0.070052382242,
	0.070624514486,0.071196375803,0.071767966311,0.072339286127,0.072910335367,
	0.073481114149,0.074051622590,0.074621860807,0.075191828917,0.075761527036,
	0.076330955281,0.076900113770,0.077469002618,0.078037621943,0.078605971861,
	0.079174052489,0.079741863942,0.080309406339,0.080876679794,0.081443684424,
	0.082010420346,0.082576887675,0.083143086529,0.083709017022,0.084274679272,
	0.084840073394,0.085405199503,0.085970057717,0.086534648150,0.087098970920,
	0.087663026140,0.088226813928,0.088790334398,0.089353587667,0.089916573849,
	0.090479293061,0.091041745418,0.091603931035,0.092165850027,0.092727502511,
	0.093288888600,0.093850008410,0.094410862057,0.094971449655,0.095531771320,
	0.096091827166,0.096651617308,0.097211141862,0.097770400941,0.098329394662,
	0.098888123138,0.099446586484,0.100004784814,0.100562718244,0.101120386888,
	0.101677790860,0.102234930275,0.102791805247,0.103348415890,0.103904762318,
	0.104460844646,0.105016662989,0.105572217459,0.106127508171,0.106682535239,
	0.107237298777,0.107791798899,0.108346035719,0.108900009350,0.109453719906,
	0.110007167501,0.110560352249,0.111113274263,0.111665933656,0.112218330542,
	0.112770465035,0.113322337247,0.113873947293,0.114425295285,0.114976381337,
	0.115527205562,0.116077768073,0.116628068982,0.117178108404,0.117727886450,
	0.118277403235,0.118826658870,0.119375653469,0.119924387144,0.120472860008,
	0.121021072174,0.121569023754,0.122116714861,0.122664145607,0.123211316105,
	0.123758226468,0.124304876807,0.124851267234,0.125397397863,0.125943268805,
	0.126488880173,0.127034232078,0.127579324632,0.128124157949,0.128668732139,
	0.129213047314,0.129757103586,0.130300901068,0.130844439870,0.131387720105,
	0.131930741884,0.132473505319,0.133016010521,0.133558257602,0.134100246673,
	0.134641977846,0.135183451231,0.135724666941,0.136265625087,0.136806325779,
	0.137346769128,0.137886955247,0.138426884246,0.138966556235,0.139505971327,
	0.140045129631,0.140584031259,0.141122676321,0.141661064928,0.142199197191,
	0.142737073220,0.143274693127,0.143812057021,0.144349165013,0.144886017214,
	0.145422613733,0.145958954682,0.146495040170,0.147030870308,0.147566445205,
	0.148101764973,0.148636829721,0.149171639560,0.149706194598,0.150240494946,
	0.150774540715,0.151308332013,0.151841868951,0.152375151639,0.152908180185,
	0.153440954700,0.153973475294,0.154505742075,0.155037755154,0.155569514639,
	0.156101020641,0.156632273268,0.157163272630,0.157694018836,0.158224511995,
	0.158754752217,0.159284739610,0.159814474284,0.160343956347,0.160873185909,
	0.161402163078,0.161930887964,0.162459360674,0.162987581319,0.163515550005,
	0.164043266843,0.164570731941,0.165097945407,0.165624907350,0.166151617878,
	0.166678077100,0.167204285124,0.167730242058,0.168255948011,0.168781403091,
	0.169306607405,0.169831561063,0.170356264172,0.170880716841,0.171404919176,
	0.171928871286,0.172452573280,0.172976025264,0.173499227347,0.174022179636,
	0.174544882239,0.175067335263,0.175589538817,0.176111493007,0.176633197942,
	0.177154653728,0.177675860473,0.178196818285,0.178717527270,0.179237987536,
	0.179758199190,0.180278162339,0.180797877090,0.181317343551,0.181836561828,
	0.182355532028,0.182874254258,0.183392728625,0.183910955236,0.184428934198,
	0.184946665617,0.185464149600,0.185981386253,0.186498375684,0.187015117998,
	0.187531613302,0.188047861702,0.188563863305,0.189079618218,0.189595126546,
	0.190110388395,0.190625403873,0.191140173084,0.191654696136,0.192168973133,
	0.192683004183,0.193196789390,0.193710328861,0.194223622702,0.194736671019,
	0.195249473917,0.195762031501,0.196274343879,0.196786411154,0.197298233434,
	0.197809810822,0.198321143425,0.198832231348,0.199343074697,0.199853673577,
	0.200364028092,0.200874138349,0.201384004452,0.201893626507,0.202403004618,
	0.202912138891,0.203421029431,0.203929676342,0.204438079730,0.204946239699,
	0.205454156354,0.205961829800,0.206469260142,0.206976447483,0.207483391930,
	0.207990093585,0.208496552555,0.209002768943,0.209508742853,0.210014474391,
	0.210519963660,0.211025210764,0.211530215809,0.212034978897,0.212539500134,
	0.213043779623,0.213547817468,0.214051613773,0.214555168643,0.215058482181,
	0.215561554491,0.216064385676,0.216566975841,0.217069325089,0.217571433524,
	0.218073301249,0.218574928369,0.219076314986,0.219577461204,0.220078367126,
	0.220579032857,0.221079458498,0.221579644154,0.222079589927,0.222579295922,
	0.223078762240,0.223577988985,0.224076976261,0.224575724169,0.225074232814,
	0.225572502298,0.226070532723,0.226568324194,0.227065876811,0.227563190679,
	0.228060265900,0.228557102576,0.229053700810,0.229550060705,0.230046182363,
	0.230542065886,0.231037711377,0.231533118939,0.232028288673,0.232523220682,
	0.233017915067,0.233512371933,0.234006591379,0.234500573509,0.234994318424,
	0.235487826227,0.235981097018,0.236474130902,0.236966927978,0.237459488349,
	0.237951812116,0.238443899382,0.238935750248,0.239427364816,0.239918743186,
	0.240409885461,0.240900791743,0.241391462132,0.241881896730,0.242372095638,
	0.242862058957,0.243351786790,0.243841279236,0.244330536398,0.244819558375,
	0.245308345271,0.245796897184,0.246285214217,0.246773296470,0.247261144044,
	0.247748757039,0.248236135558,0.248723279700,0.249210189566,0.249696865257,
	0.250183306874,0.250669514516,0.251155488285,0.251641228280,0.252126734603,
	0.252612007354,0.253097046632,0.253581852539,0.254066425175,0.254550764639,
	0.255034871033,0.255518744455,0.256002385006,0.256485792786,0.256968967896,
	0.257451910434,0.257934620501,0.258417098197,0.258899343621,0.259381356873,
	0.259863138053,0.260344687261,0.260826004596,0.261307090158,0.261787944045,
	0.262268566359,0.262748957197,0.263229116660,0.263709044847,0.264188741856,
	0.264668207788,0.265147442742,0.265626446816,0.266105220110,0.266583762723,
	0.267062074754,0.267540156301,0.268018007465,0.268495628343,0.268973019034,
	0.269450179638,0.269927110252,0.270403810977,0.270880281910,0.271356523149,
	0.271832534795,0.272308316944,0.272783869696,0.273259193149,0.273734287401,
	0.274209152551,0.274683788698,0.275158195938,0.275632374371,0.276106324094,
	0.276580045207,0.277053537806,0.277526801990,0.277999837857,0.278472645505,
	0.278945225032,0.279417576535,0.279889700113,0.280361595862,0.280833263882,
	0.281304704269,0.281775917122,0.282246902537,0.282717660613,0.283188191446,
	0.283658495135,0.284128571777,0.284598421468,0.285068044307,0.285537440391,
	0.286006609816,0.286475552681,0.286944269082,0.287412759116,0.287881022881,
	0.288349060473,0.288816871990,0.289284457528,0.289751817184,0.290218951055,
	0.290685859238,0.291152541830,0.291618998927,0.292085230626,0.292551237024,
	0.293017018216,0.293482574301,0.293947905373,0.294413011531,0.294877892869,
	0.295342549485,0.295806981474,0.296271188934,0.296735171959,0.297198930647,
	0.297662465094,0.298125775395,0.298588861647,0.299051723946,0.299514362387,
	0.299976777066,0.300438968081,0.300900935525,0.301362679496,0.301824200088,
	0.302285497398,0.302746571521,0.303207422553,0.303668050589,0.304128455725,
	0.304588638056,0.305048597678,0.305508334687,0.305967849177,0.306427141244,
	0.306886210983,0.307345058489,0.307803683858,0.308262087185,0.308720268564,
	0.309178228091,0.309635965861,0.310093481969,0.310550776510,0.311007849578,
	0.311464701269,0.311921331677,0.312377740897,0.312833929024,0.313289896152,
	0.313745642376,0.314201167791,0.314656472491,0.315111556570,0.315566420123,
	0.316021063245,0.316475486030,0.316929688572,0.317383670965,0.317837433304,
	0.318290975683,0.318744298196,0.319197400937,0.319650284000,0.320102947479,
	0.320555391469,0.321007616062,0.321459621354,0.321911407437,0.322362974406,
	0.322814322355,0.323265451376,0.323716361565,0.324167053014,0.324617525817,
	0.325067780067,0.325517815859,0.325967633285,0.326417232439,0.326866613415,
	0.327315776306,0.327764721204,0.328213448204,0.328661957398,0.329110248880,
	0.329558322743,0.330006179079,0.330453817983,0.330901239546,0.331348443863,
	0.331795431025,0.332242201126,0.332688754258,0.333135090515,0.333581209988,
	0.334027112772,0.334472798958,0.334918268638,0.335363521907,0.335808558856,
	0.336253379577,0.336697984163,0.337142372707,0.337586545301,0.338030502037,
	0.338474243007,0.338917768305,0.339361078021,0.339804172248,0.340247051078,
	0.340689714604,0.341132162917,0.341574396109,0.342016414273,0.342458217500,
	0.342899805881,0.343341179510,0.343782338477,0.344223282875,0.344664012795,
	0.345104528328,0.345544829567,0.345984916603,0.346424789527,0.346864448431,
	0.347303893406,0.347743124545,0.348182141937,0.348620945675,0.349059535850,
	0.349497912552,0.349936075874,0.350374025906,0.350811762740,0.351249286467,
	0.351686597176,0.352123694961,0.352560579911,0.352997252117,0.353433711671,
	0.353869958663,0.354305993184,0.354741815324,0.355177425175,0.355612822827,
	0.356048008371,0.356482981896,0.356917743495,0.357352293257,0.357786631272,
	0.358220757632,0.358654672426,0.359088375745,0.359521867679,0.359955148318,
	0.360388217753,0.360821076074,0.361253723371,0.361686159733,0.362118385252,
	0.362550400017,0.362982204117,0.363413797644,0.363845180686,0.364276353334,
	0.364707315677,0.365138067805,0.365568609809,0.365998941777,0.366429063799,
	0.366858975964,0.367288678364,0.367718171086,0.368147454220,0.368576527856,
	0.369005392083,0.369434046991,0.369862492668,0.370290729205,0.370718756690,
	0.371146575212,0.371574184861,0.372001585726,0.372428777896,0.372855761459,
	0.373282536505,0.373709103123,0.374135461402,0.374561611430,0.374987553296,
	0.375413287090,0.375838812899,0.376264130813,0.376689240920,0.377114143310,
	0.377538838069,0.377963325287,0.378387605053,0.378811677455,0.379235542581,
	0.379659200520,0.380082651360,0.380505895189,0.380928932096,0.381351762169,
	0.381774385496,0.382196802165,0.382619012264,0.383041015881,0.383462813105,
	0.383884404023,0.384305788723,0.384726967293,0.385147939821,0.385568706396,
	0.385989267103,0.386409622032,0.386829771270,0.387249714904,0.387669453023,
	0.388088985714,0.388508313064,0.388927435161,0.389346352092,0.389765063945,
	0.390183570807,0.390601872765,0.391019969908,0.391437862321,0.391855550092,
	0.392273033309,0.392690312059,0.393107386428,0.393524256504,0.393940922373,
	0.394357384123,0.394773641841,0.395189695613,0.395605545527,0.396021191669,
	0.396436634126,0.396851872985,0.397266908332,0.397681740254,0.398096368838,
	0.398510794170,0.398925016337,0.399339035426,0.399752851522,0.400166464712,
	0.400579875083,0.400993082721,0.401406087713,0.401818890144,0.402231490100,
	0.402643887669,0.403056082936,0.403468075987,0.403879866908,0.404291455786,
	0.404702842705,0.405114027754,0.405525011016,0.405935792578,0.406346372527,
	0.406756750947,0.407166927924,0.407576903545,0.407986677894,0.408396251058,
	0.408805623122,0.409214794172,0.409623764293,0.410032533570,0.410441102090,
	0.410849469937,0.411257637197,0.411665603955,0.412073370297,0.412480936307,
	0.412888302072,0.413295467675,0.413702433203,0.414109198740,0.414515764371,
	0.414922130182,0.415328296258,0.415734262682,0.416140029541,0.416545596919,
	0.416950964901,0.417356133572,0.417761103016,0.418165873318,0.418570444563,
	0.418974816836,0.419378990221,0.419782964802,0.420186740664,0.420590317892,
	0.420993696570,0.421396876782,0.421799858613,0.422202642148,0.422605227469,
	0.423007614663,0.423409803812,0.423811795001,0.424213588314,0.424615183836,
	0.425016581649,0.425417781839,0.425818784490,0.426219589684,0.426620197507,
	0.427020608041,0.427420821372,0.427820837582,0.428220656755,0.428620278975,
	0.429019704326,0.429418932891,0.429817964754,0.430216799999,0.430615438708,
	0.431013880966,0.431412126856,0.431810176462,0.432208029865,0.432605687151,
	0.433003148402,0.433400413702,0.433797483133,0.434194356780,0.434591034724,
	0.434987517049,0.435383803839,0.435779895176,0.436175791143,0.436571491823,
	0.436966997299,0.437362307654,0.437757422971,0.438152343333,0.438547068822,
	0.438941599520,0.439335935512,0.439730076879,0.440124023703,0.440517776069,
	0.440911334057,0.441304697751,0.441697867233,0.442090842585,0.442483623890,
	0.442876211230,0.443268604688,0.443660804345,0.444052810284,0.444444622587,
	0.444836241337,0.445227666615,0.445618898503,0.446009937084,0.446400782440,
	0.446791434651,0.447181893802,0.447572159972,0.447962233245,0.448352113701,
	0.448741801424,0.449131296494,0.449520598993,0.449909709002,0.450298626605,
	0.450687351881,0.451075884913,0.451464225782,0.451852374570,0.452240331357,
	0.452628096226,0.453015669258,0.453403050535,0.453790240136,0.454177238144,
	0.454564044640,0.454950659706,0.455337083421,0.455723315868,0.456109357127,
	0.456495207280,0.456880866407,0.457266334590,0.457651611909,0.458036698445,
	0.458421594279,0.458806299492,0.459190814165,0.459575138378,0.459959272212,
	0.460343215748,0.460726969066,0.461110532247,0.461493905372,0.461877088521,
	0.462260081774,0.462642885212,0.463025498916,0.463407922965,0.463790157440,
	0.464172202422,0.464554057990,0.464935724225,0.465317201207,0.465698489016,
	0.466079587733,0.466460497437,0.466841218208,0.467221750127,0.467602093272,
	0.467982247726,0.468362213566,0.468741990873,0.469121579728,0.469500980208,
	0.469880192396,0.470259216369,0.470638052208,0.471016699992,0.471395159802,
	0.471773431715,0.472151515813,0.472529412175,0.472907120879,0.473284642006,
	0.473661975635,0.474039121845,0.474416080715,0.474792852325,0.475169436754,
	0.475545834081,0.475922044386,0.476298067747,0.476673904243,0.477049553954,
	0.477425016959,0.477800293336,0.478175383165,0.478550286524,0.478925003492,
	0.479299534149,0.479673878573,0.480048036842,0.480422009036,0.480795795233,
	0.481169395511,0.481542809951,0.481916038629,0.482289081624,0.482661939016,
	0.483034610882,0.483407097302,0.483779398352,0.484151514112,0.484523444661,
	0.484895190076,0.485266750435,0.485638125817,0.486009316301,0.486380321963,
	0.486751142883,0.487121779139,0.487492230807,0.487862497967,0.488232580697,
	0.488602479074,0.488972193176,0.489341723082,0.489711068868,0.490080230613,
	0.490449208395,0.490818002291,0.491186612378,0.491555038736,0.491923281440,
	0.492291340570,0.492659216202,0.493026908413,0.493394417282,0.493761742886,
	0.494128885301,0.494495844607,0.494862620879,0.495229214195,0.495595624633,
	0.495961852270,0.496327897182,0.496693759447,0.497059439142,0.497424936345,
	0.497790251132,0.498155383580,0.498520333766,0.498885101768,0.499249687661,
	0.499614091524,0.499978313432,0.500342353463,0.500706211694,0.501069888200,
	0.501433383059,0.501796696348,0.502159828143,0.502522778520,0.502885547557,
	0.503248135330,0.503610541914,0.503972767388,0.504334811826,0.504696675306,
	0.505058357904,0.505419859696,0.505781180759,0.506142321168,0.506503281000,
	0.506864060331,0.507224659237,0.507585077794,0.507945316079,0.508305374167,
	0.508665252135,0.509024950058,0.509384468012,0.509743806073,0.510102964317,
	0.510461942820,0.510820741658,0.511179360906,0.511537800640,0.511896060936,
	0.512254141869,0.512612043516,0.512969765950,0.513327309249,0.513684673488,
	0.514041858742,0.514398865086,0.514755692596,0.515112341348,0.515468811416,
	0.515825102877,0.516181215804,0.516537150274,0.516892906362,0.517248484142,
	0.517603883691,0.517959105082,0.518314148392,0.518669013694,0.519023701065,
	0.519378210579,0.519732542311,0.520086696336,0.520440672728,0.520794471563,
	0.521148092915,0.521501536860,0.521854803471,0.522207892824,0.522560804993,
	0.522913540052,0.523266098077,0.523618479142,0.523970683321,0.524322710689,
	0.524674561320,0.525026235289,0.525377732670,0.525729053538,0.526080197966,
	0.526431166029,0.526781957801,0.527132573357,0.527483012770,0.527833276115,
	0.528183363466,0.528533274896,0.528883010481,0.529232570293,0.529581954408,
	0.529931162898,0.530280195837,0.530629053301,0.530977735361,0.531326242093,
	0.531674573570,0.532022729865,0.532370711053,0.532718517206,0.533066148400,
	0.533413604706,0.533760886199,0.534107992953,0.534454925040,0.534801682535,
	0.535148265510,0.535494674039,0.535840908195,0.536186968053,0.536532853684,
	0.536878565162,0.537224102561,0.537569465954,0.537914655413,0.538259671012,
	0.538604512825,0.538949180923,0.539293675380,0.539637996269,0.539982143664,
	0.540326117636,0.540669918259,0.541013545605,0.541356999748,0.541700280761,
	0.542043388715,0.542386323684,0.542729085740,0.543071674956,0.543414091405,
	0.543756335159,0.544098406291,0.544440304873,0.544782030978,0.545123584677,
	0.545464966045,0.545806175153,0.546147212072,0.546488076877,0.546828769638,
	0.547169290429,0.547509639321,0.547849816386,0.548189821697,0.548529655326,
	0.548869317345,0.549208807826,0.549548126841,0.549887274461,0.550226250760,
	0.550565055808,0.550903689678,0.551242152442,0.551580444171,0.551918564937,
	0.552256514812,0.552594293867,0.552931902175,0.553269339807,0.553606606834,
	0.553943703328,0.554280629361,0.554617385004,0.554953970329,0.555290385407,
	0.555626630309,0.555962705108,0.556298609873,0.556634344677,0.556969909592,
	0.557305304687,0.557640530034,0.557975585706,0.558310471771,0.558645188303,
	0.558979735372,0.559314113048,0.559648321404,0.559982360509,0.560316230436,
	0.560649931254,0.560983463035,0.561316825850,0.561650019769,0.561983044864,
	0.562315901204,0.562648588861,0.562981107906,0.563313458409,0.563645640440,
	0.563977654071,0.564309499372,0.564641176413,0.564972685265,0.565304025999,
	0.565635198684,0.565966203392,0.566297040192,0.566627709155,0.566958210352,
	0.567288543852,0.567618709726,0.567948708044,0.568278538876,0.568608202292,
	0.568937698363,0.569267027158,0.569596188748,0.569925183203,0.570254010592,
	0.570582670985,0.570911164453,0.571239491065,0.571567650892,0.571895644002,
	0.572223470467,0.572551130354,0.572878623735,0.573205950679,0.573533111256,
	0.573860105535,0.574186933586,0.574513595478,0.574840091281,0.575166421065,
	0.575492584898,0.575818582851,0.576144414992,0.576470081392,0.576795582119,
	0.577120917243,0.577446086833,0.577771090959,0.578095929688,0.578420603092,
	0.578745111238,0.579069454196,0.579393632036,0.579717644825,0.580041492634,
	0.580365175530,0.580688693584,0.581012046864,0.581335235438,0.581658259376,
	0.581981118747,0.582303813619,0.582626344062,0.582948710143,0.583270911931,
	0.583592949496,0.583914822906,0.584236532229,0.584558077535,0.584879458891,
	0.585200676366,0.585521730028,0.585842619947,0.586163346190,0.586483908826,
	0.586804307923,0.587124543550,0.587444615774,0.587764524665,0.588084270290,
	0.588403852717,0.588723272015,0.589042528252,0.589361621495,0.589680551814,
	0.589999319275,0.590317923948,0.590636365899,0.590954645198,0.591272761911,
	0.591590716107,0.591908507854,0.592226137219,0.592543604270,0.592860909075,
	0.593178051701,0.593495032217,0.593811850690,0.594128507188,0.594445001778,
	0.594761334527,0.595077505504,0.595393514776,0.595709362410,0.596025048474,
	0.596340573035,0.596655936161,0.596971137918,0.597286178375,0.597601057598,
	0.597915775655,0.598230332613,0.598544728539,0.598858963501,0.599173037564,
	0.599486950798,0.599800703268,0.600114295042,0.600427726186,0.600740996768,
	0.601054106855,0.601367056513,0.601679845810,0.601992474812,0.602304943585,
	0.602617252198,0.602929400717,0.603241389207,0.603553217737,0.603864886373,
	0.604176395180,0.604487744227,0.604798933579,0.605109963304,0.605420833467,
	0.605731544135,0.606042095374,0.606352487252,0.606662719833,0.606972793186,
	0.607282707375,0.607592462468,0.607902058530,0.608211495628,0.608520773829,
	0.608829893197,0.609138853799,0.609447655702,0.609756298972,0.610064783674,
	0.610373109875,0.610681277640,0.610989287036,0.611297138128,0.611604830983,
	0.611912365666,0.612219742243,0.612526960780,0.612834021342,0.613140923996,
	0.613447668807,0.613754255841,0.614060685163,0.614366956839,0.614673070935,
	0.614979027517,0.615284826649,0.615590468397,0.615895952827,0.616201280004,
	0.616506449994,0.616811462862,0.617116318673,0.617421017492,0.617725559386,
	0.618029944419,0.618334172656,0.618638244163,0.618942159005,0.619245917246,
	0.619549518953,0.619852964190,0.620156253022,0.620459385514,0.620762361731,
	0.621065181738,0.621367845601,0.621670353383,0.621972705150,0.622274900967,
	0.622576940898,0.622878825009,0.623180553363,0.623482126026,0.623783543063,
	0.624084804538,0.624385910515,0.624686861059,0.624987656236,0.625288296109,
	0.625588780742,0.625889110201,0.626189284550,0.626489303853,0.626789168174,
	0.627088877579,0.627388432131,0.627687831894,0.627987076933,0.628286167313,
	0.628585103096,0.628883884348,0.629182511133,0.629480983514,0.629779301557,
	0.630077465324,0.630375474880,0.630673330289,0.630971031614,0.631268578921,
	0.631565972272,0.631863211732,0.632160297365,0.632457229233,0.632754007402,
	0.633050631935,0.633347102895,0.633643420346,0.633939584352,0.634235594977,
	0.634531452284,0.634827156337,0.635122707200,0.635418104935,0.635713349606,
	0.636008441277,0.636303380012,0.636598165873,0.636892798924,0.637187279228,
	0.637481606850,0.637775781851,0.638069804295,0.638363674246,0.638657391767,
	0.638950956920,0.639244369770,0.639537630378,0.639830738809,0.640123695125,
	0.640416499389,0.640709151665,0.641001652015,0.641294000502,0.641586197188,
	0.641878242138,0.642170135414,0.642461877078,0.642753467194,0.643044905824,
	0.643336193031,0.643627328877,0.643918313426,0.644209146739,0.644499828880,
	0.644790359911,0.645080739895,0.645370968894,0.645661046971,0.645950974188,
	0.646240750607,0.646530376292,0.646819851304,0.647109175705,0.647398349559,
	0.647687372927,0.647976245872,0.648264968456,0.648553540740,0.648841962788,
	0.649130234662,0.649418356422,0.649706328133,0.649994149855,0.650281821651,
	0.650569343583,0.650856715712,0.651143938101,0.651431010812,0.651717933906,
	0.652004707445,0.652291331491,0.652577806107,0.652864131353,0.653150307291,
	0.653436333984,0.653722211493,0.654007939879,0.654293519205,0.654578949531,
	0.654864230919,0.655149363432,0.655434347129,0.655719182074,0.656003868327,
	0.656288405950,0.656572795004,0.656857035550,0.657141127651,0.657425071367,
	0.657708866759,0.657992513889,0.658276012817,0.658559363607,0.658842566317,
	0.659125621010,0.659408527746,0.659691286588,0.659973897595,0.660256360829,
	0.660538676350,0.660820844221,0.661102864501,0.661384737251,0.661666462534,
	0.661948040408,0.662229470936,0.662510754178,0.662791890194,0.663072879047,
	0.663353720795,0.663634415500,0.663914963223,0.664195364024,0.664475617964,
	0.664755725104,0.665035685503,0.665315499223,0.665595166324,0.665874686866,
	0.666154060910,0.666433288516,0.666712369745,0.666991304657,0.667270093312,
	0.667548735771,0.667827232094,0.668105582341,0.668383786572,0.668661844848,
	0.668939757228,0.669217523774,0.669495144544,0.669772619599,0.670049948999,
	0.670327132804,0.670604171074,0.670881063868,0.671157811248,0.671434413273,
	0.671710870002,0.671987181496,0.672263347814,0.672539369016,0.672815245162,
	0.673090976311,0.673366562524,0.673642003860,0.673917300378,0.674192452139,
	0.674467459201,0.674742321625,0.675017039470,0.675291612795,0.675566041660,
	0.675840326124,0.676114466248,0.676388462089,0.676662313708,0.676936021164,
	0.677209584516,0.677483003824,0.677756279147,0.678029410543,0.678302398073,
	0.678575241795,0.678847941768,0.679120498053,0.679392910707,0.679665179790,
	0.679937305360,0.680209287478,0.680481126201,0.680752821589,0.681024373701,
	0.681295782596,0.681567048332,0.681838170968,0.682109150564,0.682379987177,
	0.682650680868,0.682921231693,0.683191639713,0.683461904986,0.683732027570,
	0.684002007524,0.684271844907,0.684541539778,0.684811092194,0.685080502214,
	0.685349769897,0.685618895302,0.685887878486,0.686156719508,0.686425418427,
	0.686693975301,0.686962390188,0.687230663146,0.687498794235,0.687766783511,
	0.688034631033,0.688302336860,0.688569901049,0.688837323659,0.689104604747,
	0.689371744373,0.689638742594,0.689905599467,0.690172315051,0.690438889404,
	0.690705322585,0.690971614649,0.691237765657,0.691503775665,0.691769644731,
	0.692035372914,0.692300960270,0.692566406858,0.692831712735,0.693096877960,
	0.693361902589,0.693626786681,0.693891530293,0.694156133482,0.694420596307,
	0.694684918824,0.694949101091,0.695213143166,0.695477045107,0.695740806970,
	0.696004428813,0.696267910693,0.696531252668,0.696794454795,0.697057517131,
	0.697320439734,0.697583222661,0.697845865969,0.698108369715,0.698370733956,
	0.698632958750,0.698895044154,0.699156990224,0.699418797018,0.699680464593,
	0.699941993006,0.700203382313,0.700464632572,0.700725743839,0.700986716173,
	0.701247549628,0.701508244263,0.701768800133,0.702029217297,0.702289495810,
	0.702549635729,0.702809637112,0.703069500014,0.703329224492,0.703588810603,
	0.703848258404,0.704107567951,0.704366739300,0.704625772509,0.704884667633,
	0.705143424730,0.705402043855,0.705660525065,0.705918868417,0.706177073966,
	0.706435141769,0.706693071882,0.706950864363,0.707208519266,0.707466036648,
	0.707723416565,0.707980659074,0.708237764231,0.708494732091,0.708751562712,
	0.709008256148,0.709264812456,0.709521231692,0.709777513912,0.710033659172,
	0.710289667528,0.710545539036,0.710801273751,0.711056871730,0.711312333028,
	0.711567657701,0.711822845806,0.712077897397,0.712332812530,0.712587591261,
	0.712842233647,0.713096739741,0.713351109601,0.713605343281,0.713859440838,
	0.714113402326,0.714367227802,0.714620917320,0.714874470937,0.715127888707,
	0.715381170686,0.715634316930,0.715887327494,0.716140202432,0.716392941802,
	0.716645545656,0.716898014052,0.717150347045,0.717402544688,0.717654607038,
	0.717906534150,0.718158326079,0.718409982880,0.718661504608,0.718912891318,
	0.719164143065,0.719415259904,0.719666241891,0.719917089079,0.720167801524,
	0.720418379281,0.720668822405,0.720919130951,0.721169304972,0.721419344525,
	0.721669249664,0.721919020444,0.722168656919,0.722418159143,0.722667527173,
	0.722916761062,0.723165860865,0.723414826636,0.723663658431,0.723912356303,
	0.724160920307,0.724409350498,0.724657646930,0.724905809658,0.725153838735,
	0.725401734217,0.725649496157,0.725897124610,0.726144619630,0.726391981272,
	0.726639209590,0.726886304637,0.727133266469,0.727380095139,0.727626790702,
	0.727873353211,0.728119782721,0.728366079286,0.728612242960,0.728858273796,
	0.729104171849,0.729349937173,0.729595569822,0.729841069850,0.730086437310,
	0.730331672256,0.730576774743,0.730821744824,0.731066582552,0.731311287983,
	0.731555861168,0.731800302163,0.732044611020,0.732288787794,0.732532832538,
	0.732776745306,0.733020526151,0.733264175126,0.733507692286,0.733751077684,
	0.733994331374,0.734237453408,0.734480443840,0.734723302724,0.734966030113,
	0.735208626060,0.735451090619,0.735693423844,0.735935625786,0.736177696500,
	0.736419636039,0.736661444456,0.736903121804,0.737144668136,0.737386083506,
	0.737627367967,0.737868521571,0.738109544372,0.738350436422,0.738591197776,
	0.738831828485,0.739072328603,0.739312698182,0.739552937276,0.739793045938,
	0.740033024219,0.740272872174,0.740512589855,0.740752177314,0.740991634605,
	0.741230961780,0.741470158892,0.741709225993,0.741948163137,0.742186970376,
	0.742425647762,0.742664195348,0.742902613186,0.743140901330,0.743379059831,
	0.743617088743,0.743854988117,0.744092758006,0.744330398462,0.744567909539,
	0.744805291287,0.745042543760,0.745279667010,0.745516661088,0.745753526048,
	0.745990261942,0.746226868821,0.746463346739,0.746699695746,0.746935915896,
	0.747172007240,0.747407969830,0.747643803719,0.747879508959,0.748115085601,
	0.748350533697,0.748585853301,0.748821044462,0.749056107234,0.749291041668,
	0.749525847816,0.749760525730,0.749995075462,0.750229497063,0.750463790586,
	0.750697956082,0.750931993602,0.751165903199,0.751399684924,0.751633338829,
	0.751866864965,0.752100263384,0.752333534138,0.752566677277,0.752799692854,
	0.753032580921,0.753265341528,0.753497974727,0.753730480569,0.753962859106,
	0.754195110389,0.754427234470,0.754659231400,0.754891101230,0.755122844011,
	0.755354459795,0.755585948633,0.755817310576,0.756048545676,0.756279653982,
	0.756510635548,0.756741490423,0.756972218659,0.757202820306,0.757433295417,
	0.757663644041,0.757893866230,0.758123962035,0.758353931507,0.758583774696,
	0.758813491654,0.759043082432,0.759272547079,0.759501885648,0.759731098188,
	0.759960184751,0.760189145388,0.760417980148,0.760646689083,0.760875272244,
	0.761103729681,0.761332061444,0.761560267585,0.761788348153,0.762016303200,
	0.762244132776,0.762471836931,0.762699415716,0.762926869182,0.763154197378,
	0.763381400356,0.763608478165,0.763835430856,0.764062258479,0.764288961085,
	0.764515538723,0.764741991445,0.764968319300,0.765194522339,0.765420600612,
	0.765646554168,0.765872383058,0.766098087333,0.766323667042,0.766549122235,
	0.766774452963,0.766999659275,0.767224741221,0.767449698852,0.767674532217,
	0.767899241367,0.768123826350,0.768348287218,0.768572624019,0.768796836804,
	0.769020925623,0.769244890525,0.769468731560,0.769692448778,0.769916042228,
	0.770139511961,0.770362858025,0.770586080471,0.770809179348,0.771032154706,
	0.771255006594,0.771477735062,0.771700340160,0.771922821936,0.772145180440,
	0.772367415723,0.772589527832,0.772811516818,0.773033382730,0.773255125618,
	0.773476745530,0.773698242516,0.773919616626,0.774140867908,0.774361996412,
	0.774583002187,0.774803885282,0.775024645746,0.775245283629,0.775465798980,
	0.775686191847,0.775906462280,0.776126610328,0.776346636040,0.776566539465,
	0.776786320652,0.777005979650,0.777225516507,0.777444931273,0.777664223997,
	0.777883394727,0.778102443512,0.778321370402,0.778540175444,0.778758858688,
	0.778977420183,0.779195859976,0.779414178118,0.779632374656,0.779850449639,
	0.780068403116,0.780286235135,0.780503945746,0.780721534996,0.780939002934,
	0.781156349608,0.781373575068,0.781590679362,0.781807662537,0.782024524643,
	0.782241265727,0.782457885839,0.782674385027,0.782890763338,0.783107020822,
	0.783323157526,0.783539173499,0.783755068789
	}
};

double always_inline input12ax7_negclip(double x) {
    double f = fabs(x);
    f = f * input12ax7_neg_table.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = input12ax7_neg_table.data[0];
    } else if (i >= input12ax7_neg_table.size-1) {
        f = input12ax7_neg_table.data[input12ax7_neg_table.size-1];
    } else {
    f -= i;
    f = input12ax7_neg_table.data[i]*(1-f) + input12ax7_neg_table.data[i+1]*f;
    }
    return copysign(f, x);
}
