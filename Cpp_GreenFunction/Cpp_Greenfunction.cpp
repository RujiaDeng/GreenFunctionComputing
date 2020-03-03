#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

const int o = 1;
const int p = 1;
double RB[10][50] = {{2.404825557695773,5.520078110286311,8.653727912911013,11.791534439014281,14.930917708487788,18.071063967910924,21.211636629879262,24.352471530749302,27.493479132040253,30.634606468431976,33.775820213573570,36.917098353664045,40.058425764628240,43.199791713176730,46.341188371661815,49.482609897397815,52.624051841115000,55.765510755019980,58.906983926080940,62.048469190227166,65.189964800206870,68.331469329856800,71.472981603593740,74.614500643701830,77.756025630388050,80.897555871137630,84.039090776938200,87.180629843641170,90.322172637210490,93.463718781944780,96.605267950996260,99.746819858680600,1.028883742541948e+02,1.060299309164516e+02,1.091714896498054e+02,1.123130502804949e+02,1.154546126536669e+02,1.185961766308725e+02,1.217377420879510e+02,1.248793089132330e+02,1.280208770060083e+02,1.311624462752139e+02,1.343040166383055e+02,1.374455880202843e+02,1.374455880202843e+02,1.374455880202843e+02,1.374455880202843e+02,1.374455880202843e+02,1.374455880202843e+02,1.374455880202843e+02},
                    {3.831705970207513,7.015586669815619,10.173468135062722,13.323691936314225,16.470630050877630,19.615858510468240,22.760084380592772,25.903672087618382,29.046828534916855,32.189679910974405,35.332307550083870,38.474766234771614,41.617094212814450,44.759318997652820,47.901460887185450,51.043535183571510,54.185553641061320,57.327525437901010,60.469457845347490,63.611356698481230,66.753226734098490,69.895071837495780,73.036895225573830,76.178699584641460,79.320487175476300,82.462259914373560,85.604019436350240,88.745767144926290,91.887504251694990,95.029231808044700,98.170950730790780,1.013126618230387e+02,1.044543657912828e+02,1.075960632595092e+02,1.107377547808992e+02,1.138794408475950e+02,1.170211218988924e+02,1.201627983281490e+02,1.233044704886357e+02,1.264461386985166e+02,1.295878032451040e+02,1.327294643885096e+02,1.358711223647890e+02,1.390127773886597e+02,1.390127773886597e+02,1.390127773886597e+02,1.390127773886597e+02,1.390127773886597e+02,1.390127773886597e+02,1.390127773886597e+02},
                     {5.135622301840684,8.417244140399866,11.619841172149060,14.795951782351262,17.959819494987826,21.116997053021844,24.270112313573100,27.420573549984557,30.569204495516400,33.716519509222700,36.862856511283810,40.008446733478195,43.153453778371464,46.297996677236920,49.442164110416876,52.586023506815960,55.729627053201140,58.873015772612160,62.016222359217650,65.159273190757800,68.302189784183450,71.444989866357860,74.587688173602400,77.730297056978900,80.872826946244770,84.015286709546170,87.157683935203370,90.300025154592920,93.442316020011120,96.584561447783200,99.726765734292800,1.028689326507279e+02,1.060110655209634e+02,1.091531672859820e+02,1.122952405574717e+02,1.154372876626644e+02,1.185793106820416e+02,1.217213114811962e+02,1.248632917378812e+02,1.280052529650732e+02,1.311471965307178e+02,1.342891236747031e+02,1.374310355235027e+02,1.374310355235027e+02,1.374310355235027e+02,1.374310355235027e+02,1.374310355235027e+02,1.374310355235027e+02,1.374310355235027e+02,1.374310355235027e+02},
                     {6.380161895923983,9.761023129981670,13.015200721698434,16.223466160318768,19.409415226435012,22.582729593104443,25.748166699294977,28.908350780921758,32.064852407097710,35.218670738610110,38.370472434756940,41.520719670406780,44.669743116617255,47.817785691533300,50.965029906205180,54.111615569821870,57.257651604499020,60.403224138472120,63.548402178567210,66.693241667372670,69.837788437904340,72.982080400432010,76.126149184774090,79.270021390055860,82.413719547267870,85.557262868830010,88.700667838222050,91.843948678147090,94.987117725465610,98.130185733874880,1.012731621200798e+02,1.044160551653968e+02,1.075588721819325e+02,1.107016196503949e+02,1.138443033350319e+02,1.169869283800093e+02,1.201294993906337e+02,1.232720205021307e+02,1.264144954381477e+02,1.295569275607296e+02,1.326993199131840e+02,1.358416752569877e+02,1.389839961036805e+02,1.389839961036805e+02,1.389839961036805e+02,1.389839961036805e+02,1.389839961036805e+02,1.389839961036805e+02,1.389839961036805e+02,1.389839961036805e+02},
                     {7.588342434503804,11.064709488501185,14.372536671617590,17.615966049804832,20.826932956962388,24.019019524771110,27.199087765981250,30.371007667117247,33.537137711819230,36.699001128744650,39.857627302180890,43.013737723354430,46.167853512924374,49.320360686390270,52.471551398458026,55.621650909767980,58.770835740459250,61.919246204097696,65.066995255695570,68.214174861467040,71.360860665297990,74.507115461396410,77.652991815343410,80.798534067923710,83.943779885098080,87.088761469813620,90.233506518792370,93.378038984848910,96.522379689381220,99.666546818328830,1.028105563266903e+02,1.059544222706969e+02,1.090981570823107e+02,1.122417717974093e+02,1.153852762465297e+02,1.185286792151526e+02,1.216719885790571e+02,1.248152114191589e+02,1.279583541193706e+02,1.311014224503452e+02,1.342444216414239e+02,1.373873564426807e+02,1.405302311786232e+02,1.405302311786232e+02,1.405302311786232e+02,1.405302311786232e+02,1.405302311786232e+02,1.405302311786232e+02,1.405302311786232e+02,1.405302311786232e+02},
                     {8.771483815959954,12.338604197466946,15.700174079711669,18.980133875179920,22.217799896561267,25.430341154222706,28.626618307291140,31.811716724047763,34.988781294559296,38.159868561967130,41.326383254047410,44.489319123219670,47.649399806697055,50.807165203006330,53.963026558378150,57.117302781504250,60.270245072942800,63.422054045875770,66.572891887118260,69.722891161716730,72.872161296912010,76.020793430591610,79.168864087087400,82.316437999012300,85.463570298373110,88.610308235796270,91.756692542506130,94.902758518889560,98.048536911695170,1.011940546263090e+02,1.043393353092260e+02,1.074843998275344e+02,1.106292666660700e+02,1.137739522582933e+02,1.169184712634550e+02,1.200628367999636e+02,1.232070606428306e+02,1.263511533914875e+02,1.294951246130389e+02,1.326389829650510e+02,1.357827363012080e+02,1.389263917625648e+02,1.389263917625648e+02,1.389263917625648e+02,1.389263917625648e+02,1.389263917625648e+02,1.389263917625648e+02,1.389263917625648e+02,1.389263917625648e+02,1.389263917625648e+02},
                     {9.936109524217684,13.589290170541215,17.003819667816014,20.320789213566506,23.586084435581390,26.820151983411403,30.033722386570470,33.233041762847120,36.422019668258460,39.603239416075404,42.778481613199510,45.949015998042604,49.115773724764260,52.279453903601050,55.440592068853150,58.599605631237690,61.756824901876820,64.912514784720730,68.066890268038730,71.220127696168400,74.372373108624340,77.523748502423470,80.674356598679280,83.824284515391880,86.973606629195870,90.122386828076230,93.270680301413930,96.418534974778230,99.565992669243910,1.027130900451365e+02,1.058598593756446e+02,1.090063291850965e+02,1.121525247787811e+02,1.152984686852528e+02,1.184441810275578e+02,1.215896798363759e+02,1.247349813154260e+02,1.278801000674244e+02,1.310250492872787e+02,1.341698409279344e+02,1.373144858432929e+02,1.404589939118169e+02,1.404589939118169e+02,1.404589939118169e+02,1.404589939118169e+02,1.404589939118169e+02,1.404589939118169e+02,1.404589939118169e+02,1.404589939118169e+02,1.404589939118169e+02},
                     {11.086370019245084,14.821268727013171,18.287582832481725,21.641541019848400,24.934927887673023,28.191188459483200,31.422794192265580,34.637089352069324,37.838717382853610,41.030773691585540,44.215408505261260,47.394165755570510,50.568184679795564,53.738325371963290,56.905249991978785,60.069476998277000,63.231418368888270,66.391405759532990,69.549709272422250,72.706551172477150,75.862116076322400,79.016558632922440,82.170009390527910,85.322579332379530,88.474363421866740,91.625443401413930,94.775890022676630,97.925764838797930,1.010751216561287e+02,1.042240077187603e+02,1.073724646816636e+02,1.105205294152689e+02,1.136682346746632e+02,1.168156096593073e+02,1.199626804836521e+02,1.231094705748034e+02,1.262560010101177e+02,1.294022908050712e+02,1.325483571597571e+02,1.356942156707935e+02,1.388398805141850e+02,1.388398805141850e+02,1.388398805141850e+02,1.388398805141850e+02,1.388398805141850e+02,1.388398805141850e+02,1.388398805141850e+02,1.388398805141850e+02,1.388398805141850e+02,1.388398805141850e+02},
                     {12.225092264004656,16.037774190887710,19.554536430997054,22.945173131874622,26.266814641176644,29.545659670998550,32.795800037341460,36.025615063869570,39.240447995178140,42.443887743273560,45.638444182199144,48.825930381553860,52.007691456686900,55.184747939289046,58.357889025269690,61.527735166816010,64.694781235818700,67.859426993000770,71.021999040620500,74.182766927652780,77.341955156796000,80.499752266331730,83.656317789561700,86.811787651267140,89.966278397575320,93.119890544332350,96.272711251865960,99.424816479638880,1.025762727354534e+02,1.057271385057780e+02,1.088774654332082e+02,1.120272992918642e+02,1.151766808001579e+02,1.183256463017888e+02,1.214742283392913e+02,1.246224561394525e+02,1.277703560260365e+02,1.309179517722313e+02,1.340652649028669e+02,1.372123149545748e+02,1.403591197005770e+02,1.403591197005770e+02,1.403591197005770e+02,1.403591197005770e+02,1.403591197005770e+02,1.403591197005770e+02,1.403591197005770e+02,1.403591197005770e+02,1.403591197005770e+02,1.403591197005770e+02},
                     {13.354300477435330,17.241220382489130,20.807047789264107,24.233885257750550,27.583748963573008,30.885378967696680,34.154377923855094,37.400099977156586,40.628553718964525,43.843801420337350,47.048700737654030,50.245326955305380,53.435227157042060,56.619580266508436,59.799301630960220,62.975113534241600,66.147594024795960,69.317211517895090,72.484349817473050,75.649326536060830,78.812406871964210,81.973814061805540,85.133737413339160,88.292338551132180,91.449756324634400,94.606110702857690,97.761505892707820,1.009160328564438e+02,1.040697713596620e+02,1.072227916492431e+02,1.103751558372540e+02,1.135269190494146e+02,1.166781303837155e+02,1.198288337149293e+02,1.229790683732444e+02,1.261288697194803e+02,1.292782696348610e+02,1.324272969398339e+02,1.355759777536717e+02,1.387243358044232e+02,1.387243358044232e+02,1.387243358044232e+02,1.387243358044232e+02,1.387243358044232e+02,1.387243358044232e+02,1.387243358044232e+02,1.387243358044232e+02,1.387243358044232e+02,1.387243358044232e+02,1.387243358044232e+02}};
