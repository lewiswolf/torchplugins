#include "model.h"
#include "log.h"

int main(argc, argv)
{
    auto model = Model.getInstance();
    model.loadModel("/home/diaz/projects/iir-modal/nbs/examples/model_wrap.pt", "cpu");

    LOG_MSG("Model loaded successfully");

    std::vector<float> x = {
        -0.001436,-0.084742,-0.001168,0.009148,0.000078,0.000604,-0.000064
        -0.000955,0.017789,-0.001886,0.018542,0.018337,-0.001704,0.009327,0.008669
        0.009197,-0.15291,0.004286,-0.005986,0.026129,-0.106516,-0.004522,0.011924
        -0.004578,0.020894,-0.006322,-0.001541,-0.006778,-0.001413,0.009577
        -0.001028,0.000699,-0.153747,0.04489,0.022687,-0.008212,0.014208,-0.000049
        0.002666,-0.191132,0.002093,-0.015681,0.000948,-0.017899,-0.003699,0.010871
        -0.002394,0.023453,0.002108,0.007641,-0.000608,0.029507,-0.01465,-0.013023
        -0.001592,0.001291,-0.011376,-0.010331,0.003608,-0.012557,-0.007716
        -0.002631,-0.007365,-0.014146,-0.006523,-0.022319,-0.003283,-0.018123
        -0.00759,0.011322,0.002598,-0.005482,0.003064,0.005696,-0.00425,0.001423
        0.009213,-0.012387,0.012635,-0.009828,0.001038,-0.15181,0.000905,-0.150899
        -0.082256,0.001591,0.010371,0.008849,-0.019096,0.009867,0.003806,0.008231
        -0.020204,-0.188321,-0.199304,0.001263,0.006002,-0.008799,0.004953,0.003348
        0.000957,-0.001703,0.001737,0.023382,-0.005791,0.017804,-0.011797,0.008968
        0.001397,0.001008,-0.004283,-0.030426,0.0172,-0.154391,0.002479,-0.334384
        0.006329,-0.005863,-0.023262,0.004825,-0.006396,-0.013807,-0.032162
        -0.029546,-0.01009,-0.00821,-0.010677,-0.022719,-0.000519,0.012734,0.003049
        0.003176,-0.000515,0.00304,-0.007022,-0.180766,0.000613,0.007419,-0.181312
        0.006089,0.010831,0.004552,0.020826,0.005722,0.022911,0.005529,-0.000242
        0.005835,0.016652,-0.001969,0.006749,0.010181,0.007711,-0.012764,-0.000897
        0.000426,0.002478,-0.013662,-0.000696,-0.009817,-0.067881,0.001095
        -0.000836,0.006357,-0.004801,-0.002279,0.000569,0.005846,0.00761,-0.019098
        0.001698,-0.003143,-0.007982,-0.008044,-0.002689,-0.104677,0.019251
        0.000888,-0.004612,0.006267,-0.000693,-0.004777,-0.001345,-0.001368
        -0.004875,0.004619,-0.000445,-0.001388,0.00679,0.008148,0.009588,-0.012191
        -0.006955,0.001207,0.017781,-0.004355,-0.009411,-0.017909,0.003013
        -0.009718,0.002931,-0.002078,-0.000918,-0.000175,-0.007282,0.006609
        -0.001276,0.003774,0.001425,0.003638,0.003279,0.002724,0.004239,0.000632
        -0.005267,0.007879,0.000128,0.007178,-0.000121,0.003318,0.010845,0.0014
        0.001992,-0.009588,0.002686,0.005963,0.002612,-0.007078,-0.001321,0.005873
        -0.001051,0.007384,0.000523,-0.010531,-0.005724,-0.0005,-0.004705,0.003262
        0.002909,-0.001674,0.002785,0.007161,-0.007708,-0.010593,0.001971,0.007321
        -0.004188,0.005602,-0.002469,-0.015599,-0.002564,-0.001034,0.000376
        0.003355,0.013886,-0.004575,0.004085,-0.045288,0.000811,-0.010742,0.001904
        -0.014251,0.024856,-0.005405,0.009725,0.001488,0.000799,0.005525,0.023225
        0.009771,0.012521,0.015012,0.004677,0.005727,0.012546,-0.008754,0.005571
        -0.013009,0.008005,-0.0158,0.02035,0.00474,-0.002868,0.003773,-0.009864
        0.008165,-0.003107,-0.002485,-0.002388,0.00705,-0.008558,-0.232494
        -0.004173,-0.013182,-0.128209,-0.005926,0.014043,-0.001002,-0.00945
        -0.007661,0.005835,-0.003247,0.01159,-0.001993,-0.001637,-0.011058,-0.00173
        -0.001294,0.016453,0.025234,0.006788,0.018587,0.005299,-0.000036,-0.024275
        0.006221,0.002008,-0.004799,-0.000097,-0.010017,-0.001126,-0.035341
        0.013673,0.009518,-0.005044,0.003671,-0.007451,0.005147,-0.002055,0.008131
        -0.00283,-0.007551,-0.022131,-0.013839,0.015264,-0.033698,0.016165,0.010379
        -0.001234,-0.040652,-0.003696,-0.118265,-0.008137,0.004949,0.000382
        0.009006,-0.015876,-0.009207,-0.022828,-0.003669,0.004109,-0.028882
        -0.01312,-0.007095,-0.099535,0.004143,-0.003469,-0.013916,-0.006633
        -0.005428,0.002659,-0.018252,-0.00084,-0.003366,-0.002754,-0.004693
        -0.005026,0.000268,0.010497,-0.017421,-0.002866,-0.015518,-0.011503,0.00259
        0.002488,0.004795,0.020166,0.007952,0.00625,0.000583,-0.001197,-0.000871
        -0.002576,-0.000954,0.014026,0.014319,0.001349,-0.014331,-0.003494,0.000534
        -0.131035,0.018867,-0.006003,0.000965,0.010058,0.015642,-0.009097,0.009812
        -0.005994,0.009903,-0.008114,0.009834,-0.005238,0.002553,-0.135593
        -0.004792,-0.018289,0.009139,-0.05649,-0.016537,0.018035,-0.011089,0.00141
        0.001168,0.001363,-0.006452,0.003859,0.003893,-0.012357,-0.000159,0.006479
        0.000569,-0.011705,0.013024,0.028201,-0.01773,0.006492,0.000685,0.003662
        0.003197,0.003886,-0.000028,-0.014837,0.015099,0.010634,-0.012359,-0.018322
        0.002993,0.022758,-0.005762,0.008889,0.017836,-0.005567,0.006706,-0.018746
        -0.007786,0.000132,-0.014969,-0.005434,-0.000702,0.003928,-0.005732
        -0.039695,-0.007676,-0.001931,0.003229,-0.02353,-0.012267,-0.003603
        0.010417,-0.002422,-0.01032,-0.011607,-0.005287,-0.00674,0.005537,0.007106
        -0.00167,-0.010801,-0.013647,0.021011,-0.01095,0.002169,0.008268,-0.014663
        -0.002658,-0.187914,0.009155,0.007471,-0.003715,0.016294,0.001736,-0.011613
        -0.004629,0.028509,0.000207,-0.011869,0.007445,-0.006877,-0.015775,0.000696
        -0.121196,-0.022752,0.067813,-0.004551,-0.00998,0.000492,0.006904,0.009693
        -0.005779,0.00754,-0.003448,-0.004168,-0.003673,0.00158,-0.001361,0.000716
        0.012141,-0.004064,-0.021169,-0.005268,-0.004577,0.000461,-0.011963
        -0.005776,-0.004998,-0.008934,0.002898,-0.053773,0.010167,-0.009447
        0.006634,-0.012081,0.011154,-0.005575,-0.140487,-0.013123,0.003075,0.002877
        -0.003135,-0.005237,-0.007142,0.004358,0.006297,0.011497,0.005083,0.006186
        0.060522,0.000422,-0.002813,0.001202,-0.005791,-0.000393,-0.002274
        -0.000861,-0.009265,-0.006919,0.009944,-0.001989,0.002732,-0.004722
        0.009802,-0.002168,0.003879,-0.001305,-0.004104,-0.080626,-0.004807
        -0.008838,-0.003781,0.008383,-0.004961,-0.003109,0.003496,-0.005155
        -0.005103,-0.012386,0.011285,0.006509,-0.003528,0.000975,0.0031,0.003408
        -0.008843,-0.006933,0.004979,0.000322,-0.004078,0.003122,0.00657,0.010129
        -0.012298,0.03472,0.010127,-0.090554,0.00144,-0.008444,-0.019227,-0.016015
        -0.014317,-0.000929,0.015286,0.002597,0.005767,0.016872,-0.001331,-0.015372
        0.006157,-0.003142,0.000696,0.058645,-0.003675,0.001135,-0.001352,-0.027688
        0.011416,-0.001176,0.000308,0.014893,-0.013973,-0.009076,-0.001539
        -0.013992,0.003033,-0.074761,0.010909,-0.010814,-0.004852,0.004865,0.008309
        -0.009463,-0.015571,0.014212,0.009967,-0.008289,0.021197,-0.004742
        -0.007321,-0.004521,-0.010085,0.000058,-0.000915,-0.002885,-0.035277
        0.001016,0.006543,-0.003769,0.001304,-0.001264,-0.008523,-0.002811
        -0.007788,0.001937,-0.006417,0.036309,-0.004915,0.011154,-0.00902,-0.002208
        -0.005909,-0.002372,0.001679,-0.006918,-0.010647,-0.004834,0.000947
        -0.002797,0.008997,0.001598,-0.002951,-0.001087,0.010361,0.022658,-0.011985
        -0.008932,0.00435,0.010792,-0.001877,0.004927,0.004865,0.004527,-0.014257
        0.00592,0.006164,0.021233,0.005056,-0.000355,0.009513,0.007763,-0.002888
        -0.011767,0.002847,0.00371,0.007904,-0.015524,-0.008167,0.016921,0.015306
        -0.007595,-0.007145,0.006006,0.01885,-0.00262,0.008053,0.015118,0.001533
        0.013707,-0.032463,0.004469,-0.017901,0.014373,-0.003319,0.010613,-0.005018
        0.003813,0.003132,0.002167,0.016087,-0.00022,-0.005656,0.006416,-0.00625
        -0.088381,0.006459,0.003673,-0.048971,0.002364,0.000593,-0.008084,-0.012874
        0.004789,0.011649,0.005119,-0.004233,-0.063377,0.001234,-0.00509,0.00733
        -0.005617,0.035202,-0.004745,-0.014507,-0.006427,0.003399,0.008933
        -0.018188,-0.01535,0.008449,-0.04025,0.000563,-0.001754,-0.007206,-0.004526
        0.009923,0.000798,0.022226,-0.002354,0.02062,-0.007756,-0.009406,-0.005041
        -0.003406,-0.17471,0.00181,-0.012603,-0.058205,0.003839,0.002956,-0.127921
        -0.004301,0.004836,0.010076,-0.001815,-0.004208,-0.011268,0.005471,0.00909
        -0.00278,-0.008222,0.010663,-0.075837,-0.007987,-0.017326,0.017418
        -0.007132,-0.060782,-0.011505,0.015251,-0.0042,0.002985,0.014532,0.000545
        -0.001459,-0.010182,0.008446,-0.01206,-0.01378,-0.23899,0.015163,-0.012319
        0.011901,-0.021051,-0.005367,0.012039,-0.113217,-0.001092,0.009678,0.008476
        -0.005475,-0.008413,0.00829,0.010766,-0.006414,0.000608,0.010206,0.08515
        -0.006003,0.019473,-0.002901,-0.003725,0.008744,0.009099,-0.00303,0.005029
        -0.000019,0.002249,-0.009164,0.007397,-0.011807,0.003767,0.005305,-0.008574
        0.025048,-0.013395,-0.01216,0.002891,-0.007684,-0.000832,0.019987,0.020279
        0.00669,0.002955,-0.004013,0.010471,-0.005603,0.016908,-0.01068,0.017262
        0.006634,0.001368,0.002753,0.007672,0.003272,0.006333,0.017309,0.000356
        -0.015958,-0.00382,0.000516,-0.007893,-0.001172,-0.002527,-0.003681
        -0.008133,0.008906,-0.002793,-0.0046,0.005957,-0.013566,0.004035,0.003184
        0.011741,0.009567,-0.000023,-0.010518,-0.010086,-0.071174,-0.076767
        0.024674,0.003798,-0.008718,-0.001428,-0.02271,0.007235,0.005295,-0.016024
        -0.000225,-0.001787,-0.059491,-0.047463,-0.005654,0.000723,-0.002038
        -0.131294,-0.000972,0.043259,-0.012443,-0.147929,-0.00188,-0.006961
        -0.004052,-0.090805,-0.017038,0.023425,-0.028434,0.008876,0.008792
        -0.006643,0.007837,0.003569,0.001743,0.011008,-0.007794,0.000563,0.001136
        -0.000937,-0.003716,-0.00037,0.005442,-0.01118,-0.005892,0.006535,-0.013898
        0.000382,0.021605,-0.000284,-0.013897,-0.006885,0.002012,-0.009488
        -0.012978,0.01008,-0.003156,0.00069,-0.001457,-0.000045,0.003406,0.001713
        0.008585,0.000982,-0.012498,-0.000121,-0.009666,0.007935,0.005871,0.003485
        -0.02934,0.004426,-0.000365,-0.003684,0.002486,-0.010341,0.007202,0.002742
        0.013999,0.003345,-0.001137,0.003039,-0.003712,-0.014173,-0.019813
        -0.013311,-0.062469,0.000722,0.010764,0.007579,0.002587,0.002041,-0.021646
        -0.004963,0.000597,-0.019059,-0.025656,-0.012275,0.006219,0.009415,0.010004
        0.020989,0.000672,0.014709,0.001036,-0.014056,-0.009339,-0.009672,-0.009201
        -0.022899,0.008337,-0.000797,-0.000451,-0.002685,-0.008416,-0.001374
        0.008043,0.011682,-0.008223,-0.00297,0.001464,-0.007625,-0.000529,-0.006902
        -0.009836,0.010059,-0.001538,0.001922,-0.031893,0.008967,-0.008679
        -0.234851,0.000973,-0.000656,0.498047,0.441406,0.9,0.2,0.5,1.,0.01
    };

    // do inference
    auto tensor = Model::getInstance().toTensor(
            x.data(),
            1,
            1,
            1,
            x.size()
    );

    auto output = std::vector<float>(32 * 2 * 6);

    model.process(
        tensor,
        output.data()
    );  
    
    return 0;
}