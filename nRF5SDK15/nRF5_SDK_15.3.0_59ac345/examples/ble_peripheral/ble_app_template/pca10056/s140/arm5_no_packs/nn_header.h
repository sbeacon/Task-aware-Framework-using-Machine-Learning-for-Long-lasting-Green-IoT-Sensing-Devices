#ifndef NN_HEADER_H__
#define NN_HEADER_H__
#ifdef __cplusplus
extern "C" {
#endif

int a_d_w_row = 24;
int a_d_w_column = 32;
float a_d_w[24 * 32] = {0.02548742, 0.14093874, 0.09732744, 0.02432536, -0.23100252, -0.03467518, -0.07014453, -0.07669527, 0.010100511, 0.1593503, -0.27961132, -0.21371137, -0.20324177, 0.16537626, -0.068059176, -18.261206, -0.007921922, 0.33199364, -5.8480716, 0.068417, -0.09432617, -0.08242632, -2.0167441, 0.22191298, 0.06001547, -0.21704128, -0.022050282, 0.09293378, -0.13295686, -0.54049385, 0.0781863, -0.011621756, -0.075674996, 0.036545314, -0.043543458, -0.0035319051, -0.043970603, -0.10674565, -0.067612864, 0.24255373, 0.049149178, -0.26976073, -0.28589872, 0.11292478, -0.20868106, -0.07165101, 0.1763744, -9.037399, 0.0033268405, -0.5468213, -8.020068, -0.052279312, 0.15691367, -0.16711116, -1.0526423, 0.04570059, 0.09900259, 0.56183857, -0.017237242, -0.13903506, -1.5971094, -0.13300475, -0.05852143, 0.07025892, 0.1063374, -0.17884958, -0.118682906, -0.02283895, -0.075034946, -0.17098376, -0.08301011, 0.3220678, -0.02804218, -0.976472, 0.10147326, -0.07183331, 0.021690104, 0.04826506, -0.2841486, -1.949267, -0.013418521, -1.8650159, -12.265587, 0.0097320415, 0.27019987, -0.035064537, -0.042936932, 0.18916246, 0.09403629, -0.1883374, -0.0038695582, 0.04711862, -4.0723534, 0.39049232, 0.040641803, -0.059727374, 0.038464155, -0.00551978, -0.004884565, 0.05071942, -0.13805375, 0.12486152, -0.055945955, 0.23233157, -0.025931906, -0.81340903, -0.03857685, -0.049324386, 0.2052468, -0.0039846753, 0.2232555, 0.6474566, 0.055151604, -2.084409, -10.427374, -0.0382448, -0.41700268, 0.08281722, 0.2421209, 0.020402279, 0.010308471, -2.8178918, 0.056085102, 0.07562062, -2.976832, 0.39231524, 0.0862372, -0.020410206, -0.19363178, 0.25989205, 0.07917979, 0.18394049, 0.36758932, 0.14514789, 0.10182525, 0.17399779, 0.0037923746, -0.115875095, -0.22824863, 0.044414077, 0.2202199, 0.27367875, 0.28617162, 0.25932392, -0.06631451, -1.3448035, -5.2122173, -0.4661801, -1.7409909, 0.11259846, -0.10086334, 0.018098596, -0.19858734, -11.792156, 0.03558177, -0.0708063, -0.7150416, -0.14765191, -0.06326152, 0.0039273994, 0.07523778, 0.30079994, 0.026188387, -0.10147314, 0.29591793, 0.08016551, 0.058698397, -0.0830814, 0.0068665273, 0.19305097, -0.17806561, -0.3018083, 0.19352096, 0.28507647, -1.9843495, -0.24784435, 0.029744409, -0.44998324, -0.6544211, -0.42368114, -2.0095744, 0.22543105, 0.10940113, 0.06344127, -0.2870089, -13.717104, 0.007854755, -0.04316178, 0.37124142, -0.16096583, -0.040590305, 0.03293849, 0.16981634, 0.24274859, -0.11743642, -1.0231273, -0.021576997, -0.084196694, -0.15812662, -0.22016501, -0.0045553357, 0.050852448, 0.028856222, -0.27181932, -0.22999932, 0.019911297, -6.0200744, 0.0851191, 0.054029707, -0.18986923, 0.48455676, -0.18472284, -0.53861713, 0.09435656, 0.010610538, 0.14875647, -0.04213072, -6.1208453, -0.06684218, 0.06533618, 0.19400233, 0.16651332, 0.08509118, -0.03512741, -0.17738321, 0.07106672, 0.16517588, -1.0210574, 0.22697295, -0.06756005, -0.2382339, -0.2700443, -0.023241704, -0.17323302, -0.1258121, 0.11820169, -0.47806394, 0.032680683, -9.274517, 0.23587391, -0.035141945, 0.41600847, -0.29053688, 0.08940602, 0.09075611, -0.097552866, -0.05985507, -0.05860201, 0.27341753, -0.5801611, 0.00094131095, -0.0033896195, -0.25120828, 0.5741986, -0.024157066, 0.0005399009, -1.8031147, -0.008739227, 0.17431358, -0.554653, 0.22283602, 0.09792345, 0.06315099, -0.11952747, -0.00085229706, 0.054642156, -0.015278773, -0.026631316, -0.13801694, 0.4779318, -4.748255, -0.19853456, 0.039388612, -0.02724778, 0.006155601, -0.050099853, 0.04949611, -0.11621934, -0.08773471, -0.27594492, 0.55951, 0.7831472, 0.0832943, -0.05252065, 0.0665262, 0.21678483, -0.061468787, -0.008221719, -5.2061844, -0.15802322, -0.27083054, 0.2007105, 0.5223657, 0.26376915, 0.18595023, 0.024741983, 0.044206437, 0.00827172, -0.013515195, 0.04767972, 0.22895207, 0.7334034, -0.60086757, -0.18170762, 0.007025913, -0.10854647, 0.39098328, -0.00095627934, 0.029753461, -0.10402015, 0.060261626, -0.29354075, 0.62946963, -0.29939494, -0.007401499, 0.029053431, 0.16175736, -0.10596132, 0.01207193, 0.03444129, -3.7732759, -0.03191293, -1.6234833, 0.079746954, 0.4492517, 0.21527064, -0.0987904, -0.031977713, -0.066633336, -0.028256187, 0.0004511826, 0.11858352, 0.43790343, 0.2983346, 0.76250315, 0.31609064, 0.06644908, -0.062280096, -0.1268427, -0.027577057, 0.050903894, -0.049461823, -0.074449465, 0.08054355, 0.5960081, -0.16429839, -0.19310606, 0.33479562, -0.0040572616, -0.15704493, 0.061412033, -0.012027648, -1.8198152, 0.12580746, -4.5959535, -0.02910865, 0.21602312, -0.08092604, -0.38412672, -0.14716762, -0.052487493, -0.023183426, -0.036890112, -0.03455049, 0.35514385, -0.32911682, -0.13239753, 0.035328243, 0.031295545, -0.07317251, -0.19763938, 0.05428345, 0.016353741, 0.09072882, 0.06546658, 0.28776604, 0.3804581, 0.3221009, -0.789149, -0.16956697, -0.049903706, 0.0031376947, 0.22727227, -0.0205489, 0.24210045, 0.043793906, -3.866077, -0.050362557, 0.11439819, -0.36700866, -0.28504592, -0.116886795, 0.15040655, 0.07535154, 0.06607627, -0.38447973, 0.25242084, -0.32406864, -0.19832116, -0.15028484, -0.045178223, 0.023855679, 0.15681319, 0.070996866, -0.10001551, 0.29896417, -0.057235494, 0.29882795, 0.18512174, -0.08720444, -0.6635555, -1.5747659, 0.044670206, 0.07007254, -0.24883759, -0.03398303, 0.05814977, -0.08860068, -2.0938122, 0.023983613, 0.006198342, -0.3446584, 0.1183186, 0.06010037, 0.22505927, 0.019653095, -0.08927771, -0.23605976, -0.07969123, -0.046944123, 0.17791317, -0.14366463, -0.00045451743, 0.11035754, 0.10126417, -0.04204004, 0.045982417, 0.4158991, -0.05453098, -0.11960099, 0.07914341, -0.21908984, -0.3058057, -3.6580138, -0.0044052317, 0.026038652, -1.2429286, 0.023353053, -0.029684788, -0.21216351, -0.41636986, -0.0109267505, 0.12165664, -0.17808813, 0.24589084, 0.17042805, -0.515703, -0.09000833, -0.09100205, -0.03255095, -0.20984022, 0.115139835, -0.008446978, 0.0033899047, 0.055098556, 0.043817904, -0.3085653, -0.041270316, -0.0067795995, 0.48254094, 0.06339866, -0.23356587, 0.019075017, 0.2244863, 0.09590807, -5.2253275, 0.0048420858, -0.053772505, -0.97968346, -0.024133481, 0.14383747, -0.23619537, 0.25013298, -0.012847783, -0.053268295, 0.5320268, -0.030373732, 0.016344866, -2.0341203, -0.038117733, 0.06489921, 0.055422336, -0.17108175, 0.035812892, -0.08434216, 0.18841505, 0.003746565, -0.06218445, -0.05547097, 0.007402074, -0.002194008, 0.4256394, 0.004843949, -0.08286753, -0.059270907, 0.17529088, -0.005366753, -2.663539, 0.018612823, 0.019461893, -0.8271902, -0.031028895, 0.017206306, -0.23701365, 0.09799612, 0.025034634, 0.017548002, 0.8167675, -0.3536543, 0.069677, -4.765471, 0.03898266, 0.4716632, 0.05499938, -0.13937813, 0.13158463, 0.1350857, -0.08121165, 0.09897072, -0.038855813, 0.12910852, 0.027968137, -0.016203986, 0.3579685, 0.03433839, 0.291328, -0.10184217, -0.08074153, 0.010463641, -0.87692463, -0.026152642, -0.26941136, -0.071471505, 0.032630973, -0.02728201, 0.11856614, -0.040933527, -0.04355732, -0.15322813, 0.64937353, -0.36842614, 0.14956398, -4.4266367, 0.08093782, 0.36904335, 0.09728255, -0.08962346, -0.026599841, 0.021960778, -0.2128109, -0.19793534, -0.15316859, -0.06415815, -0.048180755, 0.07045333, 0.22519141, 0.012349816, -0.018868059, 0.03203804, -0.13199872, 0.051632833, 0.14004272, 0.06880221, -0.25661305, 0.3030906, 0.11940139, -0.16615887, 0.057409924, 0.042962864, 0.07831018, 0.16767941, -0.14642093, -0.3314181, 0.28778556, -2.2866948, -0.0023343235, 0.38973802, -0.2168723, 0.053842995, 0.075618036, -0.15534906, 0.011487176, -0.8917487, 0.090187475, 0.0768577, 0.059795532, -0.08098012, 0.042849924, -0.010422989, -0.17466652, -0.07153016, -0.07410328, 0.04690656, 0.16069585, 0.011035237, -0.17835443, 0.008675625, 0.16043615, 0.08076124, 0.3189904, -0.030263055, 0.0019607656, 0.0018786032, -0.3824822, -0.2970847, 0.2638303, -0.48463583, -0.023659728, 0.06561169, -0.1237955, 0.061309136, -0.17266749, 0.14736825, 0.0039282106, -1.3016795, 0.024994517, -0.065941855, -0.075033, 0.027288012, -0.171248, -0.05961595, -0.54947716, -0.010555097, -0.028926658, -0.06383574, -0.089861885, 0.021265443, -0.05861097, 0.013713507, -0.08881422, 0.15878122, 0.40955913, -0.21647094, -0.028545441, -0.10374799, -0.41634816, -0.20830345, 0.17626107, 0.14522068, 0.049213946, 0.08990718, -0.03651193, 0.11474052, 0.050366692, 0.07949617, -0.14826764, -1.0825633, 0.07348565, -0.060876712, 0.02748854, 0.009874191, -0.036370274, 0.041450806, -0.34895897, 0.047484133, 0.07386078, -0.10838862, -0.052033592, -0.074110806, -0.08368976, 0.089248724, -0.60032195, 0.0031693014, 0.20311897, -0.02243061, 0.005825679, -0.190387, -0.06824269, -0.16675666, -0.052330527, 0.20325398, 0.011331976, 0.0081945155, 0.45772448, 0.15221454, 0.2985096, -0.2570471, 0.19783905, -0.29786393, -0.012169951, -0.15308234, 0.020737212, 0.02980607, 0.07069676, 0.010628522, -0.09837239, 0.047965106, -0.11562253, 0.014707263, 0.12906559, -0.02438224, 0.049432606, -0.13756795, -1.273391, -0.06444098, 0.119770676, 0.23371121, 0.0124636, -0.32408047, -0.0369563, -0.00417249, -0.23799174, -0.13050227, -0.02536376, 0.0033289427, 0.50235456, 0.15696615, 0.634002, -0.04696621, -0.23878555, 0.102916956, -0.024119245, -0.021951973, 0.034111075, -0.013137278, 0.2264502, 0.05203571, 0.08356738, 0.034806583, 0.0014792649, 0.017235221, 0.101967186, -0.0116777215, 0.07406231, -0.10259288, -2.35226, -0.15479153, -0.38639143, -0.03681829, 0.037766952, -0.00097265944, -0.057808403, -0.02463972, -0.25836864, -0.044672675, -0.035292976, 0.124343544, 0.38822636, 0.20623621, 0.66445506, 0.1171065, 0.25481665, 0.15742174, -0.06494434, 0.32008538, -0.017929109, 0.008891749, 0.25776175, -0.09307872, 0.3803334, -0.15183225, -0.03091169, 0.0246631, -0.22970305, 0.13959713, 0.18538713, 0.095026664, -1.8410523};
float a_d_b[32] = {0.11892156, 0.13392437, 0.11320307, 0.19018824, 0.22357506, 0.3067021, 0.6385229, 0.28009143, 0.1681773, 0.26007417, 0.28416577, 0.30068278, 0.24500802, 0.13224424, 0.18112162, 0.20481461, 0.3743598, 0.188, 0.035871025, 0.17637211, 0.18221992, 0.0729962, 0.23121251, 0.38056812, 0.17939126, 0.20650603, 0.25940913, 0.19128257, 0.16847064, 0.33131722, 0.24285294, 0.18822125};
float autoencoder_dense_weight1[32][16];
float autoencoder_dense_bias1[16];
float autoencoder_dense_weight2[16][12];
float autoencoder_dense_bias2[12];
float autoencoder_dense_weight3[12][16];
float autoencoder_dense_bias3[16];
float autoencoder_dense_weight4[16][32];
float autoencoder_dense_bias4[32];
float autoencoder_dense_weight5[32][24];
float autoencoder_dense_bias5[24];

	


#ifdef __cplusplus
}
#endif
#endif // NN_HEADER_H__