const double A = 1000;
const double pi = acos(-1.0);
const int N = 1;
const int nmax = 2;
const int mmax = 3;
const int nn = (nmax + 1) * mmax;
const int M = N * nn;

struct Cyl{ //声明一个结构体类型Cyl
    double x[N][3]; //声明一个浮点型二维数组，用来放圆柱中心点坐标
    double u[N][3]; //声明一个浮点型二维数组，用来放圆柱主轴单位方向向量
    double h[N];    //声明一个浮点型数组，用来放圆柱高度
    double r[N];    //声明一个浮点型数组，用来放圆柱半径
};

//example 1
Cyl S = {{0, 0, 0}, {0, 0, 1.0}, {1.0}, {1.0}};
double x[o][3] = {{0,0,0}};
double y[p][3] = {{0,0,2}};

/*
//example 2
Cyl S = {{0, 0, 0}, {0, 0, 1.0}, {1.0}, {1.0}};
double x[o][3] = {{0,0,0}};
double y[p][3] = {{0,0,2}};
*/

//F，G, F', G'相关
double Qi(double x,double y,double *a)
{
    double value = sqrt(pow((a[0]+a[1]*x*sin(y)+a[2]*x*cos(y)),2)+pow((a[3]+a[4]*x*cos(y)+a[5]*x*sin(y)),2));
    return value;
}
double Wi(double x,double y,double *a)
{
    double value = acos( (a[6]+a[7]*x*sin(y)+a[8]*x*cos(y))/Qi(x,y,a) );
    return value;
}
double Ei(double x,double y,double *a)
{
    double value = a[9]+a[10]*x*cos(y)+a[11]*x*sin(y);
    return value;
}

//F积分函数
double f(double x,double y,double *a,int g,int h,int n,int m,int index)
{
    double fvalue = 0;
    if(index==0)//F
        if(n==0)
            fvalue = x*cyl_bessel_j(0,RB[1][m]*x)*cyl_bessel_j(g,RB[g+1][h]*Qi(x,y,a))*sin(g*Wi(x,y,a))*exp(-RB[g+1][h]*Ei(x,y,a));
        else
            fvalue = x*cyl_bessel_j(n,RB[n+1][m]*x)*cos(n*y)*cyl_bessel_j(g,RB[g+1][h]*Qi(x,y,a))*sin(g*Wi(x,y,a))*exp(-RB[g+1][h]*Ei(x,y,a));
    if(index==1)//G
        if(n==0)
            fvalue = x*cyl_bessel_j(0,RB[1][m]*x)*cyl_bessel_j(g,RB[g+1][h]*Qi(x,y,a))*cos(g*Wi(x,y,a))*exp(-RB[g+1][h]*Ei(x,y,a));
        else
            fvalue = x*cyl_bessel_j(n,RB[n+1][m]*x)*cos(n*y)*cyl_bessel_j(g,RB[g+1][h]*Qi(x,y,a))*cos(g*Wi(x,y,a))*exp(-RB[g+1][h]*Ei(x,y,a));
    if(index==2)//F'
        if(n!=0)
            fvalue = x*cyl_bessel_j(n,RB[n+1][m]*x)*sin(n*y)*cyl_bessel_j(g,RB[g+1][h]*Qi(x,y,a))*sin(g*Wi(x,y,a))*exp(-RB[g+1][h]*Ei(x,y,a));
    if(index==3)//G'
        if(n!=0)
            fvalue = x*cyl_bessel_j(n,RB[n+1][m]*x)*sin(n*y)*cyl_bessel_j(g,RB[g+1][h]*Qi(x,y,a))*cos(g*Wi(x,y,a))*exp(-RB[g+1][h]*Ei(x,y,a));
    return fvalue;
}

//F二重积分
double f_integral2(double ax,double bx,double ay,double by,double *a,int g,int h,int n,int m,int index,
		double(*f)(double x,double y,double *a,int g,int h,int n,int m,int index),int precision=1000)
{

	double lenx=bx-ax,leny=by-ay;
	double interval=1.0/precision;
	unsigned long Nx=lenx/interval,Ny=leny/interval;
	double result=0;
	for(unsigned long i=0;i<Nx;++i){
		for(unsigned long j=0;j<Ny;++j){
			result+=f(ax+i*interval,ay+j*interval,a,g,h,n,m,index)*(interval*interval);
		}
	}
    return result;
}

//求F,G,F',G'内部元素
double FG(int i,int j,int g,int h,int n,int m,int index)
{

    double w = 0;
    double xi[3], xj[3], ui[3], uj[3];
    double hi = S.h[i - 1], hj = S.h[j - 1], rj = S.r[j - 1];
    for (int k = 0; k < 3;k++)
    {
        xi[k] = S.x[i-1][k];
        xj[k] = S.x[j-1][k];
        ui[k] = S.u[i-1][k];
        uj[k] = S.u[j-1][k];
    }
    double a[12];
    a[0] = hj*uj[2]*(-ui[0]+uj[0]*sqrt(pow(ui[1],2)+pow(ui[2],2))/sqrt(pow(uj[1],2)+pow(uj[2],2)))+sqrt(pow(ui[1],2)+pow(ui[2],2))*(-xi[0]+xj[0])+ui[0]*(xi[2]-xj[2]);
    a[1] = uj[1]*(-ui[0]+uj[0]*sqrt(pow(ui[1],2)+pow(ui[2],2))/sqrt(pow(uj[1],2)+pow(uj[2],2)));
    a[2] = ui[0]*uj[0]+sqrt(pow(ui[1],2)+pow(ui[2],2))*sqrt(pow(uj[1],2)+pow(uj[2],2));
    a[3] =  hj*(-uj[1]*ui[2]+ui[1]*uj[2]*(ui[0]*uj[0]+sqrt(pow(ui[1],2)+pow(ui[2],2))*sqrt(pow(uj[1],2)+pow(uj[2],2))))/(sqrt(pow(ui[1],2)+pow(ui[2],2))*sqrt(pow(uj[1],2)+pow(uj[2],2)))+ui[0]*ui[1]*(-xi[0]+xj[0])/sqrt(pow(ui[1],2)+pow(ui[2],2))+ui[2]*(-xi[1]+xj[1])/sqrt(pow(ui[1],2)+pow(ui[2],2))+ui[1]*(-xi[2]+xj[2]);
    a[4] = ui[1]*(-uj[0]+ui[0]*sqrt(pow(uj[1],2)+pow(uj[2],2))/sqrt(pow(ui[1],2)+pow(ui[2],2)));
    a[5] = (ui[0]*uj[0]*ui[1]*uj[1]+ui[2]*uj[2]+ui[1]*uj[1]*sqrt(pow(ui[1],2)+pow(ui[2],2))*sqrt(pow(uj[1],2)+pow(uj[2],2)))/(sqrt(pow(ui[1],2)+pow(ui[2],2))*sqrt(pow(uj[1],2)+pow(uj[2],2)));
    a[6] = hj*uj[2]*(-ui[0]+uj[0]*sqrt(pow(ui[1],2)+pow(ui[2],2))/sqrt(pow(uj[1],2)+pow(uj[2],2)))+sqrt(pow(ui[1],2)+pow(ui[2],2))*(-xi[0]+xj[0])+ui[0]*(xi[2]-xj[2]);
    a[7] = uj[1]*(-ui[0]+uj[0]*sqrt(pow(ui[1],2)+pow(ui[2],2))/sqrt(pow(uj[1],2)+pow(uj[2],2)));
    a[8] = ui[0]*uj[0]+sqrt(pow(ui[1],2)+pow(ui[2],2))*sqrt(pow(uj[1],2)+pow(uj[2],2));
    a[9] = hj*(ui[1]*uj[1]+ui[2]*uj[2]*(ui[0]*uj[0]+sqrt(pow(ui[1],2)+pow(ui[2],2))*sqrt(pow(uj[1],2)+pow(uj[2],2))))/(sqrt(pow(ui[1],2)+pow(ui[2],2))*sqrt(pow(ui[1],2)+pow(uj[2],2)))
    +ui[0]*ui[2]*(-xi[0]+xj[0])/sqrt(pow(ui[1],2)+pow(ui[2],2))+ui[1]*(xi[1]-xj[1])/sqrt(pow(ui[1],2)+pow(ui[2],2))+ui[2]*(-xi[2]+xj[2]);
    a[10] = ui[2]*(-uj[0]+ui[0]*sqrt(pow(uj[1],2)+pow(uj[2],2))/sqrt(pow(ui[1],2)+pow(ui[2],2)));
    a[11] = (ui[0]*uj[0]*uj[1]*ui[2]-ui[1]*uj[2]+uj[1]*ui[2]*sqrt(pow(ui[1],2)+pow(ui[2],2))*sqrt(pow(uj[1],2)+pow(uj[2],2)))/(sqrt(pow(ui[1],2)+pow(ui[2],2))*sqrt(pow(uj[1],2)+pow(uj[2],2)));
    if(index==0)//F
    {
        if(n==0){
            w = f_integral2(0,rj,0,2*pi,a,g,h,n,m,index,f)/(pi*A*A*pow(cyl_bessel_j(1,RB[1][m]),2)*exp(-RB[1][m]*hj));
        }
        else{
            w = 2*f_integral2(0,rj,0,2*pi,a,g,h,n,m,index,f)/(pi*A*A*pow(cyl_bessel_j(n+1,RB[n+1][m]),2)*exp(-RB[1][m]*hj));
        }  
    }
    if(index==1)//G
    {
        if(n==0){
            w = f_integral2(0,rj,0,2*pi,a,g,h,n,m,index,f)/(pi*A*A*pow(cyl_bessel_j(1,RB[1][m]),2)*exp(-RB[1][m]*hj));
        }   
        else{
            w = 2*f_integral2(0,rj,0,2*pi,a,g,h,n,m,index,f)/(pi*A*A*pow(cyl_bessel_j(n+1,RB[n+1][m]),2)*exp(-RB[1][m]*hj));
        }
    }
    if(index==2)//F'
    {
        if(n==0){
            w = 0;
        }
        else{
            w = 2*f_integral2(0,rj,0,2*pi,a,g,h,n,m,index,f)/(pi*A*A*pow(cyl_bessel_j(n+1,RB[n+1][m]),2)*exp(-RB[1][m]*hj));
        }
    }
    if(index==3)//G'
    {
        if(n==0){
            w = 0;
        }  
        else{
            w = 2*f_integral2(0,rj,0,2*pi,a,g,h,n,m,index,f)/(pi*A*A*pow(cyl_bessel_j(n+1,RB[n+1][m]),2)*exp(-RB[1][m]*hj));
        }
    }
    return w;
}


//求F, G, F', G'
double **GCL_FG(int index)
{
    double **mat = new double*[M+1];
    for (int i = 0; i < M + 1;i++)
    {
        mat[i] = new double[M + 1];
        for (int j = 0; j < M + 1;j++)
        {
            mat[i][j] = 0;
        }
    }
    for(int j=1;j<=N;j++)
    {
        int jj = (j-1)*nn;
        for(int i=1;i<=N;i++)
        {
            int ii = (i-1)*nn;
            if(i!=j)
            {
                for(int n=0;n<=nmax;n++)
                {
                    for(int g=0;g<=nmax;g++)
                    {
                        for(int m=1;m<=mmax;m++)
                        {
                            for(int h=1;h<=mmax;h++)
                            {
                                mat[ii+(g+1)*h][jj+(n+1)*m] = FG(i,j,g,h,n,m,index);  //给出矩阵中元素值
                            }
                        }
                    }
                }
            }
        }
    }
    return mat;
}


//H, H'相关
double Fai(double x,double y, double *yq, double *xj,double *uj,double hj,double rj)
{
    double Fai = 1.0/(4*pi)/sqrt( pow((-yq[1]-hj*uj[1]/sqrt(pow(uj[1],2)+pow(uj[2],2))+xj[1]+uj[2]*x*sin(y)/sqrt(pow(uj[1],2)+pow(uj[2],2))),2)
                +pow((-yq[0]+hj*uj[0]*uj[2]/sqrt(pow(uj[1],2)+pow(uj[2],2))+xj[0]+uj[0]*uj[1]*x*sin(y)/sqrt(pow(uj[1],2)+pow(uj[2],2))+sqrt(pow(uj[1],2)+pow(uj[2],2))*x*cos(y)),2)
                +pow((-yq[2]+hj*uj[0]*uj[2]/sqrt(pow(uj[1],2)+pow(uj[2],2))+xj[0]+uj[0]*uj[1]*x*sin(y)/sqrt(pow(uj[1],2)+pow(uj[2],2))+sqrt(pow(uj[1],2)+pow(uj[2],2))*x*cos(y)),2));
    return Fai;
}

//H积分函数
double fh(double x,double y, double *yq, double *xj,double *uj,double hj,double rj,int n,int m,int index)
{
    double hvalue=0;
    if(index==0) //H
        if(n==0)
            hvalue = x*cyl_bessel_j(0,RB[1][m]*x)*Fai(x,y,yq,xj,uj,hj,rj);
        else
            hvalue = x*cyl_bessel_j(n,RB[n+1][m]*x)*cos(n*y)*Fai(x,y,yq,xj,uj,hj,rj);
    if(index==1) //H'
        if(n!=0)
            hvalue = x*cyl_bessel_j(n,RB[n+1][m]*x)*sin(n*y)*Fai(x,y,yq,xj,uj,hj,rj);
    return hvalue;
}

//H二重积分
double fh_integral2(double ax,double bx,double ay,double by, double *yq, double *xj,double *uj,double hj,double rj,int n,int m,int index,
		double(*fh)(double x,double y, double *yq, double *xj,double *uj,double hj,double rj,int n,int m,int index),int precision=1000)
{

	double lenx=bx-ax,leny=by-ay;
	double interval=1.0/precision;
	unsigned long Nx=lenx/interval,Ny=leny/interval;
	double result=0;
	for(unsigned long i=0;i<Nx;++i){
		for(unsigned long j=0;j<Ny;++j){
			result+=fh(ax+i*interval,ay+j*interval,yq,xj,uj,hj,rj,n,m,index)*(interval*interval);
		}
	}
    return result;
}

//求H,H'内部元素
double  H(double *yq,int j,int n,int m,int index)
{
    double w = 0;
    double xj[3], uj[3];
    double hj = S.h[j - 1], rj = S.r[j - 1];
    for (int k = 0; k < 3;k++)
    {
        xj[k] = S.x[j-1][k];
        uj[k] = S.u[j-1][k];
    }
    if(index==0) //H
        if(n==0)
            w = fh_integral2(0,rj,0,2*pi,yq,xj,uj,hj,rj,n,m,index,fh)/(pi*A*A*(cyl_bessel_j(1,pow(RB[1][m],2))*exp(-RB[1][m]*hj)));
        else
            w = 2*fh_integral2(0,rj,0,2*pi,yq,xj,uj,hj,rj,n,m,index,fh)/(pi*A*A*(cyl_bessel_j(n+1,pow(RB[n+1][m],2))*exp(-RB[1][m]*hj)));
    if(index==1) //H'
        if(n==0)
            w = 0;
        else
            w = 2*fh_integral2(0,rj,0,2*pi,yq,xj,uj,hj,rj,n,m,index,fh)/(pi*A*A*(cyl_bessel_j(n+1,pow(RB[n+1][m],2))*exp(-RB[1][m]*hj)));
    return w;
}

//求H,H'
double ** GCL_H(int index)
{
    double **mat = new double *[M + 1];
    for (int i=0;i<M+1;i++)
    {
        mat[i]=new double[p+1];
        for (int j = 0; j < p + 1;j++)
        {
            mat[i][j] = 0;
        }
    }
    double yq[3];
    for(int q=1;q<p;q++)
    {
        for (int k = 0; k < 3;k++)
        {
            yq[k] = y[q-1][k];
        }
            for (int j = 1; j < N; j++)
            {
                int jj = (j - 1) * nn;
                for (int n = 0; n <= nmax; n++)
                {
                    for (int m = 1; m <= mmax; m++)
                    {
                        mat[jj + (n + 1) * m][q] = H(yq, j, n, m, index); //给出矩阵中元素值
                    }
                }
            }
    }
    return mat;
}



double * LU(double a[2*M+1][2*M+1], double b[2*M+1])
{
    double l[2*M+1][2*M+1] = { 0 };
    double u[2*M+1][2*M+1] = { 0 };
    int i, r, k;
    //进行U的第一行的赋值
    for (i = 1; i<=2*M; i++)
    {
        u[1][i] = a[1][i];
    }

    //进行L的第一行的赋值
    for (i = 1; i<=2*M; i++)
    {
        l[i][1] = a[i][1] / u[1][1];
    }

    //计算U剩下的行数和L剩下的列数
    for (r = 2; r<=2*M; r++)
    {
        for (i = r; i <=2*M; i++)
        {
            double sum1 = 0;
            for (k = 1; k <= r; k++)
            {
                sum1 += l[r][k] * u[k][i];
                //cout << "" << r << "" << sum1 << endl;
            }
            u[r][i] = a[r][i] - sum1;
        }


        if(r!=2*M)
        for(i=r+1;i<=2*M;i++)
        {
            double sum2 = 0;
              for (k = 1; k<=r; k++)
            {
                  sum2 += l[i][k] * u[k][r];
            }
                l[i][r] = (a[i][r] - sum2) / u[r][r];
        }

    }

    double y[2*M+1] = { 0 };
    y[1] = b[1];
    for (i = 2; i<=2*M; i++)
    {
        double sum3 = 0;
        for (k = 1; k<i; k++)
            sum3 += l[i][k] * y[k];
        y[i] = b[i] - sum3;
    }
    double *x = new double[2 * M + 1];
    for (int i = 0; i < 2 * M + 1;i++)
    {
        x[i] = 0;
    }
    x[2 * M] = y[2 * M] / u[2 * M][2 * M];
    for (i = 2*M - 1; i >= 1; i--)
    {
        double sum4 = 0;
        for (k = i + 1; k<=2*M; k++)
            sum4 += u[i][k] * x[k];
        x[i] = (y[i] - sum4) / u[i][i];
    }
    return x;
}

//求系数C,D
double **GCL_CD()
{
    double W[2 * M + 1][2 * M + 1]={0};
    double Y[2 * M + 1][p + 1] = {0};
    double **A = new double *[2 * M + 1];
    for (int i = 0; i < 2 * M + 1;i++)
    {
        A[i] = new double[2 * M + 1];
        for (int j = 0; j <  2 * M + 1; j++)
        {
            A[i][j] = 0;
        }
    }
    for(int i = 1; i <= M;i++)
    {
        for (int j = 1; j < M;j++)
        {
            if(i==j)
            {
                W[i][j]=GCL_FG(0)[i][j]; //F
                W[i][j+M]=GCL_FG(1)[i][j]+1; //G
                W[i+M][j]=GCL_FG(2)[i][j]+1; //F'
                W[i+M][j+M]=GCL_FG(3)[i][j]; //G'
            }
            else
            {
                W[i][j]=GCL_FG(0)[i][j]; //F
                W[i][j+M]=GCL_FG(1)[i][j]; //G
                W[i+M][j]=GCL_FG(2)[i][j]; //F'
                W[i+M][j+M]=GCL_FG(3)[i][j]; //G'
            }
        }
    }
    for (int i = 0; i <= M;i++)
    {
        for (int j = 1; j <= p;j++)
        {
            Y[i][j] = GCL_H(0)[i][j];
            Y[i + M][j] = GCL_H(1)[i][j];
        }
    }
    double b[p + 1][2 * M + 1] = {0};
    for (int i = 1; i < 2*M + 1;i++)
    {
        for (int j = 1; j < p+1;j++)
        {
            b[j][i] = Y[i][j];
        }
    }
    for (int i = 1; i < 2*M + 1;i++)
    {
        for (int j = 1; j < p+1;j++)
        {
            A[i][j] = LU(W, b[i])[i];
        }
    }
    return A;
}

//求笛卡尔坐标对应的柱坐标
double * GCL_cart2cyl(int i,int q)
{
    double xq[3]={0};
    for(int i=1;i<=N;i++)
    {
        for(int q=1;q<=o;q++)
        {
            for (int k = 0; k < 3;k++)
            {
                xq[k] = x[q][k] - S.x[i][k];
            }
        }
    }
    double si = xq[0]*S.u[i][0]+xq[1]*S.u[i][1]+xq[2]*S.u[i][2];
    double roui = sqrt(xq[0]*xq[0]+xq[1]*xq[1]+xq[2]*xq[2] - si*si);
    double faii = 0;
    if(roui==0)
        faii=0;
    else if(xq[1]>=0)
        faii = acos(xq[0]/roui);
    else
        faii = acos(-xq[0]/roui) + pi;
    double *a = new double[3];
    a[0] = roui;
    a[1] = faii;
    a[2] = si;
    return a;
}

//求每个局部解gi
double *** GCL_gi()
{
    double ***gp=new double **[N+1];
    for(int i=0;i<=N;i++)
    {
        gp[i] = new double *[o + 1];
        for(int q=0;q<=o;q++)
        {
            gp[i][q] = new double[p + 1];
            for(int j=0;j<=p;j++)
            {
                gp[i][q][j]=0;
            }
        }
    }
    double xq[] = {0};
    for(int i=1;i<=N;i++)
    {
        for(int q=1;q<=o;q++)
        {
            xq[q]=x[q]- S.x[i];
        }
    }
    double a[3]={0};
    for(int i=1;i<=N;i++)
    {
        int ii = (i-1)*nn;
        for(int q=1;q<=o;q++)
        {
            memcpy(a,GCL_cart2cyl(i, q),3);
            for(int n=0;n<=nmax;n++)
            {
                for(int m=1;m<=mmax;m++)
                {
                    for(int j=1;j<=p;j++)
                    {
                        gp[i][q][j] = gp[i][q][j] + cyl_bessel_j(n,RB[n+1][m]*a[0])*( GCL_CD()[ii+(n+1)*m][j]*sin(n*a[1]) + GCL_CD()[ii+(n+1)*m+M][j]*cos(n*a[1]))*exp(-RB[n+1][m]*a[2]);
                    }
                }
            }
        }
    }
    return gp;
}


//求基本解
double ** GCL_FundSolu()
{
    double ** mat=new double*[o+1];
    for(int i=0;i<=o;i++)
    {
        mat[i] = new double[p + 1];
        for(int j=0;j<=p;j++)
        {
            mat[i][j]=0;
        }
    }
    double sum[o+1][p+1] = {0};
    for(int i=1;i<=o;i++)
    {
        for(int j=1;j<=p;j++)
        {
            for (int k = 0; k < 3;k++)
            {
                sum[i][j]=sum[i][j]+pow((x[i][k] - y[j][k]),2);
            }
            mat[i][j]=1.0/(4*pi) /sqrt(sum[i][j]);
        }
    }
    return mat;
}

int main()
{
    double mat[o+1][p+1]={0};
    cout << "Green Function is: " << endl;
    //求最后的格林函数Green Function
    for(int i=1;i<=N;i++)
    {
        for(int q=1;q<=o;q++)
        {
            for(int j=1;j<=p;j++)
            {
                mat[q][j]=GCL_FundSolu()[q][j]-GCL_gi()[i][q][j];
                cout<<mat[q][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}